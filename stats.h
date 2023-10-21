/**
 * @file stats.h
 * @brief This file includes the function declarations for the calculation of statistical metrics.
 *
 *
 *
 * @author Shahzaib Ali
 * @date 10th September 2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief Prints the statstics values for the given array.
 *
 * This function takes as an input a array of 8 bit integer values and 
 * prints the values of Mean, Median, Maximum and Minimum.
 *
 * @param array The array of 8 bit characters
 * @param size The size of the input array.
 *
 */ 
void print_statistics(unsigned char *array, unsigned int size);

/**
 * @brief Prints the values for the given array.
 *
 * This function takes as an input a array of 8 bit values and 
 * prints it.
 *
 * @param array The array of 8 bit characters
 * @param size The size of the input array.
 */
void print_array(unsigned char *array, unsigned int size);

/**
 * @brief Calculates the median of the given array.
 *
 * This function takes as an input a array of 8 bit integer values and 
 * calculates the median value.
 *
 * @param array The array of 8 bit characters
 * @param size The size of the input array.
 * 
 * @return The median value of the array.
 */
unsigned char find_median(unsigned char *array, unsigned int size);

/**
 * @brief Calculates the mean value of the given array.
 *
 * This function takes as an input a array of 8 bit integer values and 
 * calculates the mean value.
 *
 * @param array The array of 8 bit characters
 * @param size The size of the input array.
 * 
 * @return The mean value of the array.
 */
unsigned char find_mean(unsigned char *array , unsigned int size);

/**
 * @brief Calculates the maximum value of the given array.
 *
 * This function takes as an input a array of 8 bit integer values and 
 * calculates the maximum value.
 *
 * @param array The array of 8 bit characters
 * @param size The size of the input array.
 * 
 * @return The maximum value of the array.
 */
unsigned char find_maximum(unsigned char *array , unsigned int size);

/**
 * @brief Calculates the minimum of the given array.
 *
 * This function takes as an input a array of 8 bit integer values and 
 * calculates the minimum value.
 *
 * @param array The array of 8 bit characters
 * @param size The size of the input array.
 * 
 * @return The minimum value of the array.
 */
unsigned char find_minimum(unsigned char *array , unsigned int size);

/**
 * @brief Sorts the given array in descending order.
 *
 * This function takes as an input a array of 8 bit integer values and 
 * sorts the array from largest to smallest (in descending order).
 *
 * @param array The array of 8 bit characters
 * @param size The size of the input array.
 * 
 */
void sort_array(unsigned char *array , unsigned int size);



#endif /* __STATS_H__ */
