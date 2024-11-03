#include <stdio.h>
#include <malloc.h>
#include "Common/common.h"
#include "Display/display.h"
#include "Interface/interface.h"
#include "WeatherData/weatherData.h"

int main() {
    WeatherData *weatherData = &gWeatherData;
    CurrentConditionDisplay *currentDisplay =
        (CurrentConditionDisplay *)malloc
            (sizeof(CurrentConditionDisplay));

    initCurrentConditionDisplay(currentDisplay, weatherData);

    weatherData->setMeasurements(weatherData,
        80, 65, 30.4);
    weatherData->setMeasurements(weatherData,
        82, 70, 29.2);
    weatherData->setMeasurements(weatherData,
        78, 90, 29.2);

    deinitCurrentConditionDisplay(currentDisplay, weatherData);
    free(currentDisplay);
    return 0;
}