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



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)
double find_median(unsigned char *arr, int arrLen){
	//sortArr = sort_array(arr[], arrLen);
	int n = arrLen;
	if (n % 2 !=0){	//Checking for even case
		return (double)arr[n/2];
	}
	return (double) ((double)arr[(n-1)/2] + (double) arr[n/2])/2.0;

}
double find_mean(unsigned char *arr, int arrLen){
	int sum = 0;
	for (int i=0;i<arrLen;i++){
		sum += (int) arr[i]; 
	}
	return (double) sum/ (double) arrLen;
}
double find_maximum(unsigned char *arr, int arrLen){
	return (double) arr[0];
}
double find_minimum(unsigned char *arr, int arrLen){
	return (double) arr[arrLen-1];
}
void sort_array(unsigned char *arr, int arrLen){
	for (int i=0;i < arrLen;i++){
		for (int j=0 ;j<arrLen;j++){
			//printf("%s cacphony\n",arr[j] );
			if ((int) (arr[j]) < (int) (arr[i])){
				char tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}
void print_statistics(unsigned char *arr, int arrLen){
	/* Find the median of the array*/
	double median = find_median(arr, arrLen);
	printf("Median : %f \n", median );
	/* Find the mean of the array*/
	double mean = find_mean(arr, arrLen);
	printf("Mean : %f \n", mean );
	/* Find the max of the array*/
	double max = find_maximum(arr, arrLen);
	printf("Maximum : %f \n", max );
	/* Find the min of the array*/
	double min = find_minimum(arr, arrLen);
	printf("Minimum : %f \n", min );

}
void print_array(unsigned char *arr, int arrLen){
	for(int i=0; i<arrLen; i++){
		printf("%d \t",arr[i] );
	}
	printf("\n");
}

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

 
	//unsigned char test[5] = {2,5, 10, 2, 1};

  /* Other Variable Declarations Go Here */
   int arrLen = sizeof(test)/sizeof(unsigned char);
   //printf("%d sum\n", (test[0] + test[1]) );
   printf("Array Length %d \n", arrLen);
   printf("UnSorted Array \n");
   print_array(test,arrLen);
   sort_array(test,arrLen);
   printf("Sorted Array \n");
   print_array(test,arrLen);
  /* Statistics and Printing Functions Go Here */
  print_statistics(test,arrLen);

}
/* Add other Implementation File Code Here */
