#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <string.h>
#define SIZE 100
/**
 * @file entity.h
 * @brief Файл з описом cтруктур
 *
 * @author Pustovyi I.
 * @date 26-apr-2022
 * @version 1.0
 */
/**
 * @brief підструктура
 * 
 */
struct created_by{
    char firma[SIZE];
    char country[SIZE];
};  
/**
 * @brief Структура "часи"
 * 
 */
struct watch{
    char name [SIZE];
    char water [SIZE];
    int price;
    struct created_by made_by;
    char type[SIZE];
}; 
/**
 * @brief Список
 * 
 */
struct Container{
    struct watch *watches;
    size_t size;
};
/**
 * @brief вдалити зі списку
 * 
 * @param container список
 * @param size індекс
 * @param x наявний розмір
 */
void put_away(struct Container * container, size_t size, unsigned long int *x);
/**
 * @brief вивод списку
 * 
 * @param p 
 */
void show1(struct Container *p);
/**
 * @brief додовання до списку
 * 
 * @param container список
 * @param x наявний розмір
 */
void add(struct Container *container, unsigned long int *x);
