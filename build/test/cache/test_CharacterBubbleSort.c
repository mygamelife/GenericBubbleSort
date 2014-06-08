#include "unity.h"
#include "CharacterBubbleSort.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void test_CharCompare_given_Z_and_B_should_return_1(void)

{

 char ch1 = 'Z', ch2 = 'B';

 int result;



 result = CharCompare(&ch1 , &ch2);



 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)19, UNITY_DISPLAY_STYLE_INT);

}



void test_CharCompare_given_A_and_S_should_return_negative_1(void)

{

 char ch1 = 'A', ch2 = 'S';

 int result;



 result = CharCompare(&ch1 , &ch2);



 UnityAssertEqualNumber((_U_SINT)((-1)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)29, UNITY_DISPLAY_STYLE_INT);

}



void test_CharCompare_given_D_and_D_should_return_negative_0(void)

{

 char ch1 = 'D', ch2 = 'D';

 int result;



 result = CharCompare(&ch1 , &ch2);



 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)39, UNITY_DISPLAY_STYLE_INT);

}



void test_CharSwap_given_D_and_E_should_return_E_and_D(void)

{

 char* array[] = {"D" , "E"};

 int index1 = 0;

 int index2 = 1;



 CharSwap(&array , &index1 , &index2);

 UnityAssertEqualString((const char*)("Ee"), (const char*)(array), (((void *)0)), (_U_UINT)49);

}
