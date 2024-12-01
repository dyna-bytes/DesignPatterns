#ifndef __VEGGIE_PIZZA_H__
#define __VEGGIE_PIZZA_H__
#include "pizza.h"
#include "pizzaIngredientFactory.h"

__EXTEND__ struct VeggiePizza {
    struct Pizza super;
    struct PizzaIngredientFactory *ingredientFactory;
};

struct VeggiePizza *createVeggiePizza(struct PizzaIngredientFactory *ingredientFactory);
void deleteVeggiePizza(struct Pizza *veggiePizza);

#endif