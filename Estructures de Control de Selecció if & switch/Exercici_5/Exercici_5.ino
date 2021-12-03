/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
float Indicador = 44;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts

{
  Serial.begin(9600);
  if (Indicador < 3.5)
  {
    Serial.println("Rang = A");
  }
  else if (Indicador < 6.5 && Indicador >= 3.5)  
  {
    Serial.println("Rang = B ");
  }
  else if (Indicador < 11.1 && Indicador >= 6.5)
  {
    Serial.println("Rang = C"); 
  }
  else if (Indicador < 17.7 && Indicador >= 11.1) 
  {
    Serial.println("Rang = D");
  }
  else if (Indicador < 38.2 && Indicador >= 17.7)
  {
    Serial.println("Rang = E");
  }
  else if (Indicador < 43.2 && Indicador >= 38.2)
  {
    Serial.println("Rang = F");
  }
  else
  {
    Serial.println("Rang = G");
}  
}
//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
  

}

//********** Funcions *************************************************************
