       
const byte segA = 7;     
const byte segB = 6; 
const byte segC = 4; 
const byte segD = 2; 
const byte segE = 3; 
const byte segF = 9; 
const byte segG = 10; 
const byte segDP = 5; 
const byte boto1 = 11;
boolean m = 0;
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
//lletra 0
butonState = digitalRead(m);

if (buttonState == 0)
{
digitalWrite(segA, HIGH);
digitalWrite(segB, HIGH);
digitalWrite(segC, HIGH);
digitalWrite(segD, HIGH);
digitalWrite(segE, HIGH);
digitalWrite(segF, HIGH);
digitalWrite(segG, LOW);
digitalWrite(segDP, LOW);
delay(1000);
buttonState = m + 1;
} 
//lletra 1
else if (buttonState == 1)
digitalWrite(segA, LOW);
digitalWrite(segB, HIGH);
digitalWrite(segC, HIGH);
digitalWrite(segD, LOW);
digitalWrite(segE, LOW);
digitalWrite(segF, LOW);
digitalWrite(segG, LOW);
digitalWrite(segDP, LOW);
delay(1000);
buttonState = m + 1;
//lletra 2
digitalWrite(segA, HIGH);
digitalWrite(segB, HIGH);
digitalWrite(segC, LOW);
digitalWrite(segD, HIGH);
digitalWrite(segE, HIGH);
digitalWrite(segF, LOW);
digitalWrite(segG, HIGH);
digitalWrite(segDP, LOW);
delay(1000);
buttonState = m + 1;
//lletra 3
digitalWrite(segA, HIGH);
digitalWrite(segB, HIGH);
digitalWrite(segC, HIGH);
digitalWrite(segD, HIGH);
digitalWrite(segE, LOW);
digitalWrite(segF, LOW);
digitalWrite(segG, HIGH);
digitalWrite(segDP, LOW);
delay(1000);
buttonState = m + 1;
//lletra 4
digitalWrite(segA, LOW);
digitalWrite(segB, HIGH);
digitalWrite(segC, HIGH);
digitalWrite(segD, LOW);
digitalWrite(segE, LOW);
digitalWrite(segF, HIGH);
digitalWrite(segG, HIGH);
digitalWrite(segDP, LOW);
delay(1000);
buttonState = m + 1;
//lletra 5
digitalWrite(segA, HIGH);
digitalWrite(segB, LOW);
digitalWrite(segC, HIGH);
digitalWrite(segD, HIGH);
digitalWrite(segE, LOW);
digitalWrite(segF, HIGH);
digitalWrite(segG, HIGH);
digitalWrite(segDP, LOW);
delay(1000);
buttonState = m + 1;
//lletra 6
digitalWrite(segA, LOW);
digitalWrite(segB, LOW);
digitalWrite(segC, HIGH);
digitalWrite(segD, HIGH);
digitalWrite(segE, HIGH);
digitalWrite(segF, HIGH);
digitalWrite(segG, HIGH);
digitalWrite(segDP, LOW);
delay(1000);
buttonState = m + 1;
//lletra 7
else if(buttonSate == 7)
{
digitalWrite(segA, HIGH);
digitalWrite(segB, HIGH);
digitalWrite(segC, HIGH);
digitalWrite(segD, LOW);
digitalWrite(segE, LOW);
digitalWrite(segF, LOW);
digitalWrite(segG, LOW);
digitalWrite(segDP, LOW);
delay(1000);
buttonState = m + 1;
}
//lletra 8
else if(buttonState == 8)
{
digitalWrite(segA, HIGH);
digitalWrite(segB, HIGH);
digitalWrite(segC, HIGH);
digitalWrite(segD, HIGH);
digitalWrite(segE, HIGH);
digitalWrite(segF, HIGH);
digitalWrite(segG, HIGH);
digitalWrite(segDP, LOW);
delay(1000);
buttonState = m + 1;
}
//lletra 9
else if (buttonState == 9)
{
digitalWrite(segA, HIGH);
digitalWrite(segB, HIGH);
digitalWrite(segC, HIGH);
digitalWrite(segD, HIGH);
digitalWrite(segE, LOW);
digitalWrite(segF, HIGH);
digitalWrite(segG, HIGH);
digitalWrite(segDP, LOW);
delay(1000); 
buttonState = m + 1;
}
else{
  digitalWrite(segA, LOW);
digitalWrite(segB, LOW);
digitalWrite(segC, LOW);
digitalWrite(segD, LOW);
digitalWrite(segE, LOW);
digitalWrite(segF, LOW);
digitalWrite(segG, LOW);
digitalWrite(segDP, LOW);
delay(1000);
m = 0
}
}
