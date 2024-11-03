#include <stdio.h>
#include "QuackBehaviorInterface/MuteQuack.h"

static void muteQuack() {
    printf("<< 조용~ >>!\n");
}

void initMuteQuack(MuteQuack *self) {
    __initQuackBehavior(&self->super, muteQuack);
}