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
 * @brief <Functions of statistics>
 *
 * <Add Extended Description Here>
 *
 * @author <TRAC TRUONG>
 * @date <Sept 2nd, 2017>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the test Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned char median = find_median(test, SIZE );
  unsigned char mean = find_mean(test, SIZE );
  unsigned char maximum = find_maximum(test, SIZE );
  unsigned char minimum = find_minimum(test, SIZE );
  /* Statistics and Printing Functions Go Here */
  printf("INITAL ARRAY\n");	  
  print_array(test, SIZE );	
  printf("STATISTICS AND SORTING\n");	
  print_statistics(median, mean, maximum, minimum);
  sort_array(test, SIZE );
  print_array(test, SIZE );
}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char median, unsigned char mean, unsigned char maximum, unsigned char minimum ){
	printf("Median : %u\n", median);
	printf("Mean : %u\n", mean);
  	printf("Maximum : %u\n", maximum);
  	printf("Minimum : %u\n", minimum);
}
void print_array(unsigned char data[], unsigned char size){
	unsigned char i;
 	printf("Array :");
 	for (i = 0; i<size; i++){
  		printf(" %u",data[i]);
 	}
	printf("\n");
}

unsigned char find_median(unsigned char data[], unsigned char size){
	if (size % 2 == 0)
		return (data[size/2] + data[size/2 +1])/2;
	else
		return data[size/2 +1];
}
unsigned char find_mean(unsigned char data[], unsigned char size){
	unsigned char i;
	unsigned int sum = 0;
	for (i = 0; i<size; i++){
		sum += data[i];
	}
	return (sum/size);
}
unsigned char find_maximum(unsigned char data[], unsigned char size){
	unsigned char i, max = data[0];
 	for (i = 1; i<size; i++){
  		if (max < data[i])
			max = data[i]; 
 	}
	return max;
}
unsigned char find_minimum(unsigned char data[], unsigned char size){
	unsigned char i, min = data[0];
 	for (i = 1; i<size; i++){
  		if (min > data[i])
			min = data[i]; 
 	}
	return min;
}
void sort_array(unsigned char data[], unsigned char size){
	unsigned char i,j,tmp;
  	for (i = 0 ; i < ( size - 1 ); i++)
  	{
    		for (j = 0 ; j < size - i - 1; j++)
    		{
      			if (data[j] < data[j+1])
      			{
		        tmp       = data[j];
		        data[j]   = data[j+1];
        		data[j+1] = tmp;
      			}
    		}
  	}
}
