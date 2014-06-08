#include "unity.h"
#include "DoubleBubbleSort.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_Double_Integer_Compare_given_4_point_1_and_2_point_1_should_return_1(void)
{
	double a = 4.1 , b = 2.1;
	int result;
	
	result = Double_Integer_Compare(&a , &b);
	
	TEST_ASSERT_EQUAL(1 , result);
}

void test_Double_Integer_Compare_given_2_point_3_and_2_point_4_should_return_negative_1(void)
{
	double a = 2.3 , b = 2.4;
	int result;
	
	result = Double_Integer_Compare(&a , &b);
	TEST_ASSERT_EQUAL(-1 , result);
}

void test_Double_Integer_Compare_given_1_point_3_and_1_point_3_should_return_0(void)
{
	double a = 1.3 , b = 1.3;
	int result;
	
	result = Double_Integer_Compare(&a , &b);
	TEST_ASSERT_EQUAL(0 , result);
}

void test_Double_Integer_Swap_given_3_point_5_and_1_point_6_and_should_return_1_point_6_and_3_point_5(void)
{
	double array[] = {3.5,1.6};
	int index1 = 0;
	int index2 = 1;
	
	Double_Integer_Swap(array , &index1 , &index2);
	
	TEST_ASSERT_EQUAL(1.6 , array[0]);
	TEST_ASSERT_EQUAL(3.5 , array[1]);
}

void test_Double_Integer_SingleBubbleSort_given_4_point_2_and_4_point_1_and_4_point_5_should_return_4_point_1_4_point_2_and_4_point_5(void)
{
	double array[] = {4.2,4.1,4.5};
	
	Double_Integer_SingleBubbleSort(array , 3 , 3);
	
	TEST_ASSERT_EQUAL(4.1 , array[0]);
	TEST_ASSERT_EQUAL(4.2 , array[1]);
	TEST_ASSERT_EQUAL(4.5 , array[2]);	
}

void test_IntegerSingleBubbleSort_given_6_1_and_2_8_and_2_5_and_4_5_should_return_6_1_and_2_5_and_2_8_and_4_5(void)
{
	double array[] = {6.1,2.8,2.5,4.5};
	
	Double_Integer_SingleBubbleSort(array , 3 , 4);
	
	TEST_ASSERT_EQUAL(6.1 , array[0]);
	TEST_ASSERT_EQUAL(2.5 , array[1]);
	TEST_ASSERT_EQUAL(2.8 , array[2]);
	TEST_ASSERT_EQUAL(4.5 , array[3]);
}

void test_Double_Integer_BubbleSort_given_7_8_and_8_4_and_4_2_and_3_6_and_should_return_3_6_and_4_2_and_7_8_and_8_4(void)
{
	double array[] = {7.8,8.4,4.2,3.6};
	
	Double_Integer_BubbleSort(array , 4);
	
	TEST_ASSERT_EQUAL(3.6 , array[0]);
	TEST_ASSERT_EQUAL(4.2 , array[1]);
	TEST_ASSERT_EQUAL(7.8 , array[2]);
	TEST_ASSERT_EQUAL(8.4 , array[3]);

}