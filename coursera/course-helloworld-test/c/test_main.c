#include "unity/unity.h"
#include "add.h"

void setUp(void) {}
void tearDown(void) {}

void test_add_should_add_two_numbers(void) {
    TEST_ASSERT_EQUAL_INT(5, add(2, 3));
    TEST_ASSERT_EQUAL_INT(0, add(-2, 2));
    TEST_ASSERT_EQUAL_INT(-10, add(-5, -5));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_add_should_add_two_numbers);
    return UNITY_END();
}
