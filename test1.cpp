#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(test1_0){
    const int i = 0;
    BOOST_CHECK(i == 0);
}
BOOST_AUTO_TEST_CASE(test1_1){
    const int i = 0;
    BOOST_CHECK(i == 1);
}
