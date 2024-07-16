#include <stdio.h>
#include <stdlib.h>
#include "DuckClass/MallardDuck.h"
#include "FlyBehaviorInterface/FlyWithWings.h"
#include "QuackBehaviorInterface/Quack.h"

static void swim(Duck *self) {
    printf("모든 오리는 물에 뜹니다. 가짜 오리도 뜨죠\n");
}

static void display(Duck *self) {
    printf("나는 물오리에요!\n");
}

void initMallardDuck(MallardDuck *self) {
    Duck *this = (Duck *)self;
    __initDuck(this, swim, display);

    FlyBehavior *flyWithWings = malloc(sizeof(FlyWithWings));
    initFlyWithWings(flyWithWings);
    this->setFlyBehavior(this, flyWithWings);

    QuackBehavior *quack = malloc(sizeof(Quack));
    initQuack(quack);
    this->setQuackBehavior(this, quack);
}