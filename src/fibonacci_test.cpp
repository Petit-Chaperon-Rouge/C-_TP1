#include "fibonacci.hpp"
#include <CppUTest/CommandLineTestRunner.h>

TEST_GROUP(GroupFibonacci) { };

TEST(GroupFibonacci, test_fibonacciRecursif) { // premier test unitaire
    CHECK_EQUAL(0, fibonacciRecursif(0));
    CHECK_EQUAL(1, fibonacciRecursif(1));
    CHECK_EQUAL(1, fibonacciRecursif(2));
    CHECK_EQUAL(2, fibonacciRecursif(3));
    CHECK_EQUAL(3, fibonacciRecursif(4));
    CHECK_EQUAL(5, fibonacciRecursif(5));
}

TEST(GroupFibonacci, test_fibonacciIteratif) { // deuxième test unitaire
    CHECK_EQUAL(0, fibonacciRecursif(0));
    CHECK_EQUAL(1, fibonacciRecursif(1));
    CHECK_EQUAL(1, fibonacciRecursif(2));
    CHECK_EQUAL(2, fibonacciRecursif(3));
    CHECK_EQUAL(3, fibonacciRecursif(4));
    CHECK_EQUAL(5, fibonacciRecursif(5));
}
