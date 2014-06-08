#include "unity.h"
#include "IntegerBubbleSort.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_IntegerCompare_given_4_and_7_should_return_minus_1(void)
{
	int a = 4 , b = 7;
	int result;
	
	result = IntegerCompare(&a , &b);
	TEST_ASSERT_EQUAL(-1 , result);
}

void test_IntegerCompare_given_6_and_2_should_return_1(void)
{
	int a = 6 , b = 2;
	int result;
	
	result = IntegerCompare(&a , &b);
	TEST_ASSERT_EQUAL(1 , result);
}

void test_IntegerCompare_given_1_and_1_should_return_0(void)
{
	int a = 1 , b = 1;
	int result;
	
	result = IntegerCompare(&a , &b);
	TEST_ASSERT_EQUAL(0 , result);
}

void test_IntegerSwap_given_3_and_1_should_return_1_and_3(void)
{
	int array[] = {3,1};
	int index1 = 0;
	int index2 = 1;
	
	IntegerSwap(array , &index1 , &index2);
	
	TEST_ASSERT_EQUAL(1 , array[0]);
	TEST_ASSERT_EQUAL(3 , array[1]);
}

void test_IntegerSingleBubbleSort_given_4_1_and_3_should_return_1_4_and_3(void)
{
	int array[] = {4,1,3};
	
	IntegerSingleBubbleSort(array , 3 , 3);
	
	TEST_ASSERT_EQUAL(1 , array[0]);
	TEST_ASSERT_EQUAL(4 , array[1]);
	TEST_ASSERT_EQUAL(3 , array[2]);	
}

void test_IntegerSingleBubbleSort_given_5_2_1_and_3_should_return_1_5_2_and_3(void)
{
	int array[] = {5,2,1,3};
	
	IntegerSingleBubbleSort(array , 4 , 4);
	
	TEST_ASSERT_EQUAL(1 , array[0]);
	TEST_ASSERT_EQUAL(5 , array[1]);
	TEST_ASSERT_EQUAL(2 , array[2]);
	TEST_ASSERT_EQUAL(3 , array[3]);
}

void test_IntegerSingleBubbleSort_given_6_1_3_and_4_should_return_6_1_3_and_4(void)
{
	int array[] = {6,1,3,4};
	
	IntegerSingleBubbleSort(array , 3 , 4);
	
	TEST_ASSERT_EQUAL(6 , array[0]);
	TEST_ASSERT_EQUAL(1 , array[1]);
	TEST_ASSERT_EQUAL(3 , array[2]);
	TEST_ASSERT_EQUAL(4 , array[3]);
}

void test_IntegerSingleBubbleSort_given_7_8_9_3_and_1_should_return_1_7_8_9_and_3(void)
{
	int array[] = {7,8,9,3,1};
	
	IntegerSingleBubbleSort(array , 5 , 5);
	
	TEST_ASSERT_EQUAL(1 , array[0]);
	TEST_ASSERT_EQUAL(7 , array[1]);
	TEST_ASSERT_EQUAL(8 , array[2]);
	TEST_ASSERT_EQUAL(9 , array[3]);
	TEST_ASSERT_EQUAL(3 , array[4]);
}

void test_IntegerBubbleSort_given_4_5_3_and_should_return_3_4_5(void)
{
	int array[] = {4,5,3};
	
	IntegerBubbleSort(array , 3);
	
	TEST_ASSERT_EQUAL(3 , array[0]);
	TEST_ASSERT_EQUAL(4 , array[1]);
	TEST_ASSERT_EQUAL(5 , array[2]);

}

void test_IntegerBubbleSort_given_6_3_1_5_and_should_return_1_3_5_6(void)
{
	int array[] = {6,3,1,5};
	
	IntegerBubbleSort(array , 4);
	
	TEST_ASSERT_EQUAL(1 , array[0]);
	TEST_ASSERT_EQUAL(3 , array[1]);
	TEST_ASSERT_EQUAL(5 , array[2]);
	TEST_ASSERT_EQUAL(6 , array[3]);

}