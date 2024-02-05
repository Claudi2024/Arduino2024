/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**   05/02/2024                                          Claudi Gil              **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int sensorReading = 10;

//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);
  Serial.print("The day is "); 
   
  switch (sensorReading) {
  case 0:    
    Serial.println("dark");
    break;
  case 1:    
    Serial.println("dim");
    break;
  case 2:    
    Serial.println("medium");
    break;
  case 3:
    Serial.println("bright");
    break;
  default:
    Serial.println("... I don't know!!!");
  } 
}

//********** Loop *****************************************************************
void loop()  
{
}

//********** Funcions *************************************************************