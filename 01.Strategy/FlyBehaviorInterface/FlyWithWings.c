#include <stdio.h>
#include "FlyBehaviorInterface/FlyWithWings.h"

static void fly() {
    printf("날고 있어요!!\n");
}

void initFlyWithWings(FlyWithWings *self) {
    __initFlyBehavior(&self->super, fly);
}