#ifndef __CHEESE_PIZZA_H__
#define __CHEESE_PIZZA_H__
#include "pizza.h"
#include "pizzaIngredientFactory.h"

__EXTEND__ struct CheesePizza {
    struct Pizza super;
    struct PizzaIngredientFactory *ingredientFactory;
};

struct CheesePizza *createCheesePizza(struct PizzaIngredientFactory *ingredientFactory);
void deleteCheesePizza(struct Pizza *cheesePizza);

#endif