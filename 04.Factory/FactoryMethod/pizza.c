#include <stdio.h>
#include "pizza.h"

void prepare(struct Pizza *this) {
    printf("preparing %s pizza\n", this->name);
    printf("preparing %s dough\n", this->dough);
    printf("preparing %s sauce\n", this->sauce);

    ListNode* iter;
    list_for_each(iter, this->toppings) {
        if (iter != this->toppings) // pass head
            printf("+ topping %s\n", (char *)iter->data);
    }
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