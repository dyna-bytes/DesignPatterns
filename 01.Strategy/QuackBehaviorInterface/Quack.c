#include <stdio.h>
#include "QuackBehaviorInterface/Quack.h"

static void quack() {
    printf("꽥!\n");
}

void initQuack(Quack *self) {
    __initQuackBehavior(&self->super, quack);
}