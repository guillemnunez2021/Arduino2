/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const byte led0 = 5;          // donar nom al pin 5 de l’Arduino
const byte led1 = 6;          // donar nom al pin 6 de l’Arduino
const byte led2 = 7;          // donar nom al pin 7 de l’Arduino
const byte led3 = 8;          // donar nom al pin 8 de l’Arduino
const byte led4 = 9;          // donar nom al pin 9 de l’Arduino
const byte led5 = 10;         // donar nom al pin 10 de l’Arduino
const byte led6 = 11;         // donar nom al pin 11 de l’Arduino
const byte led7 = 12;         // donar nom al pin 12 de l’Arduino

//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led6, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(led7, OUTPUT);     // definir el pin 12 com una sortida
 digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats
  //1
 digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats
  //2
   digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats
  //3
   digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats
  //4
   digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats
  //5
   digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats
  //6
   digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats
  //7
   digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats
  //8
   digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats
  //9
   digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats
  //10
   digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats
  //11
   digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats
  //12
   digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats
  //13
   digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats
  //14
   digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats
  //15
    digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats
  //16
 digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats
  //17
   digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats
  //18
   digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats
  //19
   digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats
  //20
   digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats
  //21
   digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats
  //22
   digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats
  //23
   digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats
  //24
   digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats
  //25
   digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats
  //26
   digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats
  //27
   digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats
  //28
   digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats
  //29
   digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats
  //30
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  digitalWrite(led1, LOW);     // posar a 0V el pin 6
  digitalWrite(led2, LOW);     // posar a 0V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, LOW);     // posar a 0V el pin 9
  digitalWrite(led5, LOW);     // posar a 0V el pin 10
  digitalWrite(led6, LOW);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
}

//********** Loop *****************************************************************
void loop()
{
 

}
















//********** Funcions *************************************************************
