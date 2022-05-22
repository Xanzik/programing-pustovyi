#include "entity.h"

void show1(struct Container *p) {
    for(unsigned long int i = 0; i < (p->size)-1; i++) {
        printf("Watch: %s\nPermeability: %s\nPrice: %d$\nMade By - %s from %s\nType: %s\n\n", (p+i)->watches->name, (p+i)->watches->water, (p+i)->watches->price, (p+i)->watches->made_by.firma, (p+i)->watches->made_by.country, (p+i)->watches->type);
}
}

/*void add(struct Container *container, struct watch *newwatches, unsigned long int *x) {
    unsigned long int y = (unsigned long int)x;
    container = realloc(container, sizeof(container)*(y+1));
    scanf("%s %s %d %s %s %s", newwatches->name, newwatches->water, &newwatches->price, newwatches->made_by.firma, newwatches->made_by.country, newwatches->type);
    //container->watches = newwatches;
   memcpy(container->watches, newwatches, sizeof(struct watch));
    x++;
}*/

void add(struct Container *container, unsigned long int *x) {
    size_t place = 1000;
    struct watch *newwatches = malloc(1 * sizeof(struct watch));
    scanf("%s %s %d %s %s %s", newwatches->name, newwatches->water, &newwatches->price, newwatches->made_by.firma, newwatches->made_by.country, newwatches->type);
    place = container->size;
    struct watch *p = malloc((container->size + 1) * sizeof(struct watch));
    memcpy(p, container->watches, place* sizeof(struct watch));
    memcpy(p + place, newwatches, sizeof(struct watch));
    memcpy(p + place + 1, container->watches + place, (container->size - place) * sizeof(struct watch));
    container->watches = p;
    container->size++;
    unsigned long int y = *x;
    y++;
    for(unsigned long int i = 0; i < y; i++) {
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
    unsigned long int y = *x;
    y--;
    for(unsigned long int i = 0; i<y; i++) {
        printf("Watch: %s\nPermeability: %s\nPrice: %d$\nMade By - %s from %s\nType: %s\n\n", (p+i)->name, (p+i)->water, (p+i)->price, (p+i)->made_by.firma, (p+i)->made_by.country, (p+i)->type);
    }
    x--;
}