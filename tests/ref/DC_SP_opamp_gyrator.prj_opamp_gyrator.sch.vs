// VS::printSubckt main
module main();
GND #(.$xposition(260), .$yposition(280), .$vflip(1), .$hflip(1), .$tx(0), .$ty(0)) anonymous_gnd_hack_0(net_260_280);
C #(.$xposition(210), .$yposition(150), .$vflip(1), .$hflip(1), .$tx(-26), .$ty(-26), .C(1 uF), .V(), .Symbol(neutral)) C1(net_180_150, net_240_150);
Pac #(.$xposition(70), .$yposition(160), .$vflip(1), .$hflip(1), .$tx(18), .$ty(18), .Num(1), .Z(50 Ohm), .P(0 dBm), .f(1 GHz), .Temp(26.85)) P1(net_70_130, net_70_190);
GND #(.$xposition(70), .$yposition(190), .$vflip(1), .$hflip(1), .$tx(0), .$ty(0)) anonymous_gnd_hack_1(net_70_190);
OpAmp #(.$xposition(290), .$yposition(130), .$vflip(1), .$hflip(1), .$tx(-26), .$ty(-26), .G(1e6), .Umax(15 V)) OP1(net_260_150, net_260_110, net_330_130);
R #(.$xposition(210), .$yposition(110), .$vflip(-1), .$hflip(1), .$tx(-26), .$ty(-26), .R(10 Ohm), .Temp(26.85), .Tc1(0.0), .Tc2(0.0), .Tnom(26.85), .Symbol(european)) R1(net_180_110, net_240_110);
R #(.$xposition(260), .$yposition(250), .$vflip(-1), .$hflip(1), .$tx(-57), .$ty(-57), .R(500k), .Temp(26.85), .Tc1(0.0), .Tc2(0.0), .Tnom(26.85), .Symbol(european)) R2(net_260_280, net_260_220);
GND #(.$xposition(530), .$yposition(160), .$vflip(1), .$hflip(1), .$tx(0), .$ty(0)) anonymous_gnd_hack_2(net_530_160);
GND #(.$xposition(420), .$yposition(160), .$vflip(1), .$hflip(1), .$tx(0), .$ty(0)) anonymous_gnd_hack_3(net_420_160);
Pac #(.$xposition(420), .$yposition(130), .$vflip(1), .$hflip(1), .$tx(18), .$ty(18), .Num(2), .Z(50 Ohm), .P(0 dBm), .f(1 GHz), .Temp(26.85)) P2(net_420_100, net_420_160);
R #(.$xposition(530), .$yposition(130), .$vflip(1), .$hflip(1), .$tx(15), .$ty(15), .R(500k), .Temp(26.85), .Tc1(0.0), .Tc2(0.0), .Tnom(26.85), .Symbol(european)) R4(net_530_160, net_530_100);
R #(.$xposition(640), .$yposition(130), .$vflip(1), .$hflip(1), .$tx(15), .$ty(15), .R(10 Ohm), .Temp(26.85), .Tc1(0.0), .Tc2(0.0), .Tnom(26.85), .Symbol(european)) R3(net_640_160, net_640_100);
GND #(.$xposition(640), .$yposition(250), .$vflip(1), .$hflip(1), .$tx(0), .$ty(0)) anonymous_gnd_hack_4(net_640_250);
L #(.$xposition(640), .$yposition(220), .$vflip(1), .$hflip(1), .$tx(10), .$ty(10), .L(5 H), .I()) L1(net_640_250, net_640_190);
//DC1
wire #(.$xposition(240), .$yposition(110), .$vflip(1), .$hflip(1)) noname(net_240_110, net_260_110);
wire #(.$xposition(240), .$yposition(150), .$vflip(1), .$hflip(1)) noname(net_240_150, net_260_150);
wire #(.$xposition(260), .$yposition(70), .$vflip(1), .$hflip(1)) noname(net_260_70, net_260_110);
wire #(.$xposition(180), .$yposition(110), .$vflip(1), .$hflip(1)) noname(net_180_110, net_180_150);
wire #(.$xposition(260), .$yposition(150), .$vflip(1), .$hflip(1)) noname(net_260_150, net_260_220);
wire #(.$xposition(70), .$yposition(110), .$vflip(1), .$hflip(1)) noname(net_70_110, net_70_130);
wire #(.$xposition(70), .$yposition(110), .$vflip(1), .$hflip(1)) noname(net_70_110, net_180_110);
wire #(.$xposition(330), .$yposition(70), .$vflip(1), .$hflip(1)) noname(net_330_70, net_330_130);
wire #(.$xposition(260), .$yposition(70), .$vflip(1), .$hflip(1)) noname(net_260_70, net_330_70);
wire #(.$xposition(420), .$yposition(80), .$vflip(1), .$hflip(1)) noname(net_420_80, net_420_100);
wire #(.$xposition(640), .$yposition(80), .$vflip(1), .$hflip(1)) noname(net_640_80, net_640_100);
wire #(.$xposition(420), .$yposition(80), .$vflip(1), .$hflip(1)) noname(net_420_80, net_530_80);
wire #(.$xposition(530), .$yposition(80), .$vflip(1), .$hflip(1)) noname(net_530_80, net_640_80);
wire #(.$xposition(530), .$yposition(80), .$vflip(1), .$hflip(1)) noname(net_530_80, net_530_100);
wire #(.$xposition(640), .$yposition(160), .$vflip(1), .$hflip(1)) noname(net_640_160, net_640_190);
place #(.$xposition(260), .$yposition(280), .$vflip(1), .$hflip(1)) net_260_280(net_260_280);
place #(.$xposition(180), .$yposition(150), .$vflip(1), .$hflip(1)) net_180_150(net_180_150);
place #(.$xposition(240), .$yposition(150), .$vflip(1), .$hflip(1)) net_240_150(net_240_150);
place #(.$xposition(70), .$yposition(130), .$vflip(1), .$hflip(1)) net_70_130(net_70_130);
place #(.$xposition(70), .$yposition(190), .$vflip(1), .$hflip(1)) net_70_190(net_70_190);
place #(.$xposition(260), .$yposition(150), .$vflip(1), .$hflip(1)) net_260_150(net_260_150);
place #(.$xposition(260), .$yposition(110), .$vflip(1), .$hflip(1)) net_260_110(net_260_110);
place #(.$xposition(330), .$yposition(130), .$vflip(1), .$hflip(1)) net_330_130(net_330_130);
place #(.$xposition(180), .$yposition(110), .$vflip(1), .$hflip(1)) net_180_110(net_180_110);
place #(.$xposition(240), .$yposition(110), .$vflip(1), .$hflip(1)) net_240_110(net_240_110);
place #(.$xposition(260), .$yposition(220), .$vflip(1), .$hflip(1)) net_260_220(net_260_220);
place #(.$xposition(530), .$yposition(160), .$vflip(1), .$hflip(1)) net_530_160(net_530_160);
place #(.$xposition(420), .$yposition(160), .$vflip(1), .$hflip(1)) net_420_160(net_420_160);
place #(.$xposition(420), .$yposition(100), .$vflip(1), .$hflip(1)) net_420_100(net_420_100);
place #(.$xposition(530), .$yposition(100), .$vflip(1), .$hflip(1)) net_530_100(net_530_100);
place #(.$xposition(640), .$yposition(160), .$vflip(1), .$hflip(1)) net_640_160(net_640_160);
place #(.$xposition(640), .$yposition(100), .$vflip(1), .$hflip(1)) net_640_100(net_640_100);
place #(.$xposition(640), .$yposition(250), .$vflip(1), .$hflip(1)) net_640_250(net_640_250);
place #(.$xposition(640), .$yposition(190), .$vflip(1), .$hflip(1)) net_640_190(net_640_190);
place #(.$xposition(260), .$yposition(70), .$vflip(1), .$hflip(1)) net_260_70(net_260_70);
place #(.$xposition(70), .$yposition(110), .$vflip(1), .$hflip(1)) net_70_110(net_70_110);
place #(.$xposition(330), .$yposition(70), .$vflip(1), .$hflip(1)) net_330_70(net_330_70);
place #(.$xposition(420), .$yposition(80), .$vflip(1), .$hflip(1)) net_420_80(net_420_80);
place #(.$xposition(640), .$yposition(80), .$vflip(1), .$hflip(1)) net_640_80(net_640_80);
place #(.$xposition(530), .$yposition(80), .$vflip(1), .$hflip(1)) net_530_80(net_530_80);
endmodule // main

