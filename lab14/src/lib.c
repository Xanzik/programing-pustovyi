/**
 * @file lib.c
 * @brief Файл з реалізацією функцій
 *
 * @author Pustovyi I.
 * @date 26-apr-2022
 * @version 1.0
 */
#include "lib.h"
void input(struct watch *watches, int size) {
    FILE *file = fopen("/home/xanzik/programing-pustovyi/lab14/assets/input.txt", "r");
    if (file == NULL) {
        printf("Error: File is empty");
    }
    else {
    for(watch *p = watches; p < watches + size; p++) {
        fscanf(file, "%[^\n] %[^\n] %d\n %[^\n] %[^\n] %[^\n]\n", p->name, p->water, &p->price, p->made_by.firma, p->made_by.country, p->type);
    }
    fclose(file);
    }
}
void show(watch *p) {
    for(int i = 0; i < count_of_watches; i++) {
        printf("Watch: %s\nPermeability: %s\nPrice: %d$\nMade By - %s from %s\nType: %s\n\n", (p+i)->name, (p+i)->water, (p+i)->price, (p+i)->made_by.firma, (p+i)->made_by.country, (p+i)->type);
}
}
void sort(watch *p) {
    watch tmp;
    for(int i = 0; i < count_of_watches; i++) {
        for(int j = 0; j < count_of_watches - 1; j++) {
            if(p[j].price > p[j + 1].price) {
                tmp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = tmp;
                
            }
        }
    }
}
void search(watch *p, int cost)  {
    FILE *file = fopen("/home/xanzik/programing-pustovyi/lab14/assets/output.txt", "w");
    for(int i = 0; i < count_of_watches; i++) {
        if((p+i)->price < cost) {
        fprintf(file, "%s\n %s\n %d$\n %s\n %s\n %s\n\n", (p+i)->name, (p+i)->water, (p+i)->price, (p+i)->made_by.firma, (p+i)->made_by.country, (p+i)->type);
        }
    }
    fclose(file);
}
void output(watch *p) {
    FILE *file = fopen("C/home/xanzik/programing-pustovyi/lab14/assets/output.txt", "w");
    for(int i = 0; i < count_of_watches; i++) {
        fprintf(file, "%s\n %s\n %d$\n %s\n %s\n %s\n\n", (p+i)->name, (p+i)->water, (p+i)->price, (p+i)->made_by.firma, (p+i)->made_by.country, (p+i)->type);
    }
    fclose(file);
}