/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <Performs Sortig of Array and prints stats>
 *
 * @author <Kewal Raul>
 * @date <4/23/2021>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  
  // Print the Array before Sorting
  printf ("Array: ");
  print_array (test);
  
  // Sort the Array
  sort_array (test);
  printf ("Sorted Array: ");
  print_array (test);
  
  // Print Stats
  print_statistics(test);

}

void swap (unsigned char *a, unsigned char *b){
    
    unsigned char temp = *a;
    *a = *b ;
    *b = temp;
}

void sort_array (unsigned char *test){
    
    for (int i = 0; i<SIZE; i++){
        for (int j = 0; j<SIZE ; j++){
            if (test[j] < test [j+1]){
                swap(&test[j], &test[j+1]);
            }
        }
    }
}

unsigned char find_median (unsigned char *test){
    
    unsigned char median = 0;
    
    sort_array(test);
    
    median = test[(SIZE+1)/2];
    
    return median;
}

unsigned char find_mean (unsigned char *test){
    
    int mean = 0;
    int sum  = 0;
    
    for (int i = 0; i< SIZE ; i++ ){
        sum += test[i];
    }
    
    mean = sum / SIZE;
    
    return mean;
}

unsigned char find_minimum (unsigned char *test){
    
    unsigned char min = test [0];
    
    for (int i = 1; i< SIZE ; i++ ){
        if (test[i] < min){
            min = test [i];
        }
            
    }
    
    return min;
}

unsigned char find_maximmum (unsigned char *test){
    
    unsigned char max = test [0];
    
    for (int i = 1; i< SIZE ; i++ ){
        if (test[i] > max){
            max = test [i];
        }   
    }
    
    return max;
}

void print_array (unsigned char *test ){
    
    printf ("[");
    for (int i = 0; i< SIZE ; i++ ){
        printf ("%d",test[i]);
        if (i < SIZE -1){
            printf (", ");
        }
    }
    printf ("]");
    printf ("\n");
}

 void print_statistics(unsigned char *test ){
   
    unsigned char min     = 0 ;
    unsigned char max     = 0 ;
    unsigned int  mean    = 0 ;
    unsigned char median  = 0 ;
   
    min    = find_minimum(test);
    max    = find_maximmum(test);
    mean   = find_mean(test);
    median = find_median(test);
       
    printf ("Minimum : %d \n", min);
    printf ("Maximum : %d \n", max);
    printf ("Mean    : %d \n", mean);
    printf ("Median  : %d \n", median); 
 }
 