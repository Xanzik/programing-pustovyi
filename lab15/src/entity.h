#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <string.h>
#include <math.h>
#define SIZE 100

struct created_by{
    char firma[SIZE];
    char country[SIZE];
};  
struct watch{
    char name [SIZE];
    char water [SIZE];
    int price;
    struct created_by made_by;
    char type[SIZE];
}; 
struct Container{
    struct watch *watches;
    size_t size;
};

//void add(struct Container *container, size_t size, struct watch *newwatches);

void put_away(struct Container * container, size_t size, unsigned long int *x);

void show1(struct Container *p);

void add(struct Container *container, unsigned long int *x);