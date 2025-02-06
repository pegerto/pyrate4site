#include <pybind11/pybind11.h>
#include "rate4site.h"

#define STRINGIFY(x) #x
#define MACRO_STRINGIFY(x) STRINGIFY(x)

int run_rate4site() {
    rate4site r4s;
    return 0;
}

namespace py = pybind11;

PYBIND11_MODULE(pyrate4site, m) {
    m.doc() = R"pbdoc(
        Rate4Site Plugin
        -----------------------

        .. currentmodule:: pyrate4site

        .. autosummary::
           :toctree: _generate

    )pbdoc";

    m.def("rate4site", &run_rate4site, R"pbdoc(
        Compute Rate4site

    )pbdoc");

#ifdef VERSION_INFO
    m.attr("__version__") = MACRO_STRINGIFY(VERSION_INFO);
#else
    m.attr("__version__") = "dev";
#endif
}