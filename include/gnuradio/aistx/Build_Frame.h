/* -*- c++ -*- */
/*
 * Copyright 2023 gr-aistx author.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_AISTX_BUILD_FRAME_H
#define INCLUDED_AISTX_BUILD_FRAME_H

#include <gnuradio/aistx/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace aistx {

    /*!
     * \brief Builds AIS Frame
     * \ingroup aistx
     *
     */
    class AISTX_API Build_Frame : virtual public gr::sync_block
    {
     public:
      typedef std::shared_ptr<Build_Frame> sptr;

      /*!
       * \brief Builds an AIS Frame of 256 bytes.
       *
       * This module does, in order:
       * 1. Payload (NMEA sentence) encoding (6 bits per ASCII)
       * 2. CRC generation [16]
       * 3. Reverse bit order (payload + crc)
       * 4. Stuffing (payload + crc)
       * 5. Headers (Preamble [24], Start [8], Trailer [8], 0x00 Padding)
       * 6. NRZI conversion (enabled by default)
       *
       */
      static sptr make(const char *sentence, bool repeat, bool enable_NRZI);
    };

  } // namespace aistx
} // namespace gr

#endif /* INCLUDED_AISTX_BUILD_FRAME_H */
