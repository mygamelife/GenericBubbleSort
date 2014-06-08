#include <stdio.h>
#include "IntegerBubbleSort.h"

/*
* Compare 2 integers and return if greater , same
* or smaller.
*
*Input:
*      v1 is the pointer to the first value
*	   v2 is the pointer to the second value
*Return:
*	   1 if *v >  *v2
*	   0 if *v == *v2
*	  -1 if *v <  *v2
*/
int IntegerCompare(void *v1 , void *v2)
{
	int *first_value  = (int*)v1;
	int *second_value = (int*)v2;
	
	if (*first_value > *second_value)
	return 1;
	
	else if (*first_value < *second_value)
	return -1;
	
	else return 0;
}
/*
*Swap 2 integers in the array given
*
*Input:
*      array is an array of integers
*	   index1 is the index of the first integer in the array
*	   index2 is the index of the second integer in the array

*Precondition:
*	  indices given must be within bounds of the array
*/

void IntegerSwap(void *array, void *index1, void *index2)
{
	int *int_array = (int*)array; //typecast void array to integer array;
	int *value1    = (int*)index1;
	int *value2    = (int*)index2;
	int temp_value; //temporary storage 
	
	temp_value = int_array[*value1];
	int_array[*value1] = int_array[*value2];
	int_array[*value2] = temp_value;
}

void IntegerSingleBubbleSort(void *array , int size , int length)
{
	int *int_array = (int*)array;
	int i = 0 ,result;
	int value1 , value2;
	
	for( i ; i<size-1 ; i++)
	{
		
		result = IntegerCompare(&int_array[length-2-i], &int_array[length-1-i]); //compare two value
		
		value1 = length-2-i;
		value2 = length-1-i;
		
		if(result == 1)
		{
			IntegerSwap(int_array, &value1 , &value2);
		}
	}
}

void IntegerBubbleSort(void *array , int length)
{
	int *int_array = (int*)array;
	int i = 0;
	
	for( i ; i<length-1 ; i++)
	{
		IntegerSingleBubbleSort(int_array , length-i , length);
	}
}