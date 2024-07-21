#ifndef __WEATHERDATA_H
#define __WEATHERDATA_H
#include "Interface/interface.h"
#include "Common/LinkedList/linkedList.h"


typedef struct WeatherData {
    Subject super;
    ListNode *observers;
    float temperature;
    float humidity;
    float pressure;

    void (*registerObserver)(struct WeatherData *self, Observer *obs);
    void (*removeObserver)(struct WeatherData *self, Observer *obs);
    void (*notifyObserver)(struct WeatherData *self);
    void (*measurementsChanged)(struct WeatherData *self);
    void (*setMeasurements)(struct WeatherData *self,
        float temperature, float humidity, float pressure);
} WeatherData;

extern WeatherData gWeatherData;

#endif