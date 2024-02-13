/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**  05/02/2024                                                  Claudi Gil       **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int tempAigua = 101;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);
  delay(2000);
  
  if (tempAigua < 90)
  {
    Serial.print("Aigua encara no bull");
  }
  else if (tempAigua >= 90 && tempAigua < 100)
  {
    Serial.print("Aigua apunt de bullir");
  }
  else if (tempAigua == 100)
  {
    Serial.print("Aigua a 100ºC");
  }
  else if (tempAigua > 100)
  {
    Serial.print("Aigua bullint");
  }
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though it's empty
{
  //
}

//********** Funcions **************************************************************
