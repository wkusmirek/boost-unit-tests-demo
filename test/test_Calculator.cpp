#ifdef STAND_ALONE
#   define BOOST_TEST_MODULE DemoTests
#endif

#include <boost/test/unit_test.hpp>
#include <stdexcept>
#include "../src/shared/Calculator.hpp"


BOOST_AUTO_TEST_SUITE(division_suite)

    BOOST_AUTO_TEST_CASE(div_test)
    {
    }

BOOST_AUTO_TEST_SUITE_END()


















//BOOST_CHECK_EQUAL(calculator.div(), 3);
//BOOST_CHECK_THROW(calculator.div(), std::exception);
