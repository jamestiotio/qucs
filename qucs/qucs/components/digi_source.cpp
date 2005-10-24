/***************************************************************************
                               subcirport.cpp
                              ----------------
    begin                : Oct 3 2005
    copyright            : (C) 2005 by Michael Margraf
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

#include "digi_source.h"
#include "node.h"


Digi_Source::Digi_Source()
{
  Type = isDigitalComponent;
  Description = QObject::tr("digital source");

  Lines.append(new Line(-10,  0,  0,  0,QPen(QPen::darkGreen,2)));
  Lines.append(new Line(-20,-10,-10,  0,QPen(QPen::darkGreen,2)));
  Lines.append(new Line(-20, 10,-10,  0,QPen(QPen::darkGreen,2)));
  Lines.append(new Line(-35,-10,-20,-10,QPen(QPen::darkGreen,2)));
  Lines.append(new Line(-35, 10,-20, 10,QPen(QPen::darkGreen,2)));
  Lines.append(new Line(-35,-10,-35, 10,QPen(QPen::darkGreen,2)));

  Lines.append(new Line(-32, 5,-28, 5,QPen(QPen::darkGreen,2)));
  Lines.append(new Line(-28,-5,-24,-5,QPen(QPen::darkGreen,2)));
  Lines.append(new Line(-24, 5,-20, 5,QPen(QPen::darkGreen,2)));
  Lines.append(new Line(-28,-5,-28, 5,QPen(QPen::darkGreen,2)));
  Lines.append(new Line(-24,-5,-24, 5,QPen(QPen::darkGreen,2)));

  Ports.append(new Port(  0,  0));

  x1 = -39; y1 = -14;
  x2 =   0; y2 =  14;

  tx = x1+4;
  ty = y2+2;
  Model = "DigiSource";
  Name  = "S";

  // This property must be the first one !
  Props.append(new Property("Num", "1", true,
		QObject::tr("number of the port")));
  Props.append(new Property("init", "low", false,
		QObject::tr("initial output value")+" [low, high]"));
  Props.append(new Property("times", "1ns; 1ns", false,
		QObject::tr("list of times for changing output value")));
}

// -------------------------------------------------------
Digi_Source::~Digi_Source()
{
}

// -------------------------------------------------------
Component* Digi_Source::newOne()
{
  return new Digi_Source();
}

// -------------------------------------------------------
Element* Digi_Source::info(QString& Name, char* &BitmapFile, bool getNewOne)
{
  Name = QObject::tr("digital source");
  BitmapFile = "digi_source";

  if(getNewOne)  return new Digi_Source();
  return 0;
}

// -------------------------------------------------------
QString Digi_Source::VHDL_Code()
{
  QString s, Time;
  QString Out("    " + Ports.getFirst()->Connection->Name + " <= '");
//  int Num = Props.first()->Value.toInt();

  char State;
  if(Props.at(1)->Value == "low")
    State = '0';
  else
    State = '1';

  s  = "\n  " + Name + ":process\n  begin\n";

  int z = 0;
  Time = Props.next()->Value.section(';',z,z);
  while(!Time.isEmpty()) {
    s += Out + State + "';\n";    // next value for signal
    s += "    wait for " + Time + ";\n";
    State ^= 1;
    z++;
    Time = Props.current()->Value.section(';',z,z);
  }

  s += "  end process;\n";
  return s;
}
