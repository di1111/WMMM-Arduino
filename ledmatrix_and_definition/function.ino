void matrixUpdate(int rowno) {
  if (rowno == 0) {
    Tlc.set(Ach, Aa);
    Tlc.set(Bch, Ba);
    Tlc.set(Cch, Ca);
    Tlc.set(Dch, Da);
    Tlc.set(Ech, Ea);
    Tlc.set(Fch, Fa);
    Tlc.set(Ach, Ga);
    Tlc.set(Hch, Ha);
    Tlc.set(Ich, Ia);
    Tlc.set(Jch, Ja);
    Tlc.set(10, notbright);
    Tlc.set(11, notbright);
    Tlc.set(12, notbright);
    Tlc.set(13, notbright);
    Tlc.set(14, notbright);
    Tlc.set(15, notbright);

    digitalWrite(RowOne, HIGH);   // sets RowOne (pin 8) High (not active)--> Row one OFF
    digitalWrite(RowTwo, HIGH);   // sets RowTwo (pin 7) High (not active)--> Row two OFF
    digitalWrite(RowThree, HIGH); // sets RowThree (pin 6) High (not active)--> Row three OFF
    digitalWrite(RowFour, HIGH);  // sets RowFour (pin 5) High (not active)--> Row four OFF
    digitalWrite(RowFive, HIGH);  // sets RowFive (pin 4) High (not active)--> Row five OFF
    Tlc.update();
    delay(2);
    digitalWrite(RowOne, LOW);
  }
  if (rowno == 1) {
    Tlc.set(Ach, Ab);
    Tlc.set(Bch, Bb);
    Tlc.set(Cch, Cb);
    Tlc.set(Dch, Db);
    Tlc.set(Ech, Eb);
    Tlc.set(Fch, Fb);
    Tlc.set(Ach, Gb);
    Tlc.set(Hch, Hb);
    Tlc.set(Ich, Ib);
    Tlc.set(Jch, Jb);
    Tlc.set(10, notbright);
    Tlc.set(11, notbright);
    Tlc.set(12, notbright);
    Tlc.set(13, notbright);
    Tlc.set(14, notbright);
    Tlc.set(15, notbright);

    digitalWrite(RowOne, HIGH);   // sets RowOne (pin 8) High (not active)--> Row one OFF
    digitalWrite(RowTwo, HIGH);   // sets RowTwo (pin 7) High (not active)--> Row two OFF
    digitalWrite(RowThree, HIGH); // sets RowThree (pin 6) High (not active)--> Row three OFF
    digitalWrite(RowFour, HIGH);  // sets RowFour (pin 5) High (not active)--> Row four OFF
    digitalWrite(RowFive, HIGH);  // sets RowFive (pin 4) High (not active)--> Row five OFF
    Tlc.update();
    delay(2);
    digitalWrite(RowTwo, LOW);
  }
  if (rowno == 2) {
    Tlc.set(Ach, Ac);
    Tlc.set(Bch, Bc);
    Tlc.set(Cch, Cc);
    Tlc.set(Dch, Dc);
    Tlc.set(Ech, Ec);
    Tlc.set(Fch, Fc);
    Tlc.set(Ach, Gc);
    Tlc.set(Hch, Hc);
    Tlc.set(Ich, Ic);
    Tlc.set(Jch, Jc);
    Tlc.set(10, notbright);
    Tlc.set(11, notbright);
    Tlc.set(12, notbright);
    Tlc.set(13, notbright);
    Tlc.set(14, notbright);
    Tlc.set(15, notbright);

    digitalWrite(RowOne, HIGH);   // sets RowOne (pin 8) High (not active)--> Row one OFF
    digitalWrite(RowTwo, HIGH);   // sets RowTwo (pin 7) High (not active)--> Row two OFF
    digitalWrite(RowThree, HIGH); // sets RowThree (pin 6) High (not active)--> Row three OFF
    digitalWrite(RowFour, HIGH);  // sets RowFour (pin 5) High (not active)--> Row four OFF
    digitalWrite(RowFive, HIGH);  // sets RowFive (pin 4) High (not active)--> Row five OFF
    Tlc.update();
    delay(2);
    digitalWrite(RowThree, LOW);
  }
  if (rowno == 3) {
    Tlc.set(Ach, Ad);
    Tlc.set(Bch, Bd);
    Tlc.set(Cch, Cd);
    Tlc.set(Dch, Dd);
    Tlc.set(Ech, Ed);
    Tlc.set(Fch, Fd);
    Tlc.set(Ach, Gd);
    Tlc.set(Hch, Hd);
    Tlc.set(Ich, Id);
    Tlc.set(Jch, Jd);
    Tlc.set(10, notbright);
    Tlc.set(11, notbright);
    Tlc.set(12, notbright);
    Tlc.set(13, notbright);
    Tlc.set(14, notbright);
    Tlc.set(15, notbright);

    digitalWrite(RowOne, HIGH);   // sets RowOne (pin 8) High (not active)--> Row one OFF
    digitalWrite(RowTwo, HIGH);   // sets RowTwo (pin 7) High (not active)--> Row two OFF
    digitalWrite(RowThree, HIGH); // sets RowThree (pin 6) High (not active)--> Row three OFF
    digitalWrite(RowFour, HIGH);  // sets RowFour (pin 5) High (not active)--> Row four OFF
    digitalWrite(RowFive, HIGH);  // sets RowFive (pin 4) High (not active)--> Row five OFF
    Tlc.update();
    delay(2);
    digitalWrite(RowFour, LOW);
  }
  if (rowno == 4) {
    Tlc.set(Ach, Ae);
    Tlc.set(Bch, Be);
    Tlc.set(Cch, Ce);
    Tlc.set(Dch, De);
    Tlc.set(Ech, Ee);
    Tlc.set(Fch, Fe);
    Tlc.set(Ach, Ge);
    Tlc.set(Hch, He);
    Tlc.set(Ich, Ie);
    Tlc.set(Jch, Je);
    Tlc.set(10, notbright);
    Tlc.set(11, notbright);
    Tlc.set(12, notbright);
    Tlc.set(13, notbright);
    Tlc.set(14, notbright);
    Tlc.set(15, notbright);

    digitalWrite(RowOne, HIGH);   // sets RowOne (pin 8) High (not active)--> Row one OFF
    digitalWrite(RowTwo, HIGH);   // sets RowTwo (pin 7) High (not active)--> Row two OFF
    digitalWrite(RowThree, HIGH); // sets RowThree (pin 6) High (not active)--> Row three OFF
    digitalWrite(RowFour, HIGH);  // sets RowFour (pin 5) High (not active)--> Row four OFF
    digitalWrite(RowFive, HIGH);  // sets RowFive (pin 4) High (not active)--> Row five OFF
    Tlc.update();
    delay(2);
    digitalWrite(RowFive, LOW);
  }
}

//Spells 'Me'
void Me_5() {
  Ae = bright;
  Ee = bright;
  Ge = bright;
  He = bright;
  Ie = bright;
  Je = bright;
}
void Me_4() {
  Ad = bright;
  Bd = bright;
  Dd = bright;
  Ed = bright;
  Gd = bright;
}
void Me_3() {
  Ac = bright;
  Cc = bright;
  Ec = bright;
  Gc = bright;
  Hc = bright;
  Ic = bright;
  Jc = bright;
}
void Me_2() {
  Ab = bright;
  Eb = bright;
  Gb = bright;
}
void Me_1() {
  Aa = bright;
  Ea = bright;
  Ga = bright;
  Ha = bright;
  Ia = bright;
  Ja = bright;
}

//Spells '2004'
void Me2004_1_5() {
  Be = bright;
  Ce = bright;
  Ge = bright;
  He = bright;
}
void Me2004_1_4() {
  Ad = bright;
  Dd = bright;
  Fd = bright;
  Id = bright;
}
void Me2004_1_3() {
  Cc = bright;
  Fc = bright;
  Ic = bright;
}
void Me2004_1_2() {
  Ab = bright;
  Bb = bright;
  Fb = bright;
  Ib = bright;
}
void Me2004_1_1() {
  Aa = bright;
  Ba = bright;
  Ca = bright;
  Da = bright;
  Ga = bright;
  Ha = bright;
}

void Me2004_2_5() {
  Be = bright;
  Ce = bright;
  Ge = bright;
  He = bright;
}
void Me2004_2_4() {
  Ad = bright;
  Dd = bright;
  Fd = bright;
  Id = bright;
}
void Me2004_2_3() {
  Ac = bright;
  Dc = bright;
  Fc = bright;
  Ic = bright;
}
void Me2004_2_2() {
  Ab = bright;
  Db = bright;
  Fb = bright;
  Ib = bright;
}
void Me2004_2_1() {
  Ba = bright;
  Ca = bright;
  Ga = bright;
  Ha = bright;
}

void Me2004_3_5() {
  Be = bright;
  Ce = bright;
  Fe = bright;
  He = bright;
}
void Me2004_3_4() {
  Ad = bright;
  Dd = bright;
  Fd = bright;
  Hd = bright;
}
void Me2004_3_3() {
  Ac = bright;
  Dc = bright;
  Fc = bright;
  Gc = bright;
  Hc = bright;
  Ic = bright;
}
void Me2004_3_2() {
  Ab = bright;
  Db = bright;
  Hb = bright;
}
void Me2004_3_1() {
  Ba = bright;
  Ca = bright;
  Ha = bright;
}

void Me2004_4_5() {
  Ae = bright;
  Ce = bright;
  He = bright;
  Ie = bright;
}
void Me2004_4_4() {
  Ad = bright;
  Cd = bright;
  Gd = bright;
  Jd = bright;
}
void Me2004_4_3() {
  Ac = bright;
  Bc = bright;
  Cc = bright;
  Dc = bright;
  Ic = bright;
}
void Me2004_4_2() {
  Cb = bright;
  Gb = bright;
  Hb = bright;
}
void Me2004_4_1() {
  Ca = bright;
  Ga = bright;
  Ha = bright;
  Ia = bright;
  Ja = bright;
}

void MeOnlyChild_5() {
  Ce = bright;
  Ge = bright;
  He = bright;
  Ie = bright;
  Je = bright;
}
void MeOnlyChild_4() {
  Ad = bright;
  Cd = bright;
  Ed = bright;
  Gd = bright;
}
void MeOnlyChild_3() {
  Bc = bright;
  Cc = bright;
  Dc = bright;
  Gc = bright;
  Hc = bright;
  Ic = bright;
  Jc = bright;
}
void MeOnlyChild_2() {
  Cb = bright;
  Fb = bright;
  Jb = bright;
}
void MeOnlyChild_1() {
  Ba = bright;
  Da = bright;
  Ga = bright;
  Ha = bright;
  Ia = bright;
}

void Train_5() {
  De = bright;
  Ee = bright;
  Ge = bright;
}
void Train_4() {
  Ad = bright;
  Bd = bright;
  Cd = bright;
  Dd = bright;
  Ed = bright;
  Fd = bright;
  Gd = bright;
  Hd = bright;
  Id = bright;
  Jd = bright;
}
void Train_3() {
  Bc = bright;
  Cc = bright;
  Dc = bright;
  Ec = bright;
  Fc = bright;
  Gc = bright;
  Hc = bright;
  Ic = bright;
  Jc = bright;
}
void Train_2() {
  Ab = bright;
  Bb = bright;
  Cb = bright;
  Db = bright;
  Eb = bright;
  Fb = bright;
  Gb = bright;
  Hb = bright;
  Ib = bright;
  Jb = bright;
}
void Train_1() {
  Da = bright;
  Ga = bright;
}

void PS6_5() {
  Ae = bright;
  Be = bright;
  Ce = bright;
  De = bright;
  Ee = bright;
  Fe = bright;
  He = bright;
  Ie = bright;
  Je = bright;
}
void PS6_4() {
  Ad = bright;
  Cd = bright;
  Dd = bright;
  Hd = bright;
}
void PS6_3() {
  Ac = bright;
  Bc = bright;
  Cc = bright;
  Dc = bright;
  Ec = bright;
  Fc = bright;
  Hc = bright;
  Ic = bright;
  Jc = bright;
}
void PS6_2() {
  Ab = bright;
  Fb = bright;
  Hb = bright;
  Jb = bright;
}
void PS6_1() {
  Aa = bright;
  Da = bright;
  Ea = bright;
  Fa = bright;
  Ha = bright;
  Ia = bright;
  Ja = bright;
}

void UNIS_1_5() {
  Ae = bright;
  De = bright;
  Fe = bright;
  Je = bright;
}
void UNIS_1_4() {
  Ad = bright;
  Dd = bright;
  Fd = bright;
  Gd = bright;
  Jd = bright;
}
void UNIS_1_3() {
  Ac = bright;
  Dc = bright;
  Fc = bright;
  Hc = bright;
  Jc = bright;
}
void UNIS_1_2() {
  Ab = bright;
  Db = bright;
  Fb = bright;
  Ib = bright;
  Jb = bright;
}
void UNIS_1_1() {
  Ba = bright;
  Ca = bright;
  Fa = bright;
  Ja = bright;
}

void UNIS_2_5() {
  Ae = bright;
  Be = bright;
  Ce = bright;
  De = bright;
  Ee = bright;
  He = bright;
  Ie = bright;
  Je = bright;
}
void UNIS_2_4() {
  Cd = bright;
  Gd = bright;
}
void UNIS_2_3() {
  Cc = bright;
  Hc = bright;
  Ic = bright;
  Jc = bright;
}
void UNIS_2_2() {
  Cb = bright;
  Jb = bright;
} void UNIS_2_1() {
  Aa = bright;
  Ba = bright;
  Ca = bright;
  Da = bright;
  Ea = bright;
  Ga = bright;
  Ha = bright;
  Ia = bright;
}

void SWIM_1_5() {
  Be = bright;
  Ce = bright;
  De = bright;
  Fe = bright;
  Je = bright;
}
void SWIM_1_4() {
  Ad = bright;
  Fd = bright;
  Jd = bright;
}
void SWIM_1_3() {
  Bc = bright;
  Cc = bright;
  Fc = bright;
  Hc = bright;
  Jc = bright;
}
void SWIM_1_2() {
  Db = bright;
  Fb = bright;
  Hb = bright;
  Jb = bright;
}
void SWIM_1_1() {
  Aa = bright;
  Ba = bright;
  Ca = bright;
  Fa = bright;
  Ga = bright;
  Ia = bright;
  Ja = bright;
}

void SWIM_2_5() {
  Be = bright;
  Ce = bright;
  De = bright;
  Fe = bright;
  Ge = bright;
  Ie = bright;
  Je = bright;
}
void SWIM_2_4() {
  Cd = bright;
  Fd = bright;
  Hd = bright;
  Jd = bright;
}
void SWIM_2_3() {
  Cc = bright;
  Fc = bright;
  Jc = bright;
}
void SWIM_2_2() {
  Cb = bright;
  Fb = bright;
  Jb = bright;
}
void SWIM_2_1() {
  Ba = bright;
  Ca = bright;
  Da = bright;
  Fa = bright;
  Ja = bright;
}

void STRONG_5() {
  Fe = bright;
}
void STRONG_4() {
  Ad = bright;
  Fd = bright;
  Jd = bright;
}
void STRONG_3() {
  Ac = bright;
  Cc = 500;
  Ec = bright;
  Fc = bright;
  Gc = bright;
  Ic = 400;
  Jc = bright;
}
void STRONG_2() {
  Bb = bright;
  Cb = bright;
  Db = bright;
  Eb = bright;
  Fb = bright;
  Gb = bright;
  Hb = bright;
  Ib = bright;
  Jb = bright;
}
void STRONG_1() {
  Ca = 250;
  Ea = bright;
  Fa = bright;
  Ga = bright;
  Ia = 250;
}

void reset() {                // we set all LEDs to 0 brightness
  Aa = 0;
  Ba = 0;
  Ca = 0;
  Da = 0;
  Ea = 0;
  Fa = 0;
  Ga = 0;
  Ha = 0;
  Ia = 0;
  Ja = 0;

  Ab = 0;
  Bb = 0;
  Cb = 0;
  Db = 0;
  Eb = 0;
  Fb = 0;
  Gb = 0;
  Hb = 0;
  Ib = 0;
  Jb = 0;

  Ac = 0;
  Bc = 0;
  Cc = 0;
  Dc = 0;
  Ec = 0;
  Fc = 0;
  Gc = 0;
  Hc = 0;
  Ic = 0;
  Jc = 0;

  Ad = 0;
  Bd = 0;
  Cd = 0;
  Dd = 0;
  Ed = 0;
  Fd = 0;
  Gd = 0;
  Hd = 0;
  Id = 0;
  Jd = 0;

  Ae = 0;
  Be = 0;
  Ce = 0;
  De = 0;
  Ee = 0;
  Fe = 0;
  Ge = 0;
  He = 0;
  Ie = 0;
  Je = 0;
}
