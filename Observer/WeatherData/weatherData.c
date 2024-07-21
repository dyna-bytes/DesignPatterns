#include "WeatherData/weatherData.h"
#include "Common/common.h"

void registerObserver(WeatherData *self, Observer *obs) {
    void *ret;
    if (!self->observers) {
        self->observers = list_create(NULL);
        PRINT_NOTI("Created list head");
    }

    ListNode *new = list_create(obs);
    ret = list_insert(self->observers, new);
    if (!ret)
        PRINT_ERR("Failed to create new node");
}

void removeObserver(WeatherData *self, Observer *obs) {
    int ret;
    ret = list_erase(self->observers, obs);
    if (!ret)
        PRINT_ERR("Failed to erase node");
}

void notifyObserver(WeatherData *self) {
    ListNode *curr;
    Observer *curr_obs;
    list_for_each(curr, self->observers) {
        curr_obs = (Observer *)curr->data;
        curr_obs->update(curr_obs, self->temperature, self->humidity, self->pressure);
    }
}

void measuremeantsChanged(WeatherData *self) {
    Subject *super = &self->super;
    super->notifyOberservers(super);
}

void setMeasurements(WeatherData *self,
    float temperature, float humidity, float pressure)
{
    self->temperature = temperature;
    self->humidity = humidity;
    self->pressure = pressure;
    self->measurementsChanged(self);
}

WeatherData gWeaterData = {
    .observers = NULL,
    .registerObserver = registerObserver,
    .removeObserver = removeObserver,
    .notifyObserver = notifyObserver,
    .measurementsChanged = measuremeantsChanged,
    .setMeasurements = setMeasurements
};