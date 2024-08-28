#include <unity.h>
#include <fact.h>

void setUp(void) {
	// set stuff up here
}

void tearDown(void) {
	// clean stuff up here
}

void test_fact_should_compute(void) {
	TEST_ASSERT_EQUAL_INT(1, fact(0));
	TEST_ASSERT_EQUAL_INT(1, fact(1));
	TEST_ASSERT_EQUAL_INT(2, fact(2));
	TEST_ASSERT_EQUAL_INT(6, fact(3));
	TEST_ASSERT_EQUAL_INT(24, fact(4));
}

int main(void) {
	UNITY_BEGIN();
	RUN_TEST(test_fact_should_compute);
	return UNITY_END();
}
