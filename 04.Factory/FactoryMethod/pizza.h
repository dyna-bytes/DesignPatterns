#ifndef __PIZZA_H__
#define __PIZZA_H__
#include "linkedList.h"
#define __ABSTRACT__
#define __EXTEND__

struct Pizza {
    const char* name;
    const char* dough;
    const char* sauce;
    ListNode* toppings;

    void (*prepare)(struct Pizza *this);
    void (*bake)(struct Pizza *this);
    void (*cut)(struct Pizza *this);
    void (*box)(struct Pizza *this);
};

struct CheesePizza {
    __EXTEND__ struct Pizza super;
};

struct PepperoniPizza {
    __EXTEND__ struct Pizza super;
};

struct ClamPizza {
    __EXTEND__ struct Pizza super;
};

struct VeggiePizza {
    __EXTEND__ struct Pizza super;
};

///////////////////////////////////////////////////////////

struct NYStyleCheesePizza {
    __EXTEND__ struct CheesePizza super;
};

///////////////////////////////////////////////////////////

struct ChicagoStyleCheesePizza {
    __EXTEND__ struct CheesePizza super;
};

///////////////////////////////////////////////////////////

void prepare(struct Pizza *this);
void bake(struct Pizza *this);
void cut(struct Pizza *this);
void box(struct Pizza *this);

#endif