#ifndef __CLAM_PIZZA_H__
#define __CLAM_PIZZA_H__
#include "pizza.h"
#include "pizzaIngredientFactory.h"

__EXTEND__ struct ClamPizza {
    struct Pizza super;
    struct PizzaIngredientFactory *ingredientFactory;
};

struct ClamPizza *createClamPizza(struct PizzaIngredientFactory *ingredientFactory);
void deleteClamPizza(struct Pizza *clamPizza);

#endif