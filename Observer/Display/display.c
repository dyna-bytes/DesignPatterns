#include <stddef.h>
#include "Display/display.h"
#include "Common/common.h"

void update(Observer *self, float temp, float humidity, float pressure) {
    CurrentConditionDisplay *super = container_of(self, CurrentConditionDisplay, superObserver);
    DisplayElement *superDisplayElement = &super->superDisplayElement;

    super->temperature = temp;
    super->humidity = humidity;
    superDisplayElement->display(superDisplayElement);
}

void display(DisplayElement *self) {
    CurrentConditionDisplay *super = container_of(self, CurrentConditionDisplay, superDisplayElement);
    PRINT_NOTI("현재 상태: 온도 %f F, 습도 %f %%", super->temperature, super->humidity);
}


void initCurrentConditionDisplay(
    CurrentConditionDisplay *self,
    WeatherData *weatherData)
{
    DisplayElement *superDisplayElement = &self->superDisplayElement;
    Observer *superObserver = &self->superObserver;

    self->weatherData = weatherData;
    superObserver->update = update;
    superDisplayElement->display = display;
    weatherData->super.registerObserver(&weatherData->super, &self->superObserver);

    PRINT_DBG("update [%p]", superObserver->update);
    PRINT_DBG("display [%p]", superDisplayElement->display);
    PRINT_NOTI("Complete");
}

void deinitCurrentConditionDisplay(
    CurrentConditionDisplay *self,
    WeatherData *weatherData)
{
    weatherData->super.removeObserver(&weatherData->super, &self->superObserver);
    PRINT_NOTI("Complete");
}