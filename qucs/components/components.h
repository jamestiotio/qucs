/***************************************************************************
                               components.h
                              --------------
    begin                : Sat Aug 23 2003
    copyright            : (C) 2003 by Michael Margraf
    email                : michael.margraf@alumni.tu-berlin.de
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef COMPONENTS_H
#define COMPONENTS_H

// This header file includes the header files of all components.

#include "component.h"

#include "ground.h"
#include "resistor.h"
#include "capacitor.h"
#include "inductor.h"
#include "dcblock.h"
#include "dcfeed.h"
#include "biast.h"
#include "transformer.h"
#include "symtrafo.h"
#include "subcirport.h"
#include "subcircuit.h"
#include "sparamfile.h"
#include "equation.h"
#include "attenuator.h"
#include "amplifier.h"
#include "opamp.h"
#include "isolator.h"
#include "circulator.h"
#include "gyrator.h"
#include "phaseshifter.h"
#include "volt_dc.h"
#include "ampere_dc.h"
#include "volt_ac.h"
#include "ampere_ac.h"
#include "source_ac.h"
#include "vexp.h"
#include "iexp.h"
#include "vfile.h"
#include "ifile.h"
#include "vccs.h"
#include "cccs.h"
#include "vcvs.h"
#include "ccvs.h"
#include "tline.h"
#include "ctline.h"
#include "tline_4port.h"
#include "twistedpair.h"
#include "coaxialline.h"
#include "taperedline.h"
#include "rectline.h"
#include "circline.h"
#include "rlcg.h"
#include "substrate.h"
#include "msline.h"
#include "mscoupled.h"
#include "mslange.h"
#include "msstep.h"
#include "mscorner.h"
#include "mstee.h"
#include "mscross.h"
#include "msmbend.h"
#include "msopen.h"
#include "msgap.h"
#include "msvia.h"
#include "msrstub.h"
#include "coplanar.h"
#include "cpwopen.h"
#include "cpwshort.h"
#include "cpwgap.h"
#include "cpwstep.h"
#include "bondwire.h"
#include "diode.h"
#include "bjt.h"
#include "bjtsub.h"
#include "jfet.h"
#include "mosfet.h"
#include "mosfet_sub.h"
#include "eqndefined.h"
#include "tunneldiode.h"
#include "dc_sim.h"
#include "ac_sim.h"
#include "tr_sim.h"
#include "sp_sim.h"
#include "hb_sim.h"
#include "opt_sim.h"
#include "param_sweep.h"
#include "iprobe.h"
#include "ohmmeter.h"
#include "wprobe.h"
#include "vprobe.h"
#include "volt_noise.h"
#include "ampere_noise.h"
#include "noise_ii.h"
#include "noise_iv.h"
#include "noise_vv.h"
#include "vpulse.h"
#include "ipulse.h"
#include "vrect.h"
#include "irect.h"
#include "spicefile.h"
#include "libcomp.h"
#include "mutual.h"
#include "mutual2.h"
#include "mutualx.h"
#include "coupler.h"
#include "hybrid.h"
#include "switch.h"
#include "relais.h"
#include "am_modulator.h"
#include "pm_modulator.h"
#include "logical_or.h"
#include "logical_nor.h"
#include "logical_and.h"
#include "logical_nand.h"
#include "logical_xor.h"
#include "logical_xnor.h"
#include "logical_inv.h"
#include "logical_buf.h"
#include "digi_sim.h"
#include "digi_source.h"
#include "rs_flipflop.h"
#include "d_flipflop.h"
#include "jk_flipflop.h"
#include "vhdlfile.h"
#include "verilogfile.h"
#include "diac.h"
#include "triac.h"
#include "thyristor.h"
#include "rfedd.h"
#include "rfedd2p.h"

#include "mod_amp.h"
#include "log_amp.h"
#include "potentiometer.h"
#include "MESFET.h"
#include "EKV26MOS.h"

#include "photodiode.h"
#include "phototransistor.h"
#include "nigbt.h"
#include "vcresistor.h"

#include "dff_SR.h"
#include "tff_SR.h"
#include "jkff_SR.h"
#include "gatedDlatch.h"
#include "logic_1.h"
#include "logic_0.h"
#include "mux2to1.h"
#include "mux4to1.h"
#include "mux8to1.h"
#include "DLS_nto1.h"
#include "DLS_1ton.h"
#include "andor4x2.h"
#include "andor4x3.h"
#include "andor4x4.h"
#include "dmux2to4.h"
#include "dmux3to8.h"
#include "dmux4to16.h"
#include "ha1b.h"
#include "fa1b.h"
#include "fa2b.h"
#include "pad2bit.h"
#include "pad3bit.h"
#include "pad4bit.h"
#include "binarytogrey4bit.h"
#include "greytobinary4bit.h"
#include "comp_1bit.h"
#include "comp_2bit.h"
#include "comp_4bit.h"
#include "hpribin4bit.h"

// external simulation components
#include "etr_sim.h"
#include "ecvs.h"

// Verilog-A dynamicaly loaded component
#include "vacomponent.h"

#endif
