/**********************************************************************************
**                                                                               **
**                           Display 7 segments                                  **
**                                                                               **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************          
const byte segA = 7; // donar nom al pin 7 de l’Arduino     
const byte segB = 6;  // donar nom al pin 6 de l’Arduino
const byte segC = 2;  // donar nom al pin 2 de l’Arduino
const byte segD = 3;  // donar nom al pin 3 de l’Arduino
const byte segE = 4;  // donar nom al pin 4 de l’Arduino
const byte segF = 9;  // donar nom al pin 9 de l’Arduino
const byte segG = 10;  // donar nom al pin 10 de l’Arduino
const byte segDP = 5; // donar nom al pin 5 de l’Arduino
//********** Setup ****************************************************************
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(segA, OUTPUT);// definir el pin 7 com una sortida
pinMode(segB, OUTPUT);// definir el pin 6 com una sortida
pinMode(segC, OUTPUT);// definir el pin 2 com una sortida
pinMode(segD, OUTPUT);// definir el pin 3 com una sortida
pinMode(segE, OUTPUT);// definir el pin 4 com una sortida
pinMode(segF, OUTPUT);// definir el pin 9 com una sortida
pinMode(segG, OUTPUT);// definir el pin 10 com una sortida
pinMode(segDP, OUTPUT);// definir el pin 5 com una sortida
}
//********** Loop *****************************************************************

void loop() {
  // put your main code here, to run repeatedly:
//lletra g
digitalWrite(segA, HIGH);//segment A high
digitalWrite(segB, HIGH);//segment B high
digitalWrite(segC, HIGH);//segment E high
digitalWrite(segD, HIGH);//segment D high
digitalWrite(segE, LOW);//segment E high
digitalWrite(segF, HIGH);//segment F high
digitalWrite(segG, HIGH);//segment G high
digitalWrite(segDP, LOW);//segment DP high
delay(1000); //segment A high
//lletra u
digitalWrite(segA, LOW);//segment A high
digitalWrite(segB, HIGH);//segment B high
digitalWrite(segC, HIGH);//segment C high
digitalWrite(segD, HIGH);//segment D high
digitalWrite(segE, HIGH);//segment E high
digitalWrite(segF, HIGH);//segment F high
digitalWrite(segG, LOW);//segment G high
digitalWrite(segDP, LOW);//segment DP high
delay(1000);
//lletra i
digitalWrite(segA, LOW);//segment A high
digitalWrite(segB, LOW);//segment B high
digitalWrite(segC, LOW);//segment C high
digitalWrite(segD, LOW);//segment D high
digitalWrite(segE, HIGH);//segment E high
digitalWrite(segF, HIGH);//segment F high
digitalWrite(segG, LOW);//segment G high
digitalWrite(segDP, LOW);//segment DP high
delay(1000);//segment A high
//lletra l
digitalWrite(segA, LOW);//segment A high
digitalWrite(segB, LOW);//segment B high
digitalWrite(segC, LOW);//segment C high
digitalWrite(segD, HIGH);//segment D high
digitalWrite(segE, HIGH);//segment E high
digitalWrite(segF, HIGH);//segment F high
digitalWrite(segG, LOW);//segment G high
digitalWrite(segDP, LOW);//segment DP high
delay(1000);//segment A high
//lletra l
digitalWrite(segA, LOW);//segment A high
digitalWrite(segB, LOW);//segment B high
digitalWrite(segC, LOW);//segment C high
digitalWrite(segD, HIGH);//segment D high
digitalWrite(segE, HIGH);//segment E high
digitalWrite(segF, HIGH);//segment F high
digitalWrite(segG, LOW);//segment G high
digitalWrite(segDP, LOW);//segment DP high
delay(1000);//segment A high
//lletra e
digitalWrite(segA, HIGH);//segment A high
digitalWrite(segB, LOW);//segment B high
digitalWrite(segC, LOW);//segment C high
digitalWrite(segD, HIGH);//segment D high
digitalWrite(segE, HIGH);//segment E high
digitalWrite(segF, HIGH);//segment F high
digitalWrite(segG, HIGH);//segment G high
digitalWrite(segDP, LOW);//segment DP high
delay(1000);//segment A high
//lletra M
digitalWrite(segA, HIGH);//segment A high
digitalWrite(segB, LOW);//segment B high
digitalWrite(segC, HIGH);//segment C high
digitalWrite(segD, LOW);//segment D high
digitalWrite(segE, HIGH);//segment E high
digitalWrite(segF, LOW);//segment F high
digitalWrite(segG, LOW);//segment G high
digitalWrite(segDP, LOW);//segment DP high
delay(1000);//segment A high
}
