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
 * @file <stats.h> 
 * @brief <Header File.Includes fucntion declarations for stats.c>
 *
 * @author <Kewal Raul>
 * @date <4/23/2021>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Swaps two input char poniters. 
 * 
 *
 * @param a char pointer
 * @param b char pointer
 *
 * @return void
 */
void swap (unsigned char *a, unsigned char *b);

/**
 * @brief Sort an array in descening order
 *
 * This function takes a char array as an input and perfroms simple sorting arranges it in desceding order
 *
 * @param test char array to be sorted.
 *
 * @return void
 */
void sort_array (unsigned char *test);

/**
 * @brief Finds the median of an array.
 *
 * This function takes a char array as an input and outputs the median of the array.
 *
 * @param test char array.
 *
 * @return median value.
 */
unsigned char find_median (unsigned char *test);

/**
 * @brief Finds the mean of an array.
 *
 * This function takes a char array as an input and outputs the mean of the array.
 *
 * @param test char array.
 *
 * @return mean value.
 */
unsigned char find_mean (unsigned char *test);

/**
 * @brief Finds the minimum of an array.
 *
 * This function takes a char array as an input and outputs the minimum of the array.
 *
 * @param test char array.
 *
 * @return minimum value.
 */
unsigned char find_minimum (unsigned char *test);

/**
 * @brief Finds the maximum of an array.
 *
 * This function takes a char array as an input and outputs the maximum of the array.
 *
 * @param test char array.
 *
 * @return maximum value.
 */
unsigned char find_maximmum (unsigned char *test);

/**
 * @brief Prints items in the array.
 *
 * This function takes a char array as an input prints the items in it.
 *
 * @param test char array.
 *
 * @return void.
 */
void print_array (unsigned char *test );

/**
 * @brief Prints the statistics passed to the function.
 *
 *  This function takes a char array as an input & prints the statistics min, max , mean & median.
 *
 * @param test char array.
 *
 * @return void.
 */
void print_statistics(unsigned char *test );

#endif /* __STATS_H__ */
