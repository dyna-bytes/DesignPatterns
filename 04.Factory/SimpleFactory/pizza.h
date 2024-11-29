#ifndef __PIZZA_H__
#define __PIZZA_H__
#define __ABSTRACT__
#define __EXTEND__

struct Pizza {
    const char* name;
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

void prepare(struct Pizza *this);
void bake(struct Pizza *this);
void cut(struct Pizza *this);
void box(struct Pizza *this);

#endif