title: The AISTX OOT Module
brief: Short description of gr-aistx
tags: # Tags are arbitrary, but look at CGRAN what other authors are using
  - sdr
  - ais
author:
  -  <authors@email.address>
copyright_owner:
  - Copyright Owner 1
license:
gr_supported_version: 3.10
#repo: # Put the URL of the repository here, or leave blank for default
#website: <module_website> # If you have a separate project website, put it here
#icon: <icon_url> # Put a URL to a square image here that will be used as an icon on CGRAN
---
This directory contains a custom block for GnuRadio we called AIS Frame Builder.
It is part of the AIS BlackToolkit.

This block serves as generator of AIS frames and implements the full AIS stack.
It is composed of three main components covering respectively the
application/presentation layers, the link layer and the physical layer,
as defined in the protocol specification for AIS.

The AIS transmitter in form of GRC graph            a1e4b54db83fb895a3c94493126bb318  AiS_TX.grc
The AIS transmitter in form of script kiddie script 52540b46f316ee460f4684a262132d36  AiS_TX.py
An AIVDM encoder supporting the main message types  056ac09822b342da296617ba7b4055dd  AIVDM_Encoder.py
The AIS Frame Builder block for GnuRadio            c8b7018386f64dd725fde119f406f574  gr-aistx.tgz

$ mkdir build
$ cd build
$ cmake ../
$ make
$ sudo make install

Copyright 2013-2014 -- Embyte & Pastus

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.


