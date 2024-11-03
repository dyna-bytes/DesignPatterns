#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "beverage.h"
#include "blend.h"

int main() {
    Beverage* beverage = newBeverage();

    beverage = addEspresso(beverage);
    beverage = addHouseBlend(beverage);
    beverage = addMocha(beverage);
    beverage = addMocha(beverage);

    char descriptionBuffer[STR_SIZE*4] = "";
    beverage->getDescription(beverage, descriptionBuffer);

    printf("description: %s\n", descriptionBuffer);
    printf("cost: $%.2f\n", beverage->cost(beverage));

    freeBeverage(beverage);

    return 0;
}