#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pizza.h"

void bake(struct Pizza *this) {
    printf("baking %s pizza\n", this->name);
}

void cut(struct Pizza *this) {
    printf("cutting %s pizza\n", this->name);
}

void box(struct Pizza *this) {
    printf("boxing %s pizza\n", this->name);
}

void setName(struct Pizza *this, const char *name) {
    this->name = name;
}

const char *getName(struct Pizza *this) {
    return this->name;
}

const char *toString(struct Pizza *this) {

};