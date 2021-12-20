int comptar = 5;
void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  
 
  for (int i=0; i <= comptar; i++)
  {
    Serial.print(i);
   if ( i < (comptar-1))
   {
    Serial.print("-");
  } 
}
}
void loop()     // we need this to be here even though its empty
{
}
