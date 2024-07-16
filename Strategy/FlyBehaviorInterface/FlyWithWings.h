#ifndef __FLYWITHWINGS_H
#define __FLYWITHWINGS_H
#include "FlyBehaviorInterface/FlyBehavior.h"

typedef struct FlyWithWings {
    FlyBehavior flyBehavior;
} FlyWithWings;

void initFlyWithWings(FlyWithWings *self);

#endif