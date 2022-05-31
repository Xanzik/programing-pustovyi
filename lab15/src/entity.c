#include "entity.h"
/**
 * @file entity.h
 * @brief Файл з реалізацією функцій
 *
 * @author Pustovyi I.
 * @date 26-apr-2022
 * @version 1.0
 */
void show1(struct Container *p) {
    for(unsigned long int i = 0; i < (p->size)-1; i++) {
        printf("Watch: %s\nPermeability: %s\nPrice: %d$\nMade By - %s from %s\nType: %s\n\n", (p+i)->watches->name, (p+i)->watches->water, (p+i)->watches->price, (p+i)->watches->made_by.firma, (p+i)->watches->made_by.country, (p+i)->watches->type);
}
}
void add(struct Container *container, unsigned long int *x) {
    size_t place = 1000;
    struct watch *newwatches = malloc(1 * sizeof(struct watch));
    scanf("%s %s %d %s %s %s", newwatches->name, newwatches->water, &newwatches->price, newwatches->made_by.firma, newwatches->made_by.country, newwatches->type);
    place = container->size;
    struct watch *p = malloc((container->size + 1) * sizeof(struct watch));
    memcpy(p, container->watches, place* sizeof(struct watch));
    memcpy(p + place, newwatches, sizeof(struct watch));
    memcpy(p + place + 1, container->watches + place, (container->size - place) * sizeof(struct watch));
    free(container->watches);
    container->watches = p;
    container->size++;
    for(unsigned long int i = 0; i < container->size; i++) {
        printf("Watch: %s\nPermeability: %s\nPrice: %d$\nMade By - %s from %s\nType: %s\n\n", (p+i)->name, (p+i)->water, (p+i)->price, (p+i)->made_by.firma, (p+i)->made_by.country, (p+i)->type);
    }
    x++;
    free(newwatches);
}

void put_away(struct Container * container, size_t size, unsigned long int *x) {
    struct watch *p = malloc((container->size - 1) * sizeof(struct watch));
    if (size >= container->size) size = container->size - 1;
    memcpy(p, container->watches, size * sizeof(struct watch));
    memcpy(p + size, container->watches + size + 1, (container->size - size - 1) * sizeof(struct watch));
    free(container->watches);
    container->size--;
    container->watches = p;
    for(unsigned long int i = 0; i<container->size; i++) {
        printf("Watch: %s\nPermeability: %s\nPrice: %d$\nMade By - %s from %s\nType: %s\n\n", (p+i)->name, (p+i)->water, (p+i)->price, (p+i)->made_by.firma, (p+i)->made_by.country, (p+i)->type);
    }
    x--;
}