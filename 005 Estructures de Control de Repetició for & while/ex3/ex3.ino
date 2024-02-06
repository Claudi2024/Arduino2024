/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
** 05/02/2024                                                    Claudi Gil      **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int num = 20;

//********** Setup ****************************************************************
void setup()      // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  delay(2000);
  Serial.println("Ara faré el compte enrere per l'explosió:");
  for (int i=0; i <= 20; i++)
  {
    delay(1000);
    Serial.println(num);
    num = num - 1;  
  }
  Serial.println(" B  O  O  O  M !!! "); 
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
