#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "clamPizza.h"

static void prepare(struct Pizza *this) {
    struct ClamPizza *clamPizza =
        container_of(this, struct ClamPizza, super);

    struct PizzaIngredientFactory *ingredientFactory =
        clamPizza->ingredientFactory;

    this->dough = ingredientFactory->createDough();
    this->sauce = ingredientFactory->createSauce();
    this->cheese = ingredientFactory->createCheese();
    this->clam = ingredientFactory->createClam();

    printf("preparing %s\n", this->name);
    printf("preparing %s\n", this->dough->name);
    printf("preparing %s\n", this->sauce->name);
    printf("preparing %s\n", this->cheese->name);
    printf("preparing %s\n", this->clam->name);
}

struct ClamPizza *createClamPizza(struct PizzaIngredientFactory *ingredientFactory) {
    struct ClamPizza *clamPizza = malloc(sizeof(*clamPizza));

    clamPizza->super.prepare = prepare;
    clamPizza->ingredientFactory = ingredientFactory;
    return clamPizza;
}

void deleteClamPizza(struct Pizza *pizza) {
    struct ClamPizza *clamPizza =
        container_of(pizza, struct ClamPizza, super);

    struct PizzaIngredientFactory *ingredientFactory =
        clamPizza->ingredientFactory;

    ingredientFactory->deleteCheese(pizza->cheese);
    ingredientFactory->deleteDough(pizza->dough);
    ingredientFactory->deleteSauce(pizza->sauce);
    ingredientFactory->deleteVeggies(pizza->veggies);
    ingredientFactory->deleteClam(pizza->clam);

    free(clamPizza);
}