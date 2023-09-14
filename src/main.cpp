#include <pybind11/pybind11.h>
#include "pricingutil.h"

namespace py = pybind11;

PYBIND11_MODULE(PricingUtil, m) {
    py::class_<PricingUtil>(m, "PricingUtil")
        .def(py::init<>())
        .def("calcVal", &PricingUtil::calcVal)
        .def("getVal", &PricingUtil::getVal);
}
