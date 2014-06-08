/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_Double_Integer_Compare_given_4_point_1_and_2_point_1_should_return_1(void);
extern void test_Double_Integer_Compare_given_2_point_3_and_2_point_4_should_return_negative_1(void);
extern void test_Double_Integer_Compare_given_1_point_3_and_1_point_3_should_return_0(void);
extern void test_Double_Integer_Swap_given_3_point_5_and_1_point_6_and_should_return_1_point_6_and_3_point_5(void);
extern void test_Double_Integer_SingleBubbleSort_given_4_point_2_and_4_point_1_and_4_point_5_should_return_4_point_1_4_point_2_and_4_point_5(void);
extern void test_IntegerSingleBubbleSort_given_6_1_and_2_8_and_2_5_and_4_5_should_return_6_1_and_2_5_and_2_8_and_4_5(void);
extern void test_Double_Integer_BubbleSort_given_7_8_and_8_4_and_4_2_and_3_6_and_should_return_3_6_and_4_2_and_7_8_and_8_4(void);


//=======Test Reset Option=====
void resetTest()
{
  tearDown();
  setUp();
}


//=======MAIN=====
int main(void)
{
  Unity.TestFile = "test_DoubleBubbleSort.c";
  UnityBegin();
  RUN_TEST(test_Double_Integer_Compare_given_4_point_1_and_2_point_1_should_return_1, 12);
  RUN_TEST(test_Double_Integer_Compare_given_2_point_3_and_2_point_4_should_return_negative_1, 22);
  RUN_TEST(test_Double_Integer_Compare_given_1_point_3_and_1_point_3_should_return_0, 31);
  RUN_TEST(test_Double_Integer_Swap_given_3_point_5_and_1_point_6_and_should_return_1_point_6_and_3_point_5, 40);
  RUN_TEST(test_Double_Integer_SingleBubbleSort_given_4_point_2_and_4_point_1_and_4_point_5_should_return_4_point_1_4_point_2_and_4_point_5, 52);
  RUN_TEST(test_IntegerSingleBubbleSort_given_6_1_and_2_8_and_2_5_and_4_5_should_return_6_1_and_2_5_and_2_8_and_4_5, 63);
  RUN_TEST(test_Double_Integer_BubbleSort_given_7_8_and_8_4_and_4_2_and_3_6_and_should_return_3_6_and_4_2_and_7_8_and_8_4, 75);

  return (UnityEnd());
}
