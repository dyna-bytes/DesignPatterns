#include <stdio.h>
#include <stdlib.h>
#include "DuckClass/MallardDuck.h"
#include "FlyBehaviorInterface/FlyWithWings.h"
#include "FlyBehaviorInterface/FlyNoWay.h"
#include "QuackBehaviorInterface/Quack.h"
#include "QuackBehaviorInterface/MuteQuack.h"

int main() {
    Duck *mallardDuck = malloc(sizeof(MallardDuck));
    initMallardDuck((MallardDuck *)mallardDuck);
    mallardDuck->display(mallardDuck);
    mallardDuck->performFly(mallardDuck);
    mallardDuck->performQuack(mallardDuck);

    QuackBehavior *muteQuack = malloc(sizeof(MuteQuack));
    initMuteQuack((MuteQuack *)muteQuack);
    mallardDuck->setQuackBehavior(mallardDuck, muteQuack);
    mallardDuck->performQuack(mallardDuck);

    free(mallardDuck);
    return 0;
}