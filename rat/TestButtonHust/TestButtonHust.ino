#define gas A2
#define brk A1
#define gear A0

#define L1 4
#define L2 A6
#define L3 A7

#define R1 A5
#define R2 A4
#define R3 A3

#define B1 9 
#define B2 5
#define B3 7
#define B4 6

void setup() {
  pinMode(gas, INPUT);
  pinMode(brk, INPUT);
  pinMode(gear, INPUT);

  pinMode(L1, INPUT);
  pinMode(L2, INPUT);
  pinMode(L3, INPUT);

  pinMode(R1, INPUT);
  pinMode(R2, INPUT);
  pinMode(R3, INPUT);

  pinMode(B1, INPUT);
  pinMode(B2, INPUT);
  pinMode(B3, INPUT);
  pinMode(B4, INPUT);
  Serial.begin(9600);
  Serial.println("Beginning input tests");
}

void loop() {
  Serial.print("   L1:"); 
  Serial.print(digitalRead(L1)); 
  Serial.print("   L2:");
  Serial.print(digitalRead(L2));
  Serial.print("   L3:");
  Serial.print(digitalRead(L3));

  Serial.print("   R1:");
  Serial.print(digitalRead(R1));
  Serial.print("   R2:");
  Serial.print(digitalRead(R2));
  Serial.print("   R3:");
  Serial.print(digitalRead(R3));

  Serial.print("   B1:");
  Serial.print(digitalRead(B1));
  Serial.print("   B2:");
  Serial.print(digitalRead(B2));
  Serial.print("   B3:");
  Serial.print(digitalRead(B3));
  Serial.print("   B4:");
  Serial.print(digitalRead(B4));

  Serial.print("   Gas:");
  Serial.print(analogRead(gas));
  Serial.print("   Break:");
  Serial.print(analogRead(brk));

  Serial.print("   Gear:");
  Serial.print(analogRead(gear));
  Serial.println();
  delay(20);

}
