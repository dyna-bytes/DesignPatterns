/*
 * Abstract Components Class
 */

#ifndef _BEVERAGE_H_
#define _BEVERAGE_H_

#define STR_SIZE 128
#define __ABSTRACT_CLASS__

#define BASE_BEVERAGE "[Coffee] "
#define ESPRESSO "Espresso "
#define HOUSEBLEND "House Blend Coffee "
#define MOCHA ", MOCHA "

typedef struct __ABSTRACT_CLASS__ Beverage {
    char description[STR_SIZE];
    void (*getDescription)(struct Beverage *, char *);
    double (*cost)(struct Beverage *);
} Beverage;

Beverage* newBeverage();
void freeBeverage(Beverage* beverage);

#endif