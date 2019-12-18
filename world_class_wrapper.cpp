/*
 * @Copyright: SAIC AI LAB
 * @Version: 1.0
 * @Author: Huang Yan
 * @Description: Description
 * @Date: 2019-12-18 14:57:38
 */
#include <boost/python.hpp>
#include "word_class.hpp"

using namespace boost::python;

BOOST_PYTHON_MODULE(hello) {
  class_<World>("World", init<std::string>())
      .def("Greet", &World::Greet)
      .def("Set", &World::Set);
}
