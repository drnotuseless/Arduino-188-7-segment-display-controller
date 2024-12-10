// Define LED pin names
const int P1 = 2;
const int P2 = 3;
const int P3 = 4;
const int P4 = 5;
const int P5 = 6;

int count = 1;

void setup() {
  pinMode(P1, INPUT);
  pinMode(P2, INPUT);
  pinMode(P3, INPUT);
  pinMode(P4, INPUT);
  pinMode(P5, INPUT);

  digitalWrite(P1, LOW);
  digitalWrite(P2, LOW);
  digitalWrite(P3, LOW);
  digitalWrite(P4, LOW);
  digitalWrite(P5, LOW);
  Serial.begin(9600);
}

void loop() {
  Serial.println(count);
  count += 1;

  if (count < 250) {
    StrHE();
  } else if (count < 500) {
    InAll();
    StrLL();

  } else if (count < 750) {
    InAll();
    StrO();
  } else if (count < 1000){
    count = 0;
  }
}

void StrHE() {
  // displays HE on the dig 2 and 3
  SGB2();
  SGC2();
  SGG2();
  SGF2();
  SGE2();

  SGE3();
  SGF3();
  SGA3();
  SGG3();
  SGD3();
}

void StrLL() {
  // displays LL on the dig 2 and 3
  SGF2();
  SGE2();
  SGD2();

  SGF3();
  SGE3();
  SGD3();
}

void StrO() {
  // displays O on the dig 3
  SGF3();
  SGE3();
  SGD3();
  SGA3();
  SGC3();
  SGB3();
}



void InAll() {
  pinMode(P1, INPUT);
  pinMode(P2, INPUT);
  pinMode(P3, INPUT);
  pinMode(P4, INPUT);
  pinMode(P5, INPUT);
}

void OutAll() {
  pinMode(P1, OUTPUT);
  pinMode(P2, OUTPUT);
  pinMode(P3, OUTPUT);
  pinMode(P4, OUTPUT);
  pinMode(P5, OUTPUT);
}
// segment control
void SGB1() {
  pinMode(P3, OUTPUT);
  pinMode(P4, OUTPUT);
  digitalWrite(P3, HIGH);  // LED on pin 4 (P3) ON
  digitalWrite(P4, LOW);   // LED on pin 3 (P2) ON

  InAll();
}

void SGC1() {
  pinMode(P2, OUTPUT);
  pinMode(P4, OUTPUT);
  digitalWrite(P2, HIGH);  // LED on pin 4 (P3) ON
  digitalWrite(P4, LOW);   // LED on pin 3 (P2) ON

  InAll();
}


void SGA2() {
  pinMode(P2, OUTPUT);
  pinMode(P3, OUTPUT);
  digitalWrite(P2, HIGH);  // LED on pin 4 (P3) ON
  digitalWrite(P3, LOW);   // LED on pin 3 (P2) ON
}

void SGB2() {
  pinMode(P2, OUTPUT);
  pinMode(P3, OUTPUT);
  digitalWrite(P3, HIGH);  // LED on pin 4 (P3) ON
  digitalWrite(P2, LOW);   // LED on pin 3 (P2) ON

  InAll();
}

void SGC2() {
  pinMode(P4, OUTPUT);
  pinMode(P3, OUTPUT);
  digitalWrite(P4, HIGH);  // LED on pin 4 (P3) ON
  digitalWrite(P3, LOW);   // LED on pin 3 (P2) ON

  InAll();
}

void SGD2() {
  pinMode(P4, OUTPUT);
  pinMode(P2, OUTPUT);
  digitalWrite(P4, HIGH);  // LED on pin 4 (P3) ON
  digitalWrite(P2, LOW);   // LED on pin 3 (P2) ON

  InAll();
}

void SGE2() {
  pinMode(P5, OUTPUT);
  pinMode(P2, OUTPUT);
  digitalWrite(P5, HIGH);  // LED on pin 4 (P3) ON
  digitalWrite(P2, LOW);   // LED on pin 3 (P2) ON

  InAll();
}

void SGF2() {
  pinMode(P5, OUTPUT);
  pinMode(P3, OUTPUT);
  digitalWrite(P5, HIGH);  // LED on pin 4 (P3) ON
  digitalWrite(P3, LOW);   // LED on pin 3 (P2) ON

  InAll();
}

void SGG2() {
  pinMode(P5, OUTPUT);
  pinMode(P4, OUTPUT);
  digitalWrite(P5, HIGH);  // LED on pin 4 (P3) ON
  digitalWrite(P4, LOW);   // LED on pin 3 (P2) ON

  InAll();
}

void SGA3() {
  pinMode(P1, OUTPUT);
  pinMode(P2, OUTPUT);
  digitalWrite(P1, HIGH);  // LED on pin 4 (P3) ON
  digitalWrite(P2, LOW);   // LED on pin 3 (P2) ON

  InAll();
}

void SGB3() {
  pinMode(P2, OUTPUT);
  pinMode(P1, OUTPUT);
  digitalWrite(P2, HIGH);  // LED on pin 4 (P3) ON
  digitalWrite(P1, LOW);   // LED on pin 3 (P2) ON

  InAll();
}

void SGC3() {
  pinMode(P3, OUTPUT);
  pinMode(P1, OUTPUT);
  digitalWrite(P1, HIGH);  // LED on pin 4 (P3) ON
  digitalWrite(P3, LOW);   // LED on pin 3 (P2) ON

  InAll();
}

void SGD3() {
  pinMode(P3, OUTPUT);
  pinMode(P1, OUTPUT);
  digitalWrite(P3, HIGH);  // LED on pin 4 (P3) ON
  digitalWrite(P1, LOW);   // LED on pin 3 (P2) ON

  InAll();
}

void SGE3() {
  pinMode(P4, OUTPUT);
  pinMode(P1, OUTPUT);
  digitalWrite(P1, HIGH);  // LED on pin 4 (P3) ON
  digitalWrite(P4, LOW);   // LED on pin 3 (P2) ON

  InAll();
}

void SGF3() {
  pinMode(P4, OUTPUT);
  pinMode(P1, OUTPUT);
  digitalWrite(P4, HIGH);  // LED on pin 4 (P3) ON
  digitalWrite(P1, LOW);   // LED on pin 3 (P2) ON

  InAll();
}

void SGG3() {
  pinMode(P5, OUTPUT);
  pinMode(P1, OUTPUT);
  digitalWrite(P5, HIGH);  // LED on pin 4 (P3) ON
  digitalWrite(P1, LOW);   // LED on pin 3 (P2) ON

  InAll();
}