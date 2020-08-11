/******************************************************************************
 * Copyright (C) 2020 by Khondokar Amir Hossain - Islamic University, Bangladesh
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h 
 * @brief header file to do basic statistics opeation program
 *
 *
 * @author Khondokar Amir Hossain
 * @date August 2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief function to print basic statistics of and array 
 *        including minimum, maximum, mean and median.
 * 
 *
 * @param unsigned char *ptr [pointer to an n-element data array]
 * @param unsigned int size [ The size of the array ]
 *
 * @return void [ returns NULL ]
 */
void print_statistics(unsigned char *ptr, unsigned int size);


/**
 * @brief function to print an array
 * 
 *
 * @param unsigned char *ptr [pointer to an n-element data array]
 * @param unsigned int size [ The size of the array ]
 *
 * @return void [ returns NULL ]
 */
void print_array(unsigned char *ptr, unsigned int size);


/**
 * @brief function to find median of an array of integer values.
 * 
 *
 * @param unsigned char *ptr [pointer to an n-element data array]
 * @param unsigned int size [ The size of the array ]
 *
 * @return unsigned char median [ returns calcualted median of the 
 *	   given array ]
 */
unsigned char find_median(unsigned char *ptr, unsigned int size);


/**
 * @brief function to find mean of an array of integer values.
 * 
 *
 * @param unsigned char *ptr [pointer to an n-element data array]
 * @param unsigned int size [ The size of the array ]
 * 
 * @return unsigned char mean [ returns calcualted mean of the 
 *         given array ]
 */
unsigned char find_mean(unsigned char *ptr, unsigned int size);


/**
 * @brief function to find maximum of an array of integer values.
 * 
 *
 * @param unsigned char *ptr [pointer to an n-element data array]
 * @param unsigned int size [ The size of the array ]
 * 
 * @return unsigned char maximum [ returns calcualted maximum of the 
 *         given array ]
 */
unsigned char find_maximum(unsigned char *ptr, unsigned int size);


/**
 * @brief function to find minimum of an array of integer values.
 * 
 *
 * @param unsigned char *ptr [pointer to an n-element data array]
 * @param unsigned int size [ The size of the array ]
 * 
 * @return unsigned char minimum [ returns calcualted minimum of the 
 *         given array ]
 */
unsigned char find_minimum(unsigned char *ptr, unsigned int size);


/**
 * @brief function to sort(in descending order) an array of integer values.
 * 
 *
 * @param unsigned char *ptr [pointer to an n-element data array]
 * @param unsigned int size [ The size of the array ]
 * 
 * @return void [ sorts values and returns NULL  ]
 */
void sort_array(unsigned char *ptr, unsigned int size);


#endif /* __STATS_H__ */
