#ifndef __INTERFACE_H
#define __INTERFACE_H

typedef struct Observer {
    void (*update)(struct Observer *self,
        float temp, float humidity, float pressure);
} Observer;

typedef struct Subject {
    void* (*registerObserver)(struct Subject *self, struct Observer *obs);
    void (*removeObserver)(struct Subject *self, struct Observer *obs);
    void (*notifyObservers)(struct Subject *self);
} Subject;

typedef struct DisplayElement {
    void (*display)(struct DisplayElement *self);
} DisplayElement;

#endif