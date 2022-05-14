/**
 * @file lib.c
 * @brief Файл з реалізацією функцій
 *
 * @author Pustovyi I.
 * @date 26-apr-2022
 * @version 1.0
 */
#include "lib.h"
void SUM(int *arr3, int *arr2, int *arr1){
    for ( int i = 0, j = 0; i < N + M; i++ ) 
    {
        if ( i < N ) 
        {
            *(arr3 + i) = *(arr1 + i);
        } else 
        {
            *(arr3 + i) = *(arr2 + j);
            j += 1;
        }
    }
}
void SORT(int *arr3){
        for(int i = (N + M) - 1;i > 0;i--)
    {
        for (int j = 0; j < i; j++)
        {
            if(*(arr3 + j) > *(arr3 +(j + 1)))
                {
                    int temp = *(arr3 + j);
                    *(arr3 + j) = *(arr3 + (j + 1));
                    *(arr3 + (j + 1)) = temp;
                }
            }
         }
}
