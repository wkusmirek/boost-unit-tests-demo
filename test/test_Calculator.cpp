#ifdef STAND_ALONE
#   define BOOST_TEST_MODULE DemoTests
#endif

#include <boost/test/unit_test.hpp>
#include "../src/shared/Calculator.hpp"


BOOST_AUTO_TEST_SUITE(calculator_suite)

    BOOST_AUTO_TEST_CASE(constructor_test)
    {
        Calculator calculator("asd");

        BOOST_CHECK_EQUAL(calculator.get(), "qwerty");
    }

BOOST_AUTO_TEST_SUITE_END()
