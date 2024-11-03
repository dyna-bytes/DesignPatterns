/*
 * Concrete Components Class
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "blend.h"
#include "condiment_decorator.h"

/*
 * Espresso
 */
double espressoCost(Beverage* self) {
    CondimentDecorator* espresso = (CondimentDecorator*)self;
    return espresso->wrappedBeverage->cost(espresso->wrappedBeverage)
        + 1.99;
}

Beverage* addEspresso(Beverage* beverage) {
    CondimentDecorator* espresso = malloc(sizeof(CondimentDecorator));
    espresso->wrappedBeverage = beverage;

    strcpy(espresso->beverage.description, ESPRESSO);
    espresso->beverage.getDescription = getDecoratorDescription;
    espresso->beverage.cost = espressoCost;

    return (Beverage*) espresso;
}

/*
* House Blend
*/
double houseBlendCost(Beverage *self) {
    CondimentDecorator* houseBlend = (CondimentDecorator*)self;
    return houseBlend->wrappedBeverage->cost(houseBlend->wrappedBeverage)
        + 0.89;
}

Beverage* addHouseBlend(Beverage* beverage) {
    CondimentDecorator* houseBlend = malloc(sizeof(CondimentDecorator));
    houseBlend->wrappedBeverage = beverage;

    strcpy(houseBlend->beverage.description, HOUSEBLEND);
    houseBlend->beverage.getDescription = getDecoratorDescription;
    houseBlend->beverage.cost = houseBlendCost;

    return (Beverage*) houseBlend;
}

/**
 * Mocha
 */

double mochaCost(Beverage *self) {
    CondimentDecorator* mocha = (CondimentDecorator*)self;
    return mocha->wrappedBeverage->cost(mocha->wrappedBeverage)
        + 0.20;
}

Beverage* addMocha(Beverage* beverage) {
    CondimentDecorator* mocha = malloc(sizeof(CondimentDecorator));
    mocha->wrappedBeverage = beverage;

    strcpy(mocha->beverage.description, MOCHA);
    mocha->beverage.getDescription = getDecoratorDescription;
    mocha->beverage.cost = mochaCost;

    return (Beverage*) mocha;
}