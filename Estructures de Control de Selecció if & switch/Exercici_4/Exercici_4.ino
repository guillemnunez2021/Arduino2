/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int tempAigua = 89;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
Serial.begin(9600);     // set up Serial library at 9600 bps
if (tempAigua < 90)
{
Serial.print("Aigua encara no bull");
}
else if (tempAigua >= 90 && tempAigua <= 99)  
{
Serial.print("Aigua apunt de bullir");
}
else if (tempAigua == 100)
{
Serial.print("Aigua a 100ºc"); 
}
else  

Serial.print("Aigua bullint");
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
  

}

//********** Funcions *************************************************************
