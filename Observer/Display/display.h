#ifndef __DISPLAY_H
#define __DISPLAY_H
#include "WeatherData/weatherData.h"
#include "Interface/interface.h"

typedef struct CurrentConditionDisplay {
    DisplayElement superDisplayElement;
    Observer superObserver;

    float temperature;
    float humidity;
    WeatherData *weatherData;

} CurrentConditionDisplay;

void initCurrentConditionDisplay(
    CurrentConditionDisplay *self,
    WeatherData *weatherData);
void deinitCurrentConditionDisplay(
    CurrentConditionDisplay *self,
    WeatherData *weatherData);
#endif