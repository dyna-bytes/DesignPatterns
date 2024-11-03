#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cheese_pizza.h"

double cheeseCost(Pizza* pizza) {
    CheeseDecorator* cheesePizza = (CheeseDecorator*)pizza;
    return cheesePizza->wrappedPizza->cost(cheesePizza->wrappedPizza) + 1.25;
}

void cheeseDescription(Pizza* pizza, char* buffer) {
    CheeseDecorator* cheesePizza = (CheeseDecorator*)pizza;
    cheesePizza->wrappedPizza->getDescription(cheesePizza->wrappedPizza, buffer);
    strcat(buffer, " with Cheese");
}

Pizza* addCheese(Pizza* basePizza) {
    CheeseDecorator* cheesePizza = (CheeseDecorator*)malloc(sizeof(CheeseDecorator));
    cheesePizza->wrappedPizza = basePizza;
    strcpy(cheesePizza->pizza.description, "Cheese Topping");
    cheesePizza->pizza.cost = cheeseCost;
    cheesePizza->pizza.getDescription = cheeseDescription;
    return (Pizza*)cheesePizza;
}
