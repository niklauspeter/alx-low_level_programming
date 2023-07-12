#include "search_algos.h"

int binary_search(int *array, size_t size, int value){
    size_t i;
    if (array == NULL){
      return (-1);

    int mid = size/2;
        if (array[mid] == value){
            return value
        }
         else if (value < array[mid])
         int i = 0
         for (i = 0; i < mid; i++)
         printf("Searching in array:%d", i);
         if (array[i] == value)
         {
             printf("Found %d at index %d", value, i)
         }
         array++;
         else if (value > array)
         {
             for (i = mid + 1; i < size; i++;)
             {
                 printf("Searching for %d at index %d", value, i)
                 if (i == value)
                 {
                     printf("Found %d at index %d", value, i)
                 }
                 array++;
             }

         }
         return (-1);
     }