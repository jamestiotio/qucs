// VS::printSubckt main
module main();
Pac #(.$xposition(60), .$yposition(110), .$tx(-74), .$ty(-74), .Num(1), .Z(50 Ohm), .P(0 dBm), .f(1 GHz), .Temp(26.85)) P1(net_60_80, net_60_140);
GND #(.$xposition(60), .$yposition(140), .$tx(0), .$ty(0)) anonymous_gnd_hack_0(net_60_140);
TLIN #(.$xposition(130), .$yposition(80), .$tx(-26), .$ty(-26), .Z(50 Ohm), .L(100 mm), .Alpha(0 dB), .Temp(26.85)) Line1(net_100_80, net_160_80);
TLIN #(.$xposition(230), .$yposition(40), .$tx(-26), .$ty(-26), .Z(70.7 Ohm), .L(75 mm), .Alpha(0 dB), .Temp(26.85)) Line2(net_200_40, net_260_40);
TLIN #(.$xposition(230), .$yposition(140), .$tx(-26), .$ty(-26), .Z(70.7 Ohm), .L(75 mm), .Alpha(0 dB), .Temp(26.85)) Line3(net_200_140, net_260_140);
Pac #(.$xposition(410), .$yposition(70), .$tx(18), .$ty(18), .Num(2), .Z(50 Ohm), .P(0 dBm), .f(1 GHz), .Temp(26.85)) P2(net_410_40, net_410_100);
Pac #(.$xposition(410), .$yposition(170), .$tx(18), .$ty(18), .Num(3), .Z(50 Ohm), .P(0 dBm), .f(1 GHz), .Temp(26.85)) P3(net_410_140, net_410_200);
GND #(.$xposition(410), .$yposition(200), .$tx(0), .$ty(0)) anonymous_gnd_hack_1(net_410_200);
GND #(.$xposition(410), .$yposition(100), .$tx(0), .$ty(0)) anonymous_gnd_hack_2(net_410_100);
R #(.$xposition(300), .$yposition(90), .$tx(15), .$ty(15), .R(100 Ohm), .Temp(26.85), .Tc1(0.0), .Tc2(0.0), .Tnom(26.85), .Symbol(european)) R1(net_300_120, net_300_60);
//SP1
Eqn #(.$xposition(140), .$yposition(230), .$tx(-23), .$ty(-23), .Attenuation2(dB(S[2,1])), .Reflect(dB(S[1,1])), .Attenuation3(dB(S[3,1])), .Decoupling(dB(S[3,2])), .Export(yes)) Eqn1();
wire #(.$xposition(180), .$yposition(40)) noname(net_180_40, net_200_40);
wire #(.$xposition(180), .$yposition(40)) noname(net_180_40, net_180_80);
wire #(.$xposition(180), .$yposition(140)) noname(net_180_140, net_200_140);
wire #(.$xposition(260), .$yposition(40)) noname(net_260_40, net_300_40);
wire #(.$xposition(260), .$yposition(140)) noname(net_260_140, net_300_140);
wire #(.$xposition(60), .$yposition(80)) noname(net_60_80, net_100_80);
wire #(.$xposition(180), .$yposition(80)) noname(net_180_80, net_180_140);
wire #(.$xposition(160), .$yposition(80)) noname(net_160_80, net_180_80);
wire #(.$xposition(300), .$yposition(140)) noname(net_300_140, net_410_140);
wire #(.$xposition(300), .$yposition(120)) noname(net_300_120, net_300_140);
wire #(.$xposition(300), .$yposition(40)) noname(net_300_40, net_410_40);
wire #(.$xposition(300), .$yposition(40)) noname(net_300_40, net_300_60);
place #(.$xposition(60), .$yposition(80)) net_60_80(net_60_80);
place #(.$xposition(60), .$yposition(140)) net_60_140(net_60_140);
place #(.$xposition(100), .$yposition(80)) net_100_80(net_100_80);
place #(.$xposition(160), .$yposition(80)) net_160_80(net_160_80);
place #(.$xposition(200), .$yposition(40)) net_200_40(net_200_40);
place #(.$xposition(260), .$yposition(40)) net_260_40(net_260_40);
place #(.$xposition(200), .$yposition(140)) net_200_140(net_200_140);
place #(.$xposition(260), .$yposition(140)) net_260_140(net_260_140);
place #(.$xposition(410), .$yposition(40)) net_410_40(net_410_40);
place #(.$xposition(410), .$yposition(100)) net_410_100(net_410_100);
place #(.$xposition(410), .$yposition(140)) net_410_140(net_410_140);
place #(.$xposition(410), .$yposition(200)) net_410_200(net_410_200);
place #(.$xposition(300), .$yposition(120)) net_300_120(net_300_120);
place #(.$xposition(300), .$yposition(60)) net_300_60(net_300_60);
place #(.$xposition(180), .$yposition(40)) net_180_40(net_180_40);
place #(.$xposition(180), .$yposition(80)) net_180_80(net_180_80);
place #(.$xposition(180), .$yposition(140)) net_180_140(net_180_140);
place #(.$xposition(300), .$yposition(40)) net_300_40(net_300_40);
place #(.$xposition(300), .$yposition(140)) net_300_140(net_300_140);
endmodule // main

