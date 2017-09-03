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
 * @file <stat.h> 
 * @brief <Declaration of functions of statistics >
 *
 * <Add Extended Description Here>
 *
 * @author <TRAC TRUONG>
 * @date <Sept 2nd,2017>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Print the statistics>
 *
 * <Add Extended Description Here>
 *
 * @param median 	median of the array
 * @param mean		mean of the array
 * @param maximum	maximum of the array
 * @param minimum	minimum of the array
 *
 * @return none
 */
void print_statistics(unsigned char median, unsigned char mean, unsigned char maximum, unsigned char minimum );

/**
 * @brief <Print the array>
 *
 * <Add Extended Description Here>
 *
 * @param data[]	the array
 * @param size		length of the array
 *
 * @return none
 */
void print_array(unsigned char data[], unsigned char size);

/**
 * @brief <Find median of the array>
 *
 * <Add Extended Description Here>
 *
 * @param data[]	the array
 * @param size		length of the array
 *
 * @return median
 */
unsigned char find_median(unsigned char data[], unsigned char size);

/**
 * @brief <Find mean of the array>
 *
 * <Add Extended Description Here>
 *
 * @param data[]	the array
 * @param size		length of the array
 *
 * @return mean
 */
unsigned char find_mean(unsigned char data[], unsigned char size);

/**
 * @brief <Find maximum of the array>
 *
 * <Add Extended Description Here>
 *
 * @param data[]	the array
 * @param size		length of the array
 *
 * @return maximum
 */
unsigned char find_maximum(unsigned char data[], unsigned char size);

/**
 * @brief <Find minimum of the array>
 *
 * <Add Extended Description Here>
 *
 * @param data[]	the array
 * @param size		length of the array
 *
 * @return minimum
 */
unsigned char find_minimum(unsigned char data[], unsigned char size);

/**
 * @brief <Sort descending of the array>
 *
 * <Add Extended Description Here>
 *
 * @param data[]	the array
 * @param size		length of the array
 *
 * @return none
 */
void sort_array(unsigned char data[], unsigned char size);
#endif /* __STATS_H__ */
