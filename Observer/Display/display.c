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
    self->weatherData = weatherData;
    weatherData->registerObserver(weatherData, &self->superObserver);

    self->update = update;
    self->display = display;
}