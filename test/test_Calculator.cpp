#ifdef STAND_ALONE
#   define BOOST_TEST_MODULE DemoTests
#endif

#include <boost/test/unit_test.hpp>
#include <stdexcept>
#include "../src/shared/Calculator.hpp"

// Scenariusze danych:

// add
// 1,1
// 3,1
// 1,3
// -1,-3
// -3,-1
// 'a','b'
// 1.5,2.5
// min int i max int


// min

// mult

// div 




BOOST_AUTO_TEST_SUITE(calculator_suite)

    BOOST_AUTO_TEST_CASE(add_test_1_1)
    {
        Calculator calculator(1,1);
        BOOST_CHECK_EQUAL(calculator.add(), 2);
    }

    BOOST_AUTO_TEST_CASE(add_test_3_1)
    {
        Calculator calculator(3,1);
        BOOST_CHECK_EQUAL(calculator.add(), 4);
    }

    BOOST_AUTO_TEST_CASE(add_test_1_3)
    {
        Calculator calculator(1,3);
        BOOST_CHECK_EQUAL(calculator.add(), 4);
    }

    BOOST_AUTO_TEST_CASE(add_test_minus_1_minus_3)
    {
        Calculator calculator(-1,-3);
        BOOST_CHECK_EQUAL(calculator.add(), -4);
    }

    BOOST_AUTO_TEST_CASE(add_test_minus_3_minus_1)
    {
        Calculator calculator(-3,-1);
        BOOST_CHECK_EQUAL(calculator.add(), -4);
    }

    BOOST_AUTO_TEST_CASE(add_test_a_b)
    {
        Calculator calculator('a','b');  // 'a' in ascii table: 97, 'b' in ascii table: 98 !!!
        BOOST_CHECK_EQUAL(calculator.add(), 195);
    }

    BOOST_AUTO_TEST_CASE(add_test_1_5_2_5)
    {
        Calculator calculator(1.5,2.5);  // !!!
        BOOST_CHECK_EQUAL(calculator.add(), 4.0);
    }

    BOOST_AUTO_TEST_CASE(add_test_min_value)
    {
        Calculator calculator(5,std::numeric_limits<int>::min()); // min value for int is -2147483648
        BOOST_CHECK_EQUAL(calculator.add(), -2147483643);
    }

    BOOST_AUTO_TEST_CASE(add_test_max_value)
    {
        Calculator calculator(5,std::numeric_limits<int>::max()); // max value for int is 2147483647
        BOOST_CHECK_EQUAL(calculator.add(), -2147483644);  // !!!
    }

    BOOST_AUTO_TEST_CASE(div_test_1_0)
    {
        Calculator calculator(1,0);
        BOOST_CHECK_THROW(calculator.div(), std::exception);
    }

BOOST_AUTO_TEST_SUITE_END()



















