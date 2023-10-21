
/**
 * @file stats.c 
 * @brief Code to perform statistical analytics on a dataset.
 *
 * The code takes the array of 40 8 bit characters and calculates the
 * values of Mean, Median, Maximum and Minimum.
 *
 * @author Shahzaib Ali
 * @date 10 September 2023
*/



#include <stdio.h>
#include <stdlib.h>
#include "stats.h"


#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  printf("Array before sorting \n");
  print_array(test,40);
  print_statistics(test,40);
  printf("\nArray after sorting \n");
  print_array(test,40);

}

/* Add other Implementation File Code Here */

void swap(unsigned char *a, unsigned char *b) {
    unsigned char temp = *a;
    *a = *b;
    *b = temp;
}


void print_statistics(unsigned char *array, unsigned int size)
{
   printf("The statistics for the given array are :\n");

   printf("Mean = %u",find_mean(array,size));
   printf("\nMedian = %u",find_median(array,size));
   printf("\nMaximum = %u",find_maximum(array,size));
   printf("\nMinimum = %u \n",find_minimum(array,size));
}

void print_array(unsigned char *array, unsigned int size)
{
    printf("The array values are : \n");
     for(int i = 0; i < size ; i++ ){
        printf(" %u ",array[i]);
        if (i % 10 == 0 && i != 0){
            printf("\n");
        }
    }
    printf("\n");
}

unsigned char find_median(unsigned char *array, unsigned int size)
{
    if (size == 0) {
        printf("Error: Array size is zero.\n");
        exit(1);
    }

    // Sort the array in descending order
    sort_array(array,size);

    // If the size is odd, return the middle element
    if (size % 2 != 0) {
        return array[size / 2];
    }
    // If the size is even, return the average of the two middle elements
    else {
        unsigned char middle1 = array[(size - 1) / 2];
        unsigned char middle2 = array[size / 2];
        return (middle1 + middle2) / 2;
    }
}

unsigned char find_mean(unsigned char *array, unsigned int size)
{
    if (size == 0){
        printf("Error: Array size is zero.\n");
        exit(1);
    }
    unsigned int sum = 0;
    for (unsigned int i = 0; i < size; i++) {
        sum += array[i];
    }

    return (unsigned char)(sum/size);
}

unsigned char find_maximum(unsigned char *array, unsigned int size)
{
    if (size == 0){
        printf("Error: Array size is zero.\n");
        exit(1);
    }
    unsigned char max = 0;
    for (unsigned int i=0; i < size; i++){
        if (array[i] >= max){
            max = array[i];
        }
    }
    return max;
}

unsigned char find_minimum(unsigned char *array, unsigned int size)
{
    if (size == 0){
        printf("Error: Array size is zero.\n");
        exit(1);
    }
    unsigned char min = array[0];

    for (unsigned int i=1; i < size; i++){
        if (array[i] < min){
            min = array[i];
        }
    }
    return min;
}

void sort_array(unsigned char *array, unsigned int size)
{
    for (unsigned int i = 0; i < size - 1; i++) {
        for (unsigned int j = 0; j < size - i - 1; j++) {
            if (array[j] < array[j + 1]) {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}
