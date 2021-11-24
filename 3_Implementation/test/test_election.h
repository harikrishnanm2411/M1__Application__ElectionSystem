#include "unity.h"
#include <election.h>

/* Modify these two lines according to the project */
#include <election.h>
#define PROJECT_NAME    "Electionsystem"

/* Prototypes for all the test functions */
void test_banID(void);
void test_createCandidateFiles(void);
void test_deleteIllegalvote(void);
void test_initiateNewElection(void);
void test_loadElectionInfofromfile(void);
void test_adminpanel(void);
void test_saveVote(void);
void test_studentPanel(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_banID);
  RUN_TEST(test_createCandidateFiles);
  RUN_TEST(test_deleteIllegalvote);
  RUN_TEST(test_initiateNewElection);
  RUN_TEST(test_loadElectionInfofromfile);
  RUN_TEST(test_adminpanel);
  RUN_TEST(test_saveVote);
  RUN_TEST(test_studentPanel);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(30, add(10, 20));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(15000, add(7500, 7500));
}

void test_subtract(void) {
  TEST_ASSERT_EQUAL(-3, subtract(0, 3));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(100, subtract(1000, 900));
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(10, multiply(2, 5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(0, divide(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, divide(2, 2));
}