#include "list.h"
/**
 * @file list.h
 * @brief Файл з реалізацією функцій
 *
 * @author Pustovyi I.
 * @date 26-apr-2022
 * @version 1.0
 */
void input(struct watch *watches, size_t x) {
    FILE *file = fopen("/home/xanzik/programing-pustovyi/lab15/assets/input.txt", "r");
    if (file == NULL) {
        printf("Error: File is empty");
    }
    else {
    for(struct watch *p = watches; p < (watches + x); p++) {
        fscanf(file, "%[^\n] %[^\n] %d\n %[^\n] %[^\n] %[^\n]\n", p->name, p->water, &p->price, p->made_by.firma, p->made_by.country, p->type);
    }
    fclose(file);
    }
}

void show(struct watch *p, size_t x) {
    for(size_t i = 0; i < x; i++) {
        printf("Watch: %s\nPermeability: %s\nPrice: %d$\nMade By - %s from %s\nType: %s\n\n", (p+i)->name, (p+i)->water, (p+i)->price, (p+i)->made_by.firma, (p+i)->made_by.country, (p+i)->type);
}
}

void sort(struct watch *p, size_t x) {
    struct watch tmp;
    for(size_t i = 0; i < x; i++) {
        for(size_t j = 0; j < x - 1; j++) {
            if(p[j].price > p[j + 1].price) {
                tmp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = tmp;
                
            }
        }
    }
}

void search(struct watch *p, int cost, size_t x)  {
    FILE *file = fopen("/home/xanzik/programing-pustovyi/lab15assets/output.txt", "w");
    for(size_t i = 0; i < x; i++) {
        if((p+i)->price < cost) {
        fprintf(file, "%s\n %s\n %d$\n %s\n %s\n %s\n", (p+i)->name, (p+i)->water, (p+i)->price, (p+i)->made_by.firma, (p+i)->made_by.country, (p+i)->type);
        }
    }
    fclose(file);
}

void output(struct watch *p, size_t x) {
    FILE *file = fopen("/home/xanzik/programing-pustovyi/lab15/assets/output.txt", "w");
    for(size_t i = 0; i < x; i++) {
        fprintf(file, "%s\n %s\n %d$\n %s\n %s\n %s\n", (p+i)->name, (p+i)->water, (p+i)->price, (p+i)->made_by.firma, (p+i)->made_by.country, (p+i)->type);
    }
    fclose(file);
}

size_t count() {
    size_t lines_count = 0;
	FILE *file = fopen("/home/xanzik/programing-pustovyi/lab15/assets/input.txt", "r");
    while (! feof(file))
    {
        if (fgetc(file) == '\n')
            lines_count++;
    }
    lines_count++;
	size_t cout =  (lines_count / 6);
    fclose(file);
    return cout;
}