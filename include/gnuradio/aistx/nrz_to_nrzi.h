/* -*- c++ -*- */
/*
 * Copyright 2023 gr-aistx author.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_AISTX_NRZ_TO_NRZI_H
#define INCLUDED_AISTX_NRZ_TO_NRZI_H

#include <gnuradio/aistx/api.h>
#include <gnuradio/block.h>

namespace gr {
  namespace aistx {

    /*!
     * \brief Convert from NRZ to NRZI
     * \ingroup aistx
     *
     */
    class AISTX_API nrz_to_nrzi : virtual public gr::block
    {
     public:
      typedef std::shared_ptr<nrz_to_nrzi> sptr;

      /*!
       * \brief Convert from NRZ to NRZI
       *
       * Convert a BYTE sequence from NRZ to NRZI. Note: This is also implemented in the Build_Frame component.
       *
       */
      static sptr make();
    };

  } // namespace aistx
} // namespace gr

#endif /* INCLUDED_AISTX_NRZ_TO_NRZI_H */
