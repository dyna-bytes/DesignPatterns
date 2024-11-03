#include "WeatherData/weatherData.h"
#include "Common/common.h"

void* registerObserver(struct Subject *self, Observer *obs) {
    void *ret;
    struct WeatherData *weatherData = container_of(self, struct WeatherData, super);

    if (!weatherData->observers) {
        weatherData->observers = list_create(NULL);
        PRINT_NOTI("Created list head [%p]", weatherData->observers);
    }

    ListNode *new = list_create(obs);
    PRINT_NOTI("Created list node [%p] obs [%p]", new, obs);

    ret = list_insert(weatherData->observers, new);
    if (!ret)
        PRINT_ERR("Failed to create new node");

    PRINT_NOTI("Complete");
    return ret;
}

void removeObserver(struct Subject *self, Observer *obs) {
    int deleted_num;
    struct WeatherData *weatherData = container_of(self, struct WeatherData, super);

    deleted_num = list_erase(weatherData->observers, obs);
    PRINT_NOTI("Erased [%d] list nodes", deleted_num);
    PRINT_NOTI("Complete");
}

void notifyObservers(struct Subject *self) {
    struct WeatherData *weatherData = container_of(self, struct WeatherData, super);
    ListNode *curr;
    Observer *curr_obs;
    list_for_each(curr, weatherData->observers) {
        curr_obs = (Observer *)curr->data;
        if (curr_obs == NULL) continue;

        curr_obs->update(curr_obs, weatherData->temperature, weatherData->humidity, weatherData->pressure);
    }
    PRINT_NOTI("Complete");
}

void measurementsChanged(WeatherData *self) {
    Subject *super = &self->super;
    super->notifyObservers(super);
}

void setMeasurements(WeatherData *self,
    float temperature, float humidity, float pressure)
{
    self->temperature = temperature;
    self->humidity = humidity;
    self->pressure = pressure;
    self->measurementsChanged(self);
}

WeatherData gWeatherData = {
    .observers = NULL,
    .super.registerObserver = registerObserver,
    .super.removeObserver = removeObserver,
    .super.notifyObservers = notifyObservers,
    .measurementsChanged = measurementsChanged,
    .setMeasurements = setMeasurements
};