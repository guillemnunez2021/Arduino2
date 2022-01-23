#include "SR04.h"
#define TRIG_PIN 12
#define ECHO_PIN 11
SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
long a;
const byte BLUE = 3;
const byte GREEN = 5;
const byte RED = 6;
int redValue;
int greenValue;
int blueValue;
const byte pot0 = A0;         // donar nom al pin A0 de l’Arduino

unsigned long velocitat = 100;          // velocitat de l'acció en ms
int valPot0;                 // guardar valor del potenciometre

void setup() {
   Serial.begin(9600);
   delay(1000);
   pinMode(RED, OUTPUT);
pinMode(GREEN, OUTPUT);
pinMode(BLUE, OUTPUT);
digitalWrite(RED, LOW);
digitalWrite(GREEN, LOW);
digitalWrite(BLUE, LOW);
}

void loop() {
  
  #define delayTime 10 // fading time between colors
   a=sr04.Distance();
   Serial.print(a);
   Serial.println("cm");
   delay(1000);
 
   if (a >= 0 && a < 10)
{
analogWrite(RED, 255);
analogWrite(GREEN, 0);
analogWrite(BLUE, 255); 
 delay(500);
 analogWrite(RED, 255);
analogWrite(GREEN, 0);
analogWrite(BLUE, 0); 
}
if (a >= 10 && a < 20)
{
  analogWrite(RED, 0);
analogWrite(GREEN, 255);
analogWrite(BLUE, 255); 
delay(500);
 analogWrite(RED, 0);
analogWrite(GREEN, 0);
analogWrite(BLUE, 255); 
}
if (a >= 20 && a < 30)
{
  analogWrite(RED, 255);
analogWrite(GREEN, 255);
analogWrite(BLUE, 0); 
delay(500);
 analogWrite(RED, 0);
analogWrite(GREEN, 255);
analogWrite(BLUE, 0); 

}
if(a >= 30 && a <= 134)
{
   valPot0 = analogRead(pot0);   // llegir valor del potenciòmetre
  Serial.println(valPot0);
  velocitat =  valPot0;     // actualitzar velocitat amb el valor del potenciòmetre
  analogWrite(RED, 255);
analogWrite(GREEN, 0);
analogWrite(BLUE, 255); 
 delay(velocitat);
 analogWrite(RED, 255);
analogWrite(GREEN, 0);
analogWrite(BLUE, 0); 
delay(velocitat);
 analogWrite(RED, 0);
analogWrite(GREEN, 255);
analogWrite(BLUE, 255); 
delay(velocitat);
 analogWrite(RED, 0);
analogWrite(GREEN, 0);
analogWrite(BLUE, 255);
delay(velocitat);
analogWrite(RED, 255);
analogWrite(GREEN, 255);
analogWrite(BLUE, 0); 
delay(velocitat);
 analogWrite(RED, 0);
analogWrite(GREEN, 255);
analogWrite(BLUE, 0);
delay(velocitat);  
}
}
