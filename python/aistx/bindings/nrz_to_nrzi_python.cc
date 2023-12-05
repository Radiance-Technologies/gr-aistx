/*
 * Copyright 2023 Free Software Foundation, Inc.
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
/* BINDTOOL_HEADER_FILE(nrz_to_nrzi.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(0215ca7588999798d8f3042b0a8ee157)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/aistx/nrz_to_nrzi.h>
// pydoc.h is automatically generated in the build directory
#include <nrz_to_nrzi_pydoc.h>

void bind_nrz_to_nrzi(py::module& m)
{

    using nrz_to_nrzi    = ::gr::aistx::nrz_to_nrzi;


    py::class_<nrz_to_nrzi, gr::block, gr::basic_block,
        std::shared_ptr<nrz_to_nrzi>>(m, "nrz_to_nrzi", D(nrz_to_nrzi))

        .def(py::init(&nrz_to_nrzi::make),
           D(nrz_to_nrzi,make)
        )
        



        ;




}








