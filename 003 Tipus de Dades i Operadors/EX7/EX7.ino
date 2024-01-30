/**********************************************************************************
**                                                                               **
**                              Math Is Fun                                      **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int drive_gb = 100;
int drive_mb = 0;

//********** Setup ****************************************************************
void setup()             // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = 1024 * drive_gb;

  Serial.print("It can store ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");
}

//********** Loop *****************************************************************
void loop()     // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
