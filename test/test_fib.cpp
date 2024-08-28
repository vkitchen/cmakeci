#include "unity.h"
#include "fib.h"

void setUp(void) {
	// set stuff up here
}

void tearDown(void) {
	// clean stuff up here
}

void test_fib_should_compute(void) {
	TEST_ASSERT_EQUAL_INT(0, fib(0));
	TEST_ASSERT_EQUAL_INT(1, fib(1));
	TEST_ASSERT_EQUAL_INT(1, fib(2));
	TEST_ASSERT_EQUAL_INT(2, fib(3));
	TEST_ASSERT_EQUAL_INT(3, fib(4));
	TEST_ASSERT_EQUAL_INT(5, fib(5));
	TEST_ASSERT_EQUAL_INT(8, fib(6));
	TEST_ASSERT_EQUAL_INT(13, fib(7));
}

int main(void) {
	UNITY_BEGIN();
	RUN_TEST(test_fib_should_compute);
	return UNITY_END();
}
