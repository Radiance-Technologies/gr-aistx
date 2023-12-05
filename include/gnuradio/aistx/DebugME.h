/* -*- c++ -*- */
/*
 * Copyright 2023 gr-aistx author.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_AISTX_DEBUGME_H
#define INCLUDED_AISTX_DEBUGME_H

#include <gnuradio/aistx/api.h>
#include <gnuradio/block.h>

namespace gr {
  namespace aistx {

    /*!
     * \brief Print the incoming BYTE sequence
     * \ingroup aistx
     *
     */
    class AISTX_API DebugME : virtual public gr::block
    {
     public:
      typedef std::shared_ptr<DebugME> sptr;

      /*!
       * \brief Print the incoming BYTE sequence as sequence of HEXs
       *
       * Goes through the incoming sequence (const char *in) and prints it in HEXs
       */
      static sptr make(size_t itemsize);
    };

  } // namespace aistx
} // namespace gr

#endif /* INCLUDED_AISTX_DEBUGME_H */
