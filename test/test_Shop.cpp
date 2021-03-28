#ifdef STAND_ALONE
#   define BOOST_TEST_MODULE DemoTests
#endif

#include <boost/test/unit_test.hpp>
#include "../src/Shop.hpp"

BOOST_AUTO_TEST_SUITE(calculator_suite)

    BOOST_AUTO_TEST_CASE(emptyShop)
    {
        Shop shop;
        BOOST_CHECK_EQUAL(shop.calcPriceToBuyAnyProduct(), 0);
    }

    BOOST_AUTO_TEST_CASE(singleProductInShop)
    {
        Shop shop;
        shop.addProduct("Butter", 5);
        BOOST_CHECK_EQUAL(shop.calcPriceToBuyAnyProduct(), 5);
    }

    BOOST_AUTO_TEST_CASE(addClient)
    {
        Shop shop;
        shop.addClient("Jan","Kowalski",5);
        Client c = shop.findClient("Jan", "Kowalski");
        BOOST_CHECK_EQUAL(c.getName(), "Jan");
        BOOST_CHECK_EQUAL(c.getSurname(), "Kowalski");
        BOOST_CHECK_EQUAL(c.getAge(), 5);
    }

BOOST_AUTO_TEST_SUITE_END()

















