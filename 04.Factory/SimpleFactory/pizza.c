#include <stdio.h>
#include "pizza.h"

void prepare(struct Pizza *this) {
    printf("preparing %s pizza\n", this->name);
}

void bake(struct Pizza *this) {
    printf("baking %s pizza\n", this->name);
}

void cut(struct Pizza *this) {
    printf("cutting %s pizza\n", this->name);
}

void box(struct Pizza *this) {
    printf("boxing %s pizza\n", this->name);
}