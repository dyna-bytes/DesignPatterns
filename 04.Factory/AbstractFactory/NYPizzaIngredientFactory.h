#ifndef __NY_PIZZA_INGREDIENT_FACTORY_H__
#define __NY_PIZZA_INGREDIENT_FACTORY_H__
#include "pizzaIngredientFactory.h"

struct NYPizzaIngredientFactory {
    __EXTEND__ struct PizzaIngredientFactory super;
};

struct NYPizzaIngredientFactory *createNYPizzaIngredientFactory(void);
void deleteNYPizzaIngredientFactory(void *nyPizzaIngredientFactory);

#endif