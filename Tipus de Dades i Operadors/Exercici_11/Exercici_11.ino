/**********************************************************************************
**                                                                               **
**                               Math Is Fun                                     **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int drive_gb = 100;
long drive_mb, drive_kb, real_drive_mb, real_drive_kb, missing_drive_kb;

//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);
  
  Serial.print("Your HD is");
  Serial.print(drive_gb);
  Serial.println("GB large");
  drive_mb = drive_gb;
  drive_mb = 1024 * drive_mb;
  Serial.print("In theory,");
 Serial.print("it can store");
 Serial.print(drive_mb);
 Serial.print("Megabytes,");
 drive_kb = drive_mb* pow(1024,2);
 Serial.println("Kilobytes.")
 
}

//********** Loop *****************************************************************
void loop()
{
}

//********** Funcions *************************************************************
 
