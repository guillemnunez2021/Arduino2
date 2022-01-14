//**********************************************************************************
//**                                                                              **
//**                                  Sirena                                      **
//**                                                                              **
//**                                                                              **
//**********************************************************************************

//********** Includes *************************************************************

//********** Variables ************************************************************
const byte xiulet = 9;        // donar nom al pin 9 de l’Arduino
const byte pot0 = A0;         // donar nom al pin A0 de l’Arduino
int valPot0;                 // guardar valor del potenciometre  
int valPot1;
int valPot2;

//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);
  pinMode(xiulet, OUTPUT);   // definir el pin 9 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  valPot0 = analogRead(pot0);    // llegir valor potenciòmetre 
  valPot1 = valPot0 * 2;
  valPot2 = valPot0 * 8;

  tone(xiulet, 1000, valPot0);    // xiulet de durada valPot0
  delay(valPot1);              // esperar valPot0 del xiulet + valPot0 silenci
 Serial.print("1 -> ");
 Serial.println(valPot1);

  tone(xiulet, 1000, valPot0);    // xiulet de durada valPot0
  delay(valPot1);              // esperar valPot0 del xiulet + valPot0 silenci
  Serial.print("2 -> ");
  Serial.println(valPot1);

  tone(xiulet, 1000, valPot0);    // xiulet de durada valPot0
  delay(valPot1);              // esperar valPot0 del xiulet + valPot0 silenci
  Serial.print("3 -> ");
  Serial.println(valPot1);

  tone(xiulet, 1000, valPot0);    // xiulet de durada valPot0
  delay(valPot2);              // esperar valPot0 del xiulet + valPot0 silenci
  Serial.print("4 -> ");
  Serial.println(valPot2);
}

//********** Funcions *************************************************************
