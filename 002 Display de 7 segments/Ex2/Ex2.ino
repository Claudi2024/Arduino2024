/**********************************************************************************
**                                                                               **
**                           Display de 7 segments                               **
**                                                                               **
**                                                                               **
**********************************************************************************/


//********** Includes *************************************************************


//********** Variables ************************************************************
const byte segH = 5;          // donar nom al pin 5 de l’Arduino
const byte segB = 6;          // donar nom al pin 6 de l’Arduino
const byte segA = 7;          // donar nom al pin 7 de l’Arduino
const byte segC = 8;          // donar nom al pin 8 de l’Arduino
const byte segD = 9;          // donar nom al pin 9 de l’Arduino
const byte segG = 10;         // donar nom al pin 10 de l’Arduino
const byte segF = 11;         // donar nom al pin 11 de l’Arduino
const byte segE = 12;         // donar nom al pin 12 de l’Arduino
//********** Setup ****************************************************************
void setup()
{
  pinMode(segH, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(segB, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(segA, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(segC, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(segD, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(segG, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(segF, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(segE, OUTPUT);     // definir el pin 12 com una sortida

 digitalWrite(segE,HIGH);
 digitalWrite(segD,HIGH);
 digitalWrite(segB,HIGH);
 digitalWrite(segH,HIGH);
 digitalWrite(segA,HIGH);
 digitalWrite(segC,HIGH);
 digitalWrite(segG,HIGH);
 digitalWrite(segF,HIGH);

 delay(500);
}
void loop()
{
 digitalWrite(segE,LOW);
 digitalWrite(segD,HIGH);
 digitalWrite(segB,LOW);
 digitalWrite(segH,HIGH);
 digitalWrite(segA,LOW);
 digitalWrite(segC,LOW);
 digitalWrite(segG,LOW);
 digitalWrite(segF,LOW);
 
 delay(700);

 digitalWrite(segE,HIGH);
 digitalWrite(segD,HIGH);
 digitalWrite(segB,HIGH);
 digitalWrite(segH,HIGH);
 digitalWrite(segA,HIGH);
 digitalWrite(segC,LOW);
 digitalWrite(segG,LOW);
 digitalWrite(segF,HIGH);

 delay(700);

 digitalWrite(segE,LOW);
 digitalWrite(segD,LOW);
 digitalWrite(segB,HIGH);
 digitalWrite(segH,HIGH);
 digitalWrite(segA,LOW);
 digitalWrite(segC,LOW);
 digitalWrite(segG,HIGH);
 digitalWrite(segF,LOW);

 delay(700);

 digitalWrite(segE,LOW);
 digitalWrite(segD,LOW);
 digitalWrite(segB,LOW);
 digitalWrite(segH,HIGH);
 digitalWrite(segA,LOW);
 digitalWrite(segC,HIGH);
 digitalWrite(segG,HIGH);
 digitalWrite(segF,LOW);

 delay(700);

 digitalWrite(segE,LOW);
 digitalWrite(segD,LOW);
 digitalWrite(segB,LOW);
 digitalWrite(segH,HIGH);
 digitalWrite(segA,HIGH);
 digitalWrite(segC,HIGH);
 digitalWrite(segG,LOW);
 digitalWrite(segF,HIGH);

 delay(700);

 digitalWrite(segE,HIGH);
 digitalWrite(segD,LOW);
 digitalWrite(segB,LOW);
 digitalWrite(segH,HIGH);
 digitalWrite(segA,LOW);
 digitalWrite(segC,HIGH);
 digitalWrite(segG,LOW);
 digitalWrite(segF,LOW);

 delay(700);

 digitalWrite(segE,HIGH);
 digitalWrite(segD,LOW);
 digitalWrite(segB,LOW);
 digitalWrite(segH,HIGH);
 digitalWrite(segA,LOW);
 digitalWrite(segC,LOW);
 digitalWrite(segG,LOW);
 digitalWrite(segF,HIGH);

 delay(700);

 digitalWrite(segE,LOW);
 digitalWrite(segD,HIGH);
 digitalWrite(segB,LOW);
 digitalWrite(segH,HIGH);
 digitalWrite(segA,HIGH);
 digitalWrite(segC,HIGH);
 digitalWrite(segG,HIGH);
 digitalWrite(segF,LOW);

 delay(700);

 digitalWrite(segE,LOW);
 digitalWrite(segD,LOW);
 digitalWrite(segB,LOW);
 digitalWrite(segH,HIGH);
 digitalWrite(segA,LOW);
 digitalWrite(segC,LOW);
 digitalWrite(segG,LOW);
 digitalWrite(segF,LOW);

 delay(700);

 digitalWrite(segE,LOW);
 digitalWrite(segD,LOW);
 digitalWrite(segB,LOW);
 digitalWrite(segH,HIGH);
 digitalWrite(segA,HIGH);
 digitalWrite(segC,HIGH);
 digitalWrite(segG,LOW);
 digitalWrite(segF,LOW);

 delay(700);

}
