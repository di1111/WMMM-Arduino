// (C) Dylan Hu 2016

#define Ach 0 //defines the "A" column for the tlc5940 -->OUTPUT 0
#define Bch 1 //defines the "B" column for the tlc5940 -->OUTPUT 1
#define Cch 2 //defines the "C" column for the tlc5940 -->OUTPUT 2
#define Dch 3 //defines the "D" column for the tlc5940 -->OUTPUT 3
#define Ech 4 //defines the "E" column for the tlc5940 -->OUTPUT 4
#define Fch 5 //defines the "F" column for the tlc5940 -->OUTPUT 5
#define Gch 6 //defines the "G" column for the tlc5940 -->OUTPUT 6
#define Hch 7 //defines the "H" column for the tlc5940 -->OUTPUT 7
#define Ich 8 //defines the "I" column for the tlc5940 -->OUTPUT 8
#define Jch 9 //defines the "J" column for the tlc5940 -->OUTPUT 9

// set a variable for all LEDs and set the value to 0 for the beginning
int Aa = 0; // Led A row A
int Ba = 0; // Led B row A
int Ca = 0; // Led C row A
int Da = 0; // Led D row A
int Ea = 0; // Led F row A
int Fa = 0; // ""
int Ga = 0; // ""
int Ha = 0; // ""
int Ia = 0; // ""
int Ja = 0; // ""

int Ab = 0; // Led A row B
int Bb = 0; // ""
int Cb = 0; // ""
int Db = 0; // ""
int Eb = 0;
int Fb = 0;
int Gb = 0;
int Hb = 0;
int Ib = 0;
int Jb = 0;

int Ac = 0; //etc
int Bc = 0;
int Cc = 0;
int Dc = 0;
int Ec = 0;
int Fc = 0;
int Gc = 0;
int Hc = 0;
int Ic = 0;
int Jc = 0;

int Ad = 0; // etc
int Bd = 0;
int Cd = 0;
int Dd = 0;
int Ed = 0;
int Fd = 0;
int Gd = 0;
int Hd = 0;
int Id = 0;
int Jd = 0;

int Ae = 0; //etc
int Be = 0;
int Ce = 0;
int De = 0;
int Ee = 0;
int Fe = 0;
int Ge = 0;
int He = 0;
int Ie = 0;
int Je = 0;

#include "Tlc5940.h"  //don't forget to download the Tlc5940 lib from arduino playground ( http://tlc5940arduino.googlecode.com/files/Tlc5940_r014_2.zip )
#define RowOne 8      //Gate of 1.MOSFET which connects to Row "a" (anodes of all LEDs in Row "a")
#define RowTwo 7      //Gate of 2.MOSFET which connects to Row "b" (anodes of all LEDS in Row "b")
#define RowThree 6    //Gate of 3.MOSFET which connects to Row "c" (anodes of all LEDs in Row "c")
#define RowFour 5     //Gate of 4.MOSFET which connects to Row "d" (anodes of all LEDs in Row "d")
#define RowFive 4     //Gate of 5.MOSFET which connects to Row "e" (anodes of all LEDs in Row "e")


int RowDuration = 1;     // ON time of each Row in miliseconds
int row = 0;                // starting with Row 0 (Row "a")
int bright = 1750;          // set brightness for all LEDs(4095=20mA, 0=0ma, 1000=4.88mA,....). If you want individually brightness for a LED you have to change the value in tab "function"
int notbright = 0;
int timeThing = 0;
int timeThing2 = 0;
int timeThing3 = 0;
int timeToTalk = 30000;

void setup() {
  pinMode(RowOne, OUTPUT);  // declare arduino nano pin 8(RowOne) as OUTPUT
  pinMode(RowTwo, OUTPUT);  // declare arduino nano pin 7(RowTwo) as OUTPUT
  pinMode(RowThree, OUTPUT);// declare arduino nano pin 6(RowThree) as OUTPUT
  pinMode(RowFour, OUTPUT); // declare arduino nano pin 5(RowFour) as OUTPUT
  pinMode(RowFive, OUTPUT); // declare arduino nano pin 4(RowFive) as OUTPUT
  Tlc.init();               // configures the arduino to use the tlc5940, be sure to connect the arduino correctly to the tlc
}

void loop() {
  // put your main code here, to run repeatedly:
  while (timeThing < 15000) { //This is the 'Introduction' section of WMMM
    reset();
    delay(RowDuration);
    if (row == 0) {
      Me_1();
    }
    if (row == 1) {
      Me_2();
    }
    if (row == 2) {
      Me_3();
    }
    if (row == 3) {
      Me_4();
    }
    if (row == 4) {
      Me_5();
    }
    matrixUpdate(row);
    row++;
    if (row == 5) {
      row = 0;
    }
    timeThing = timeThing + RowDuration + 2;
  }

  timeThing = 0;
  row = 0;
  reset();

  //THIS IS THE MY PAST THING
  while (timeThing < 7000) { //2004 animation
    while (timeThing2 < 1000) { //This is '2004'
      reset();
      delay(RowDuration);
      if (row == 0) {
        Me2004_1_1();
      }
      if (row == 1) {
        Me2004_1_2();
      }
      if (row == 2) {
        Me2004_1_3();
      }
      if (row == 3) {
        Me2004_1_4();
      }
      if (row == 4) {
        Me2004_1_5();
      }
      matrixUpdate(row);
      row++;
      if (row == 5) {
        row = 0;
      }
      timeThing2 = timeThing2 + RowDuration + 2;
      timeThing = timeThing + RowDuration + 2;
    }

    row = 0;
    timeThing2 = 0;

    while (timeThing2 < 500) { //'2004'
      reset();
      delay(RowDuration);
      if (row == 0) {
        Me2004_2_1();
      }
      if (row == 1) {
        Me2004_2_2();
      }
      if (row == 2) {
        Me2004_2_3();
      }
      if (row == 3) {
        Me2004_2_4();
      }
      if (row == 4) {
        Me2004_2_5();
      }
      matrixUpdate(row);
      row++;
      if (row == 5) {
        row = 0;
      }
      timeThing2 = timeThing2 + RowDuration + 2;
      timeThing = timeThing + RowDuration + 2;
    }

    row = 0;
    timeThing2 = 0;

    while (timeThing2 < 1000) { //'2004'
      reset();
      delay(RowDuration);
      if (row == 0) {
        Me2004_3_1();
      }
      if (row == 1) {
        Me2004_3_2();
      }
      if (row == 2) {
        Me2004_3_3();
      }
      if (row == 3) {
        Me2004_3_4();
      }
      if (row == 4) {
        Me2004_3_5();
      }
      matrixUpdate(row);
      row++;
      if (row == 5) {
        row = 0;
      }
      timeThing2 = timeThing2 + RowDuration + 2;
      timeThing = timeThing + RowDuration + 2;
    }

    row = 0;
    timeThing2 = 0;

    while (timeThing2 < 500) { //'2004'
      reset();
      delay(RowDuration);
      if (row == 0) {
        Me2004_4_1();
      }
      if (row == 1) {
        Me2004_4_2();
      }
      if (row == 2) {
        Me2004_4_3();
      }
      if (row == 3) {
        Me2004_4_4();
      }
      if (row == 4) {
        Me2004_4_5();
      }
      matrixUpdate(row);
      row++;
      if (row == 5) {
        row = 0;
      }
      timeThing2 = timeThing2 + RowDuration + 2;
      timeThing = timeThing + RowDuration + 2;
    }

    row = 0;
    timeThing2 = 0;
  }

  row = 0;
  timeThing2 = 0;

  while (timeThing2 < 6000) { //I am the only child thing
    reset();
    delay(RowDuration);
    if (row == 0) {
      MeOnlyChild_1();
    }
    if (row == 1) {
      MeOnlyChild_2();
    }
    if (row == 2) {
      MeOnlyChild_3();
    }
    if (row == 3) {
      MeOnlyChild_4();
    }
    if (row == 4) {
      MeOnlyChild_5();
    }
    matrixUpdate(row);
    row++;
    if (row == 5) {
      row = 0;
    }
    timeThing2 = timeThing2 + RowDuration + 2;
    timeThing = timeThing + RowDuration + 2;
  }

  row = 0;
  timeThing2 = 0;

  while (timeThing2 < 8000) { //thomas the train
    reset();
    delay(RowDuration);
    if (row == 0) {
      Train_1();
    }
    if (row == 1) {
      Train_2();
    }
    if (row == 2) {
      Train_3();
    }
    if (row == 3) {
      Train_4();
    }
    if (row == 5) {
      Train_5();
    }
    matrixUpdate(row);
    row++;
    if (row == 5) {
      row = 0;
    }
    timeThing2 = timeThing2 + RowDuration + 2;
    timeThing = timeThing + RowDuration + 2;
  }

  row = 0;
  timeThing2 = 0;

  while (timeThing2 < 6000) { //PS6
    reset();
    delay(RowDuration);
    if (row == 0) {
      PS6_1();
    }
    if (row == 1) {
      PS6_2();
    }
    if (row == 2) {
      PS6_3();
    }
    if (row == 3) {
      PS6_4();
    }
    if (row == 4) {
      PS6_5();
    }
    matrixUpdate(row);
    row++;
    if (row == 5) {
      row = 0;
    }
    timeThing2 = timeThing2 + RowDuration + 2;
    timeThing = timeThing + RowDuration + 2;
  }

  timeThing = 0;
  timeThing2 = 0;
  row = 0;
  reset();

  //PRESENT THING
  while (timeThing2 < 10000) { //UNIS
    while (timeThing3 < 1000) {
      reset();
      delay(RowDuration);
      if (row == 0) {
        UNIS_1_1();
      }
      if (row == 1) {
        UNIS_1_2();
      }
      if (row == 2) {
        UNIS_1_3();
      }
      if (row == 3) {
        UNIS_1_4();
      }
      if (row == 4) {
        UNIS_1_5();
      }
      matrixUpdate(row);
      row++;
      if (row == 5) {
        row = 0;
      }
      timeThing3 = timeThing3 + RowDuration + 2;
      timeThing2 = timeThing2 + RowDuration + 2;
      timeThing = timeThing + RowDuration + 2;
    }

    row = 0;
    timeThing3 = 0;

    while (timeThing3 < 1000) {
      reset();
      delay(RowDuration);
      if (row == 0) {
        UNIS_2_1();
      }
      if (row == 1) {
        UNIS_2_2();
      }
      if (row == 2) {
        UNIS_2_3();
      }
      if (row == 3) {
        UNIS_2_4();
      }
      if (row == 4) {
        UNIS_2_5();
      }
      matrixUpdate(row);
      row++;
      if (row == 5) {
        row = 0;
      }
      timeThing3 = timeThing3 + RowDuration + 2;
      timeThing2 = timeThing2 + RowDuration + 2;
      timeThing = timeThing + RowDuration + 2;
    }

    row = 0;
    timeThing3 = 0;
  }

  row = 0;
  timeThing = 0;
  timeThing2 = 0;
  timeThing3 = 0;
  reset();

  while (timeThing < 8000) { // SWIMMING
    while (timeThing2 < 1000) {
      reset();
      delay(RowDuration);
      if (row == 0) {
        SWIM_1_1();
      }
      if (row == 1) {
        SWIM_1_2();
      }
      if (row == 2) {
        SWIM_1_3();
      }
      if (row == 3) {
        SWIM_1_4();
      }
      if (row == 4) {
        SWIM_1_5();
      }
      matrixUpdate(row);
      row++;
      if (row == 5) {
        row = 0;
      }
      timeThing = timeThing + RowDuration + 2;
      timeThing2 = timeThing2 + RowDuration + 2;
    }

    row = 0;
    timeThing2 = 0;

    while (timeThing2 < 1000) {
      reset();
      delay(RowDuration);
      if (row == 0) {
        SWIM_2_1();
      }
      if (row == 1) {
        SWIM_2_2();
      }
      if (row == 2) {
        SWIM_2_3();
      }
      if (row == 3) {
        SWIM_2_4();
      }
      if (row == 4) {
        SWIM_2_5();
      }
      matrixUpdate(row);
      row++;
      if (row == 5) {
        row = 0;
      }
      timeThing = timeThing + RowDuration + 2;
      timeThing2 = timeThing2 + RowDuration + 2;
    }
  }

  timeThing = 0;
  timeThing2 = 0;
  row = 0;

  //FUTURE
  while (timeThing > 90000) {
    reset();
    delay(RowDuration);
    if (row == 0) {
      STRONG_1();
    }
    if (row == 1) {
      STRONG_2();
    }
    if (row == 2) {
      STRONG_3();
    }
    if (row == 3) {
      STRONG_4();
    }
    if (row == 4) {
      STRONG_5();
    }
    matrixUpdate(row);
    row++;
    if (row == 5) {
      row = 0;
    }
    timeThing = timeThing + RowDuration + 2;
  }

  row = 0;
  timeThing = 0;
}



















