#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "condiment_decorator.h"

/*
 * Decorator Common
 */
void getDecoratorDescription(Beverage* self, char* buffer) {
    CondimentDecorator* decorator = (CondimentDecorator*)self;
    decorator->wrappedBeverage->getDescription(decorator->wrappedBeverage, buffer);
    strcat(buffer, decorator->beverage.description);
}