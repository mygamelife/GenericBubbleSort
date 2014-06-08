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

 UnityAssertEqualNumber((_U_SINT)((-1)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)18, UNITY_DISPLAY_STYLE_INT);

}



void test_IntegerCompare_given_6_and_2_should_return_1(void)

{

 int a = 6 , b = 2;

 int result;



 result = IntegerCompare(&a , &b);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)27, UNITY_DISPLAY_STYLE_INT);

}



void test_IntegerCompare_given_1_and_1_should_return_0(void)

{

 int a = 1 , b = 1;

 int result;



 result = IntegerCompare(&a , &b);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)36, UNITY_DISPLAY_STYLE_INT);

}



void test_IntegerSwap_given_3_and_1_should_return_1_and_3(void)

{

 int array[] = {3,1};

 int index1 = 0;

 int index2 = 1;



 IntegerSwap(array , &index1 , &index2);



 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)47, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)48, UNITY_DISPLAY_STYLE_INT);

}



void test_IntegerSingleBubbleSort_given_4_1_and_3_should_return_1_4_and_3(void)

{

 int array[] = {4,1,3};



 IntegerSingleBubbleSort(array , 3 , 3);



 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)57, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)58, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)59, UNITY_DISPLAY_STYLE_INT);

}



void test_IntegerSingleBubbleSort_given_5_2_1_and_3_should_return_1_5_2_and_3(void)

{

 int array[] = {5,2,1,3};



 IntegerSingleBubbleSort(array , 4 , 4);



 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)68, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((5)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)69, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)70, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((array[3])), (((void *)0)), (_U_UINT)71, UNITY_DISPLAY_STYLE_INT);

}



void test_IntegerSingleBubbleSort_given_6_1_3_and_4_should_return_6_1_3_and_4(void)

{

 int array[] = {6,1,3,4};



 IntegerSingleBubbleSort(array , 3 , 4);



 UnityAssertEqualNumber((_U_SINT)((6)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)80, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)81, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)82, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((array[3])), (((void *)0)), (_U_UINT)83, UNITY_DISPLAY_STYLE_INT);

}



void test_IntegerSingleBubbleSort_given_7_8_9_3_and_1_should_return_1_7_8_9_and_3(void)

{

 int array[] = {7,8,9,3,1};



 IntegerSingleBubbleSort(array , 5 , 5);



 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)92, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((7)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)93, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)94, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((9)), (_U_SINT)((array[3])), (((void *)0)), (_U_UINT)95, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((array[4])), (((void *)0)), (_U_UINT)96, UNITY_DISPLAY_STYLE_INT);

}



void test_IntegerBubbleSort_given_4_5_3_and_should_return_3_4_5(void)

{

 int array[] = {4,5,3};



 IntegerBubbleSort(array , 3);



 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)105, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)106, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((5)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)107, UNITY_DISPLAY_STYLE_INT);



}



void test_IntegerBubbleSort_given_6_3_1_5_and_should_return_1_3_5_6(void)

{

 int array[] = {6,3,1,5};



 IntegerBubbleSort(array , 4);



 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)117, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)118, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((5)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)119, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((6)), (_U_SINT)((array[3])), (((void *)0)), (_U_UINT)120, UNITY_DISPLAY_STYLE_INT);



}
