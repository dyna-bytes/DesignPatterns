#ifndef __PIZZA_H__
#define __PIZZA_H__
#include "pizzaIngredientFactory.h"

__ABSTRACT__ struct Pizza {
    const char *name;

    struct Dough *dough;
    struct Sauce *sauce;
    struct Veggies **veggies;
    struct Cheese *cheese;
    struct Pepperoni *perpperoni;
    struct Clams *clam;

    __ABSTRACT__ void (*prepare)(struct Pizza *this);
    void (*bake)(struct Pizza *this);
    void (*cut)(struct Pizza *this);
    void (*box)(struct Pizza *this);
    void (*setName)(struct Pizza *this, const char *name);
    const char *(*getName)(struct Pizza *this);
    const char *(*toString)(struct Pizza *this);
};

void bake(struct Pizza *this);
void cut(struct Pizza *this);
void box(struct Pizza *this);
void setName(struct Pizza *this, const char *name);
const char *getName(struct Pizza *this);
const char *toString(struct Pizza *this);

#endif