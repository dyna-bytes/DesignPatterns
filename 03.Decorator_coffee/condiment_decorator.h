/*
 * Decorator Class
 */

#ifndef _CONDIMENT_DECORATOR_H_
#define _CONDIMENT_DECORATOR_H_

#include "beverage.h"
#define __DECORATER_CLASS__

typedef struct __DECORATER_CLASS__ CondimentDecorator {
    Beverage beverage;
    Beverage* wrappedBeverage;
} CondimentDecorator;

void getDecoratorDescription(Beverage* self, char* buffer);

#endif