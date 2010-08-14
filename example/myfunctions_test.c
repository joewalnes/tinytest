/* Tests for myfunctions.c, using TinyTest. */

#include "../tinytest.h"
#include "myfunctions.h"

void test_addition(void)
{
  ASSERT_EQUALS(10, add_numbers(3, 7));
  ASSERT_EQUALS(-10, add_numbers(4, -14));
}

void test_that_fails(void)
{
  /* this assertion fails - to demonstrate what happens */
  ASSERT_EQUALS(10, add_numbers(3, 33));
  /* because of the failure, this line won't even run */
  ASSERT_EQUALS(10, add_numbers(3, 7));
}

void test_multiplication(void)
{
  ASSERT_EQUALS(12, multiply_numbers(3, 4));
  ASSERT_EQUALS(-12, multiply_numbers(4, -3));
}

/* test runner */
int main(void)
{
  RUN(test_addition);
  RUN(test_that_fails);
  RUN(test_multiplication);
  return TEST_REPORT();
}
