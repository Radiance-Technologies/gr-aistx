/* -*- c++ -*- */
/*
 * Copyright 2023 gr-aistx author.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <gnuradio/io_signature.h>
#include "nrz_to_nrzi_impl.h"

namespace gr {
  namespace aistx {

    
    using input_type = unsigned char;
    using output_type = unsigned char;
    nrz_to_nrzi::sptr
    nrz_to_nrzi::make()
    {
      return gnuradio::make_block_sptr<nrz_to_nrzi_impl>(
        );
    }


    /*
     * The private constructor
     */
    nrz_to_nrzi_impl::nrz_to_nrzi_impl()
      : gr::block("nrz_to_nrzi",
              gr::io_signature::make(1 /* min inputs */, 1 /* max inputs */, sizeof(input_type)),
              gr::io_signature::make(1 /* min outputs */, 1 /*max outputs */, sizeof(output_type)))
    {}

    /*
     * Our virtual destructor.
     */
    nrz_to_nrzi_impl::~nrz_to_nrzi_impl()
    {
    }

    void
    nrz_to_nrzi_impl::forecast (int noutput_items, gr_vector_int &ninput_items_required)
    {
     /* <+forecast+> e.g. ninput_items_required[0] = noutput_items */
    }

    int
    nrz_to_nrzi_impl::general_work (int noutput_items,
                       gr_vector_int &ninput_items,
                       gr_vector_const_void_star &input_items,
                       gr_vector_void_star &output_items)
    {
        auto in = static_cast<const input_type*>(input_items[0]);
        auto out = static_cast<output_type*>(output_items[0]);
        
        unsigned char        nrzi_bit;
        unsigned char        nrz_bit;
        unsigned char        d_prev_nrzi_bit = 0;

        for(int i = 0;i<noutput_items;++i)
            printf("%d", in[i]);
        printf("\n");   

        for (int i = 0; i < noutput_items; i++)
        {     
            nrz_bit = in[i];

            if(nrz_bit == 0)
              {
                nrzi_bit = d_prev_nrzi_bit ^ 1;
              }
            else
              {
                nrzi_bit = d_prev_nrzi_bit;
              }
            out[i] = nrzi_bit;
            d_prev_nrzi_bit = nrzi_bit;

        }

        for(int i = 0;i<noutput_items;++i)
            printf("%d", out[i]);
        printf("\n");   

        // Tell runtime system how many input items we consumed on
        // each input stream.
        consume_each (noutput_items);

        // Tell runtime system how many output items we produced.
        return noutput_items;
    }

  } /* namespace aistx */
} /* namespace gr */
