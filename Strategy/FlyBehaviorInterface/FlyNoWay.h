#ifndef __FLYWITHWINGS_H
#define __FLYWITHWINGS_H
#include "FlyBehaviorInterface/FlyBehavior.h"

typedef struct FlyNoWay {
    FlyBehavior super;
} FlyNoWay;

void initFlyNoWay(FlyNoWay *self);

#endif