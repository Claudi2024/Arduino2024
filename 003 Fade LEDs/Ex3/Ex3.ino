/**********************************************************************************
**                                                                               **
**                              Fade LEDs                                        **
**                                                                               **
**   27/02/2024                                          Claudi Gil              **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const byte led0 = 3;          // donar nom al pin 3 de l’Arduino
const byte led1 = 5;          // donar nom al pin 5 de l’Arduino
const byte led2 = 6;          // donar nom al pin 6 de l’Arduino
const byte led3 = 9;          // donar nom al pin 9 de l’Arduino
const byte led4 = 10;         // donar nom al pin 10 de l’Arduino
const byte led5 = 11;         // donar nom al pin 11 de l’Arduino
unsigned long velocitat = 50;         // velocitat de l'acció en ms
int buttonPin = 2;

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 11 com una sortida
}


//********** Loop *****************************************************************
void loop()
{
  if (digitalRead(buttonPin) == 0)
{
  analogWrite(led0, 0);     // posar PWM del pin 3 a 0
  analogWrite(led1, 0);     // posar PWM del pin 5 a 0
  analogWrite(led2, 0);     // posar PWM del pin 6 a 0
  analogWrite(led3, 0);     // posar PWM del pin 9 a 0
  analogWrite(led4, 0);     // posar PWM del pin 10 a 0
  analogWrite(led5, 0);     // posar PWM del pin 11 a 0
  
  delay(4*velocitat);          // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 60);     // posar PWM del pin 3 a 60
  analogWrite(led1, 60);     // posar PWM del pin 5 a 60
  analogWrite(led2, 60);     // posar PWM del pin 6 a 60
  analogWrite(led3, 60);     // posar PWM del pin 9 a 60
  analogWrite(led4, 60);     // posar PWM del pin 10 a 60
  analogWrite(led5, 60);     // posar PWM del pin 11 a 60
  
  delay(4*velocitat);          // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 125);    // posar PWM del pin 3 a 125
  analogWrite(led1, 125);    // posar PWM del pin 5 a 125
  analogWrite(led2, 125);    // posar PWM del pin 6 a 125
  analogWrite(led3, 125);    // posar PWM del pin 9 a 125
  analogWrite(led4, 125);    // posar PWM del pin 10 a 125
  analogWrite(led5, 125);    // posar PWM del pin 11 a 125
  
  delay(4*velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 255);    // posar PWM del pin 3 a 255
  analogWrite(led1, 255);    // posar PWM del pin 5 a 255
  analogWrite(led2, 255);    // posar PWM del pin 6 a 255
  analogWrite(led3, 255);    // posar PWM del pin 9 a 255
  analogWrite(led4, 255);    // posar PWM del pin 10 a 255
  analogWrite(led5, 255);    // posar PWM del pin 11 a 255
   
  delay(4*velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 125);    // posar PWM del pin 3 a 125
  analogWrite(led1, 125);    // posar PWM del pin 5 a 125
  analogWrite(led2, 125);    // posar PWM del pin 6 a 125
  analogWrite(led3, 125);    // posar PWM del pin 9 a 125
  analogWrite(led4, 125);    // posar PWM del pin 10 a 125
  analogWrite(led5, 125);    // posar PWM del pin 11 a 125
  
  delay(4*velocitat);           // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 60);     // posar PWM del pin 3 a 60
  analogWrite(led1, 60);     // posar PWM del pin 5 a 60
  analogWrite(led2, 60);     // posar PWM del pin 6 a 60
  analogWrite(led3, 60);     // posar PWM del pin 9 a 60
  analogWrite(led4, 60);     // posar PWM del pin 10 a 60
  analogWrite(led5, 60);     // posar PWM del pin 11 a 60
  
  delay(4*velocitat);          // es queden leds velocitat ms en aquest estat
}
  else 
{
  analogWrite(led0, 0);     // posar PWM del pin 3 a 0
  analogWrite(led1, 0);     // posar PWM del pin 5 a 0
  analogWrite(led2, 0);     // posar PWM del pin 6 a 0
  analogWrite(led3, 0);     // posar PWM del pin 9 a 0
  analogWrite(led4, 0);     // posar PWM del pin 10 a 0
  analogWrite(led5, 255);     // posar PWM del pin 11 a 0
  
  delay(velocitat);         // 1 // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 0);     // posar PWM del pin 3 a 60
  analogWrite(led1, 0);     // posar PWM del pin 5 a 60
  analogWrite(led2, 0);     // posar PWM del pin 6 a 60
  analogWrite(led3, 0);     // posar PWM del pin 9 a 60
  analogWrite(led4, 255);     // posar PWM del pin 10 a 60
  analogWrite(led5, 125);     // posar PWM del pin 11 a 60
  
  delay(velocitat);          // 2 // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 0);    // posar PWM del pin 3 a 125
  analogWrite(led1, 0);    // posar PWM del pin 5 a 125
  analogWrite(led2, 0);    // posar PWM del pin 6 a 125
  analogWrite(led3, 255);    // posar PWM del pin 9 a 125
  analogWrite(led4, 125);    // posar PWM del pin 10 a 125
  analogWrite(led5, 60);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // 3 // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 0);    // posar PWM del pin 3 a 255
  analogWrite(led1, 0);    // posar PWM del pin 6 a 255
  analogWrite(led2, 255);    // posar PWM del pin 6 a 125
  analogWrite(led3, 125);    // posar PWM del pin 9 a 255
  analogWrite(led4, 60);    // posar PWM del pin 10 a 255
  analogWrite(led5, 0);    // posar PWM del pin 11 a 255
   
  delay(velocitat);           // 4 // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 0);    // posar PWM del pin 3 a 125
  analogWrite(led1, 255);    // posar PWM del pin 5 a 125
  analogWrite(led2, 125);    // posar PWM del pin 6 a 125
  analogWrite(led3, 60);    // posar PWM del pin 9 a 125
  analogWrite(led4, 0);    // posar PWM del pin 10 a 125
  analogWrite(led5, 0);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // 5 // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 255);     // posar PWM del pin 3 a 0
  analogWrite(led1, 125);     // posar PWM del pin 5 a 0
  analogWrite(led2, 60);     // posar PWM del pin 6 a 0
  analogWrite(led3, 0);     // posar PWM del pin 9 a 0
  analogWrite(led4, 0);     // posar PWM del pin 10 a 0
  analogWrite(led5, 0);     // posar PWM del pin 11 a 0
  
  delay(velocitat);          // 6 // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 125);     // posar PWM del pin 3 a 60
  analogWrite(led1, 60);     // posar PWM del pin 5 a 60
  analogWrite(led2, 0);     // posar PWM del pin 6 a 60
  analogWrite(led3, 0);     // posar PWM del pin 9 a 60
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
  analogWrite(led5, 0);     // posar PWM del pin 11 a 60
  
  delay(velocitat);          // 7 // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 60);    // posar PWM del pin 3 a 125
  analogWrite(led1, 0);    // posar PWM del pin 5 a 125
  analogWrite(led2, 0);    // posar PWM del pin 6 a 125
  analogWrite(led3, 0);    // posar PWM del pin 9 a 125
  analogWrite(led4, 0);    // posar PWM del pin 10 a 125
  analogWrite(led5, 0);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // 8 // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 0);    // posar PWM del pin 3 a 255
  analogWrite(led1, 0);    // posar PWM del pin 6 a 255
  analogWrite(led3, 0);    // posar PWM del pin 9 a 255
  analogWrite(led4, 0);    // posar PWM del pin 10 a 255
  analogWrite(led5, 0);    // posar PWM del pin 11 a 255
   
  delay(velocitat);           // 9 // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 0);    // posar PWM del pin 3 a 125
  analogWrite(led1, 0);    // posar PWM del pin 5 a 125
  analogWrite(led2, 0);    // posar PWM del pin 6 a 125
  analogWrite(led3, 0);    // posar PWM del pin 9 a 125
  analogWrite(led4, 0);    // posar PWM del pin 10 a 125
  analogWrite(led5, 0);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // 10 // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 255);     // posar PWM del pin 3 a 60
  analogWrite(led1, 0);     // posar PWM del pin 5 a 60
  analogWrite(led2, 0);     // posar PWM del pin 6 a 60
  analogWrite(led3, 0);     // posar PWM del pin 9 a 60
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
  analogWrite(led5, 0);     // posar PWM del pin 11 a 60
  
  delay(velocitat);          // 11 // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 125);     // posar PWM del pin 3 a 0
  analogWrite(led1, 255);     // posar PWM del pin 5 a 0
  analogWrite(led2, 0);     // posar PWM del pin 6 a 0
  analogWrite(led3, 0);     // posar PWM del pin 9 a 0
  analogWrite(led4, 0);     // posar PWM del pin 10 a 0
  analogWrite(led5, 0);     // posar PWM del pin 11 a 0
  
  delay(velocitat);         // 12 // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 60);     // posar PWM del pin 3 a 60
  analogWrite(led1, 125);     // posar PWM del pin 5 a 60
  analogWrite(led2, 255);     // posar PWM del pin 6 a 60
  analogWrite(led3, 0);     // posar PWM del pin 9 a 60
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
  analogWrite(led5, 0);     // posar PWM del pin 11 a 60
  
  delay(velocitat);          // 13 // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 0);    // posar PWM del pin 3 a 125
  analogWrite(led1, 60);    // posar PWM del pin 5 a 125
  analogWrite(led2, 125);    // posar PWM del pin 6 a 125
  analogWrite(led3, 255);    // posar PWM del pin 9 a 125
  analogWrite(led4, 0);    // posar PWM del pin 10 a 125
  analogWrite(led5, 0);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // 14 // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 0);    // posar PWM del pin 3 a 255
  analogWrite(led1, 0);
  analogWrite(led2, 60);    // posar PWM del pin 6 a 255
  analogWrite(led3, 125);    // posar PWM del pin 9 a 255
  analogWrite(led4, 255);    // posar PWM del pin 10 a 255
  analogWrite(led5, 0);    // posar PWM del pin 11 a 255
   
  delay(velocitat);           // 15 // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 0);    // posar PWM del pin 3 a 125
  analogWrite(led1, 0);    // posar PWM del pin 5 a 125
  analogWrite(led2, 0);    // posar PWM del pin 6 a 125
  analogWrite(led3, 60);    // posar PWM del pin 9 a 125
  analogWrite(led4, 125);    // posar PWM del pin 10 a 125
  analogWrite(led5, 255);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // 16 // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 0);     // posar PWM del pin 3 a 0
  analogWrite(led1, 0);     // posar PWM del pin 5 a 0
  analogWrite(led2, 0);     // posar PWM del pin 6 a 0
  analogWrite(led3, 0);     // posar PWM del pin 9 a 0
  analogWrite(led4, 60);     // posar PWM del pin 10 a 0
  analogWrite(led5, 125);     // posar PWM del pin 11 a 0
  
  delay(velocitat);          // 17 // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 0);     // posar PWM del pin 3 a 60
  analogWrite(led1, 0);     // posar PWM del pin 5 a 60
  analogWrite(led2, 0);     // posar PWM del pin 6 a 60
  analogWrite(led3, 0);     // posar PWM del pin 9 a 60
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
  analogWrite(led5, 60);     // posar PWM del pin 11 a 60
  
  delay(velocitat);          // 18 // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 0);    // posar PWM del pin 3 a 125
  analogWrite(led1, 0);    // posar PWM del pin 5 a 125
  analogWrite(led2, 0);    // posar PWM del pin 6 a 125
  analogWrite(led3, 0);    // posar PWM del pin 9 a 125
  analogWrite(led4, 0);    // posar PWM del pin 10 a 125
  analogWrite(led5, 0);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // 19 // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 0);    // posar PWM del pin 3 a 255
  analogWrite(led1, 0);    // posar PWM del pin 6 a 255
  analogWrite(led3, 0);    // posar PWM del pin 9 a 255
  analogWrite(led4, 0);    // posar PWM del pin 10 a 255
  analogWrite(led5, 0);    // posar PWM del pin 11 a 255
   
  delay(velocitat);           // 20 // es queden leds velocitat ms en aquest estat
}
 }
//********** Funcions *************************************************************
