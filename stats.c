/******************************************************************************
 * Copyright (C) 2020 by Khondokar Amir Hossain - Islamic University, Bangladesh.
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file  stats.c 
 * @brief to do basic statistical operation on a given array of integers
 *
 * 	  Operations:
 *		I.   Minimum
 *		II.  Maximum
 *		III. Mean
 *		IV.  Median
 *
 * @author Khondokar Amir Hossain
 * @date August 2020
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

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  //#printf("hello second commit on dev_c1m1 branch\n");
  print_array(test,SIZE);
  printf("Sorted ");
  sort_array(test,SIZE);
  print_array(test,SIZE);
  print_statistics(test,SIZE);
}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char *ptr, unsigned int size){
    printf("Minimum value among the values is : %5d\n",find_minimum(ptr,size));
    printf("Maximum value among the values is : %5d\n",find_maximum(ptr,size));
    printf("Mean value among the values is    : %5d\n",find_mean(ptr,size));
    printf("Median value among the values is  : %5d\n",find_median(ptr,size));
}

void print_array(unsigned char *ptr, unsigned int size){
    printf("data array :\n");
    printf("|-----------------------------------------------|\n");
    for(int i=0;i<size;++i){
        if (i%8==0){
            printf("|%5d|",ptr[i]);
        }
        else printf("%5d|",ptr[i]);
        if ((i+1)%8==0)
	    printf("\n");
    }
    printf("|-----------------------------------------------|\n");
}

unsigned char find_median(unsigned char *ptr, unsigned int size){
    sort_array(ptr,size);
    if (size%2==0){
        return (unsigned char)(((ptr[(int)(size/2)]+ptr[(int)(size/2)+1])/2)+0.5);
    }
    else
	return (unsigned char)(ptr[(int)(size/2)]+0.5);
}

unsigned char find_mean(unsigned char *ptr, unsigned int size){
    unsigned int Sum = 0;
    for (int i=0;i<size;++i)
        Sum += ptr[i];
    return (unsigned char)((int)(Sum/size)+0.5);
}

unsigned char find_maximum(unsigned char *ptr, unsigned int size){
    unsigned int tempMax = ptr[0];
    for (int i=0;i<size;++i)
        if (tempMax<ptr[i])
	    tempMax = ptr[i];
    return (unsigned char)tempMax;
}

unsigned char find_minimum(unsigned char *ptr, unsigned int size){
    unsigned int tempMin = ptr[0];
    for (int i=0;i<size;++i)
	if (tempMin>ptr[i])
	    tempMin = ptr[i];
    return (unsigned char)tempMin;
}

void sort_array(unsigned char *ptr, unsigned int size){
    int temp = 0;
    for(int i=0;i<size;++i){
	for(int j=i;j<size;++j){
	    if (ptr[i]<ptr[j]){
		temp = ptr[j];
		ptr[j] = ptr[i];
		ptr[i] = temp;
	    }
	}
    }
}

