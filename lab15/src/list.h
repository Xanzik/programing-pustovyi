#include "entity.h"
/**
 * @file list.h
 * @brief Файл з описом функцій
 *
 * @author Pustovyi I.
 * @date 26-apr-2022
 * @version 1.0
 */
/**
 * @brief функція вводу з файлу
 * 
 * @param watches структура
 * @param x індекс
 */
void input(struct watch *watches, size_t x);
/**
 * @brief вивод структур
 * 
 * @param p масив елементів
 */
void show(struct watch *p, size_t x);
/**
 * @brief сортіровка структур
 * 
 * @param p масив елементів
 */
void sort(struct watch *p, size_t x);
/**
 * @brief вивод у файл
 * 
 * @param p масив елемтів
 */
void output(struct watch *p, size_t x);
/**
 * @brief функція поіску за ціною
 * 
 * @param p масив елементів
 * @param cost ціна
 */
void search(struct watch *p, int cost, size_t x);
/**
 * @brief кількість структур
 * 
 * @return size_t 
 */
size_t count();