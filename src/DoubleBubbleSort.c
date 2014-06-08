#include "DoubleBubbleSort.h"

int Double_Integer_Compare(void *v1 , void *v2)
{
	double *first_value  = (double*)v1;
	double *second_value = (double*)v2;
	
	if (*first_value > *second_value)
	return 1;
	
	else if (*first_value < *second_value)
	return -1;
	
	else return 0;
}

void Double_Integer_Swap(void *array, void *index1, void *index2)
{
	double *double_array = (double*)array; //typecast void array to doubl integer array;
	int *value1    	 = (int*)index1;
	int *value2    	 = (int*)index2;
	double temp_value; //temporary storage 
	
	temp_value = double_array[*value1];
	double_array[*value1] = double_array[*value2];
	double_array[*value2] = temp_value;
}

void Double_Integer_SingleBubbleSort(void *array , int size , int length)
{
	double *double_array = (double*)array;
	int i = 0 ,result;
	int value1 , value2;
	
	for( i ; i<size-1 ; i++)
	{
		result = Double_Integer_Compare(&double_array[length-2-i], &double_array[length-1-i]); //compare two value
		
		value1 = length-2-i;
		value2 = length-1-i;
		
		if(result == 1)
		{
			Double_Integer_Swap(double_array, &value1 , &value2);
		}
	}
}

void Double_Integer_BubbleSort(void *array , int length)
{
	double *double_array = (double*)array;
	int i = 0;
	
	for( i ; i<length-1 ; i++)
	{
		Double_Integer_SingleBubbleSort(double_array , length-i , length);
	}
}