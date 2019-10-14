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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
unsigned char find_median(unsigned char *arr, int arrLen);
/**
 * @brief  Given an array of data and a length, returns the median value
 *
 * <Add Extended Description Here>
 *
 * @param unsigned char *arr input array
 * @param int arrLen length of the array
 *
 * @return median of arr
 */
unsigned char find_mean(unsigned char *arr, int arrLen);
/**
 * @brief   Given an array of data and a length, returns the mean
 *
 * <Add Extended Description Here>
 *
 * @param unsigned char *arr input array
 * @param int arrLen length of the array
 *
 * @return mean of arr
 */
unsigned char find_maximum(unsigned char *arr, int arrLen);
/**
 * @brief   Given an array of data and a length, returns the maximum
 *
 * <Add Extended Description Here>
 *
 * @param unsigned char *arr input array
 * @param int arrLen length of the array
 *
 * @return max of arr
 */
unsigned char find_minimum(unsigned char *arr, int arrLen);
/**
 * @brief  Given an array of data and a length, returns the minimum
 *
 * <Add Extended Description Here>
 *
 * @param unsigned char *arr input array
 * @param int arrLen length of the array
 *
 * @return min of arr
 */
void sort_array(unsigned char *arr, int arrLen);
/**
 * @brief   Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
 *
 * <Add Extended Description Here>
 *
 * @param unsigned char *arr input array
 * @param int arrLen length of the array
 *
 * @return 
 */
void print_statistics(unsigned char *arr, int arrLen);
/**
 * @brief   A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * <Add Extended Description Here>
 *
 * @param unsigned char *arr input array
 * @param int arrLen length of the array
 *
 * @return 
 */
void print_array(unsigned char *arr, int arrLen);
/**
 * @brief    Given an array of data and a length, prints the array to the screen
 *
 * <Add Extended Description Here>
 *
 * @param unsigned char *arr input array
 * @param int arrLen length of the array
 *
 * @return 
 */


#endif /* __STATS_H__ */
