#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "beverage.h"
#include "condiment_decorator.h"

void getBeverageDescription(Beverage* self, char* buffer) {
    printf("%s %d\n", __func__, __LINE__);
    strcat(buffer, self->description);
}

double cost(Beverage* beverage) {
    return 0;
}

Beverage* newBeverage() {
    Beverage* beverage = malloc(sizeof(Beverage));
    strcpy(beverage->description, BASE_BEVERAGE);
    beverage->getDescription = getBeverageDescription;
    beverage->cost = cost;

    return beverage;
}

void freeBeverage(Beverage* beverage) {
    if (beverage == NULL) return;

    if (strcmp(beverage->description, BASE_BEVERAGE) == 0) {
        free(beverage);
        return;
    }

    CondimentDecorator* decorator = (CondimentDecorator*)beverage;
    freeBeverage(decorator->wrappedBeverage);
    free(decorator);
}