#include <stdio.h>
#include "FlyBehaviorInterface/FlyNoWay.h"

static void flyNoWay() {
    printf("저는 못 날아요\n");
}

void initFlyNoWay(FlyNoWay *self) {
    __initFlyBehavior(&self->super, flyNoWay);
}