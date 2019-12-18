/*
 * @Copyright: SAIC AI LAB
 * @Version: 1.0
 * @Author: Huang Yan
 * @Description: Description
 * @Date: 2019-12-18 13:54:03
 */
#include <boost/python.hpp>
#include "greet.hpp"

BOOST_PYTHON_MODULE(hello_ext) {
    using namespace boost::python;
    def("greet", greet);
}
