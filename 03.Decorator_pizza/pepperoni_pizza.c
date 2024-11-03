#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pepperoni_pizza.h"

double pepperoniCost(Pizza* pizza) {
    PepperoniDecorator* pepperoniPizza = (PepperoniDecorator*)pizza;
    return pepperoniPizza->wrappedPizza->cost(pepperoniPizza->wrappedPizza) + 1.75;
}

void pepperoniDescription(Pizza* pizza, char* buffer) {
    PepperoniDecorator* pepperoniPizza = (PepperoniDecorator*)pizza;
    pepperoniPizza->wrappedPizza->getDescription(pepperoniPizza->wrappedPizza, buffer);
    strcat(buffer, " with Pepperoni");
}

Pizza* addPepperoni(Pizza* basePizza) {
    PepperoniDecorator* pepperoniPizza = (PepperoniDecorator*)malloc(sizeof(PepperoniDecorator));
    pepperoniPizza->wrappedPizza = basePizza;
    strcpy(pepperoniPizza->pizza.description, "Pepperoni Topping");
    pepperoniPizza->pizza.cost = pepperoniCost;
    pepperoniPizza->pizza.getDescription = pepperoniDescription;
    return (Pizza*)pepperoniPizza;
}
