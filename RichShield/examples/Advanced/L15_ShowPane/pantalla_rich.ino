#include <Wire.h>
//#include «RichShieldKEY.h»

#include "RichShieldTM1637.h"
 
#define CLK 10//CLK of the TM1637 IC connect to D10 of OPEN-SMART UNO R3
#define DIO 11//DIO of the TM1637 IC connect to D11 of OPEN-SMART UNO R3
TM1637 disp(CLK,DIO);


int count = 0;
#define SIMBOLO_A 0b01110111            //  A
#define SIMBOLO_a 0b01011111            //  a 
#define SIMBOLO_b 0b01111100            //  b
#define SIMBOLO_C 0b00111001            //  C
#define SIMBOLO_c 0b01011000            //  c
#define SIMBOLO_d 0b01011110            //  d
#define SIMBOLO_E 0b01111001            //  E
#define SIMBOLO_F 0b01110001            //  F
#define SIMBOLO_G 0b00111101            //  G
#define SIMBOLO_g 0b01101111            //  g
#define SIMBOLO_H 0b01110110            //  H
#define SIMBOLO_h 0b01110100            //  h
#define SIMBOLO_I 0b00110000            //  I
#define SIMBOLO_i 0b00010000            //  i
#define SIMBOLO_J 0b00011110            //  J
#define SIMBOLO_L 0b00111000            //  L 
#define SIMBOLO_N 0b00110111            //  ‘N’ o ‘M’
#define SIMBOLO_n 0b01010100            //  n 
#define SIMBOLO_O 0b00111111            //  O (0)
#define SIMBOLO_o 0b01011100            //  o  
#define SIMBOLO_P 0b01110011            //  P
#define SIMBOLO_q 0b01100111            //  q
#define SIMBOLO_r 0b01010000            //  r  
#define SIMBOLO_S 0b01101101            //  S (5)
#define SIMBOLO_t 0b01111000            //  t 
#define SIMBOLO_U 0b00111110            //  U ‘V’ 
#define SIMBOLO_v 0b00011100            //  v 
#define SIMBOLO_Y 0b01101110            //  Y  
#define SIMBOLO_Z 0b01011011            //  Z (2)

String str="hola";
int final1=0;
void setup()
{
  disp.init();//The initialization of the display
 // disp.display(count);//display counter number
 disp.set(2);
 
 
// disp.displaySegments(0, SIMBOLO_T);
//strcmp(str.charAt(0),
/* disp.displaySegments(1, SIMBOLO_O);
 disp.displaySegments(2, SIMBOLO_v);
 disp.displaySegments(3, SIMBOLO_Y);*/
  // disp.display(74, 6f, 6d, 79);
   
}


 void volverSimbolo(char simbolo1, int donde){
  
  String simbolo="";
  simbolo.concat(simbolo1);

  if(simbolo.equals("a")){
    disp.displaySegments(donde, SIMBOLO_A);
  }else if(simbolo.equals("b")){
    disp.displaySegments(donde, SIMBOLO_b);
  }else if(simbolo.equals("c")){
    disp.displaySegments(donde, SIMBOLO_C);
  }else if(simbolo.equals("d")){
    disp.displaySegments(donde, SIMBOLO_d);
  }else if(simbolo.equals("e")){
    disp.displaySegments(donde, SIMBOLO_E);
  }else if(simbolo.equals("f")){
    disp.displaySegments(donde, SIMBOLO_F);
  }else if(simbolo.equals("g")){
    disp.displaySegments(donde, SIMBOLO_G);
  }else if(simbolo.equals("h")){
    disp.displaySegments(donde, SIMBOLO_H);
  }else if(simbolo.equals("i")){
    disp.displaySegments(donde, SIMBOLO_I);
  }else if(simbolo.equals("j")){
    disp.displaySegments(donde, SIMBOLO_J);
  }else if(simbolo.equals("k")){
   // disp.displaySegments(donde, SIMBOLO_k);
  }else if(simbolo.equals("l")){
    disp.displaySegments(donde, SIMBOLO_L);
  }else if(simbolo.equals("m")){
    disp.displaySegments(donde, SIMBOLO_N);
  }else if(simbolo.equals("n")){
    disp.displaySegments(donde, SIMBOLO_N);
  }else if(simbolo.equals("o")){
    disp.displaySegments(donde, SIMBOLO_O);
  }else if(simbolo.equals("p")){
    disp.displaySegments(donde, SIMBOLO_P);
  }else if(simbolo.equals("q")){
    disp.displaySegments(donde, SIMBOLO_q);
  }else if(simbolo.equals("r")){
    disp.displaySegments(donde, SIMBOLO_r);
  }else if(simbolo.equals("s")){
    disp.displaySegments(donde, SIMBOLO_S);
  }else if(simbolo.equals("t")){
    disp.displaySegments(donde, SIMBOLO_t);
  }else if(simbolo.equals("u")){
    disp.displaySegments(donde, SIMBOLO_U);
  }else if(simbolo.equals("v")){
    disp.displaySegments(donde, SIMBOLO_v);
  }else if(simbolo.equals("w")){
    disp.displaySegments(donde, SIMBOLO_v);
  }else if(simbolo.equals("x")){
  //  disp.displaySegments(donde, SIMBOLO_x);
  }else if(simbolo.equals("y")){
    disp.displaySegments(donde, SIMBOLO_Y);
  }else if(simbolo.equals("z")){
    disp.displaySegments(donde, SIMBOLO_Z);
  }else{
    //Serial.write(simbolo);
  }
  
 }
void loop()
{
   Serial.begin(9600);
  int i;
 /* int total = str.length();
  int medio=0;
  int medio4=medio+4;*/
  
 for (i=0;i<4;i=i+1){
 
   volverSimbolo(str.charAt(i),i);
   //Serial.write(str.charAt(i));
   delay(1000);
 }

  
 
  
  
 // delay(50);//
}
