/// @file test_string.c
#include "unity.h"
#include "String_header.h"
/**
*Required by the unity test framework
 */
void setUp(){}
/**
* Required by the unity test framework 
*/
void tearDown(){}
/**
* Function to test a string 
*/
void test_string1(void)
{
char *test_string1[] = {"C", "Programming", "and", "unit", "testing"};
char *actual_string[MAX_LEN], string1[MAX_LEN] = "C_Programming_and_unit_testing";
char * string2 = break_string(string1);
int temp = 0, num_elements=0;

while((string2 + temp)[0]){
    actual_string[num_elements] = string2 + temp;
    temp += MAX_LEN;
    num_elements++;
}
  TEST_ASSERT_EQUAL_STRING_ARRAY(test_string1, actual_string, num_elements);
}

/**
* Function to test a string 
*/
void test_string2(void)
{
char *test_string2[] = {"C", "Programming", ",and,", "unit", "testing"};
char *actual_string[MAX_LEN], string1[MAX_LEN] = "C__Programming__,and,__unit__testing__";
char * string2 = break_string(string1);
int temp = 0, num_elements=0;

while((string2 + temp)[0]){
    actual_string[num_elements] = string2 + temp;
    temp += MAX_LEN;
    num_elements++;
}
  TEST_ASSERT_EQUAL_STRING_ARRAY(test_string2, actual_string, num_elements);
}
/**
* Main function of test framework 
*/
int test_main(void)
{
/*
* Initiate the Unity Test Framework 
*/
  UNITY_BEGIN();

/*
* Run Test functions 
*/
  RUN_TEST(test_string1);
  RUN_TEST(test_string2);

/*
*  Close the Unity Test Framework 
*/
  return UNITY_END();
}
