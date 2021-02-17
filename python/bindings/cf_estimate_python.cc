/*
 * Copyright 2021 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(cf_estimate.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(e9158cb2c52ba5ebb0b1d8ea8db57469)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <fhss_utils/cf_estimate.h>
// pydoc.h is automatically generated in the build directory
#include <cf_estimate_pydoc.h>

void bind_cf_estimate(py::module& m)
{

    using cf_estimate = ::gr::fhss_utils::cf_estimate;


    py::class_<cf_estimate, gr::block, gr::basic_block, std::shared_ptr<cf_estimate>>(
        m, "cf_estimate", D(cf_estimate))

        .def(py::init(&cf_estimate::make),
             py::arg("method") = 0,
             py::arg("channel_freqs") = std::vector<float>(),
             D(cf_estimate, make))


        .def("set_freqs",
             &cf_estimate::set_freqs,
             py::arg("channel_freqs"),
             D(cf_estimate, set_freqs))


        .def("set_method",
             &cf_estimate::set_method,
             py::arg("method"),
             D(cf_estimate, set_method))

        ;

    py::enum_<::gr::fhss_utils::cf_method>(m, "cf_method")
        .value("RMS", ::gr::fhss_utils::RMS)               // 0
        .value("HALF_POWER", ::gr::fhss_utils::HALF_POWER) // 1
        .value("COERCE", ::gr::fhss_utils::COERCE)         // 2
        .export_values();

    py::implicitly_convertible<int, ::gr::fhss_utils::cf_method>();
}
