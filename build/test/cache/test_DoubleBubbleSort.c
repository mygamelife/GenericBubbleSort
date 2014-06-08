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



 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)19, UNITY_DISPLAY_STYLE_INT);

}



void test_Double_Integer_Compare_given_2_point_3_and_2_point_4_should_return_negative_1(void)

{

 double a = 2.3 , b = 2.4;

 int result;



 result = Double_Integer_Compare(&a , &b);

 UnityAssertEqualNumber((_U_SINT)((-1)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)28, UNITY_DISPLAY_STYLE_INT);

}



void test_Double_Integer_Compare_given_1_point_3_and_1_point_3_should_return_0(void)

{

 double a = 1.3 , b = 1.3;

 int result;



 result = Double_Integer_Compare(&a , &b);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)37, UNITY_DISPLAY_STYLE_INT);

}



void test_Double_Integer_Swap_given_3_point_5_and_1_point_6_and_should_return_1_point_6_and_3_point_5(void)

{

 double array[] = {3.5,1.6};

 int index1 = 0;

 int index2 = 1;



 Double_Integer_Swap(array , &index1 , &index2);



 UnityAssertEqualNumber((_U_SINT)((1.6)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)48, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3.5)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)49, UNITY_DISPLAY_STYLE_INT);

}



void test_Double_Integer_SingleBubbleSort_given_4_point_2_and_4_point_1_and_4_point_5_should_return_4_point_1_4_point_2_and_4_point_5(void)

{

 double array[] = {4.2,4.1,4.5};



 Double_Integer_SingleBubbleSort(array , 3 , 3);



 UnityAssertEqualNumber((_U_SINT)((4.1)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)58, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((4.2)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)59, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((4.5)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)60, UNITY_DISPLAY_STYLE_INT);

}



void test_IntegerSingleBubbleSort_given_6_1_and_2_8_and_2_5_and_4_5_should_return_6_1_and_2_5_and_2_8_and_4_5(void)

{

 double array[] = {6.1,2.8,2.5,4.5};



 Double_Integer_SingleBubbleSort(array , 3 , 4);



 UnityAssertEqualNumber((_U_SINT)((6.1)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)69, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2.5)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)70, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2.8)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)71, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((4.5)), (_U_SINT)((array[3])), (((void *)0)), (_U_UINT)72, UNITY_DISPLAY_STYLE_INT);

}



void test_Double_Integer_BubbleSort_given_7_8_and_8_4_and_4_2_and_3_6_and_should_return_3_6_and_4_2_and_7_8_and_8_4(void)

{

 double array[] = {7.8,8.4,4.2,3.6};



 Double_Integer_BubbleSort(array , 4);



 UnityAssertEqualNumber((_U_SINT)((3.6)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)81, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((4.2)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)82, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((7.8)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)83, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((8.4)), (_U_SINT)((array[3])), (((void *)0)), (_U_UINT)84, UNITY_DISPLAY_STYLE_INT);



}
