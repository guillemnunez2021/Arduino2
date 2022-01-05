        
const byte segA = 7;     
const byte segB = 6; 
const byte segC = 2; 
const byte segD = 3; 
const byte segE = 4; 
const byte segF = 9; 
const byte segG = 10; 
const byte segDP = 5; 
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(segA, OUTPUT);
pinMode(segB, OUTPUT);
pinMode(segC, OUTPUT);
pinMode(segD, OUTPUT);
pinMode(segE, OUTPUT);
pinMode(segF, OUTPUT);
pinMode(segG, OUTPUT);
pinMode(segDP, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//lletra g
digitalWrite(segA, HIGH);
digitalWrite(segB, HIGH);
digitalWrite(segC, HIGH);
digitalWrite(segD, HIGH);
digitalWrite(segE, LOW);
digitalWrite(segF, HIGH);
digitalWrite(segG, HIGH);
digitalWrite(segDP, LOW);
delay(1000); 
//lletra u
digitalWrite(segA, LOW);
digitalWrite(segB, HIGH);
digitalWrite(segC, HIGH);
digitalWrite(segD, HIGH);
digitalWrite(segE, HIGH);
digitalWrite(segF, HIGH);
digitalWrite(segG, LOW);
digitalWrite(segDP, LOW);
delay(1000);
//lletra i
digitalWrite(segA, LOW);
digitalWrite(segB, LOW);
digitalWrite(segC, LOW);
digitalWrite(segD, LOW);
digitalWrite(segE, HIGH);
digitalWrite(segF, HIGH);
digitalWrite(segG, LOW);
digitalWrite(segDP, LOW);
delay(1000);
//lletra l
digitalWrite(segA, LOW);
digitalWrite(segB, LOW);
digitalWrite(segC, LOW);
digitalWrite(segD, HIGH);
digitalWrite(segE, HIGH);
digitalWrite(segF, HIGH);
digitalWrite(segG, LOW);
digitalWrite(segDP, LOW);
delay(1000);
//lletra l
digitalWrite(segA, LOW);
digitalWrite(segB, LOW);
digitalWrite(segC, LOW);
digitalWrite(segD, HIGH);
digitalWrite(segE, HIGH);
digitalWrite(segF, HIGH);
digitalWrite(segG, LOW);
digitalWrite(segDP, LOW);
delay(1000);
//lletra e
digitalWrite(segA, HIGH);
digitalWrite(segB, LOW);
digitalWrite(segC, LOW);
digitalWrite(segD, HIGH);
digitalWrite(segE, HIGH);
digitalWrite(segF, HIGH);
digitalWrite(segG, HIGH);
digitalWrite(segDP, LOW);
delay(1000);
//lletra M
digitalWrite(segA, HIGH);
digitalWrite(segB, LOW);
digitalWrite(segC, HIGH);
digitalWrite(segD, LOW);
digitalWrite(segE, HIGH);
digitalWrite(segF, LOW);
digitalWrite(segG, LOW);
digitalWrite(segDP, LOW);
delay(1000);
}
