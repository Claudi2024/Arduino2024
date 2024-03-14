/**********************************************************************************
**                                 Examen                                        **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const byte led0 = 3;                    // donar nom al pin 3 de l’Arduino
const byte led1 = 5;                    // donar nom al pin 5 de l’Arduino
const byte led2 = 6;                    // donar nom al pin 6 de l’Arduino
const byte led3 = 9;                    // donar nom al pin 9 de l’Arduino
const byte led4 = 10;                   // donar nom al pin 10 de l’Arduino
const byte pot0 = A0;                   // donar nom al pin A0 de l’Arduino
int valPot0;
int valorEntrada;

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 10 com una sortida

}
//********** Loop *****************************************************************
void loop()
{
valorEntrada = analogRead(A0);
float voltage;
voltage = valorEntrada * (5.0 / 1023.0);

 if (voltage<0.1)
 {
  analogWrite(led0, 0);     // posar PWM del pin 3 a 60
  analogWrite(led1, 0);     // posar PWM del pin 5 a 60
  analogWrite(led2, 0);     // posar PWM del pin 6 a 60
  analogWrite(led3, 0);     // posar PWM del pin 9 a 60
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
 }
 else if (voltage <1)
 {
  analogWrite(led0, 255);     // posar PWM del pin 3 a 60
  analogWrite(led1, 0);     // posar PWM del pin 5 a 60
  analogWrite(led2, 0);     // posar PWM del pin 6 a 60
  analogWrite(led3, 0);     // posar PWM del pin 9 a 60
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
 }
  else if (voltage <2)
 {
  analogWrite(led0, 255);     // posar PWM del pin 3 a 60
  analogWrite(led1, 255);     // posar PWM del pin 5 a 60
  analogWrite(led2, 0);     // posar PWM del pin 6 a 60
  analogWrite(led3, 0);     // posar PWM del pin 9 a 60
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
 } 
  else if (voltage <3)
 {
  analogWrite(led0, 255);     // posar PWM del pin 3 a 60
  analogWrite(led1, 255);     // posar PWM del pin 5 a 60
  analogWrite(led2, 255);     // posar PWM del pin 6 a 60
  analogWrite(led3, 0);     // posar PWM del pin 9 a 60
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
 } 
  else if (voltage <4)
 {
  analogWrite(led0, 255);     // posar PWM del pin 3 a 60
  analogWrite(led1, 255);     // posar PWM del pin 5 a 60
  analogWrite(led2, 255);     // posar PWM del pin 6 a 60
  analogWrite(led3, 255);     // posar PWM del pin 9 a 60
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
 } 
  else if (voltage <=5)
 {
  analogWrite(led0, 255);     // posar PWM del pin 3 a 60
  analogWrite(led1, 255);     // posar PWM del pin 5 a 60
  analogWrite(led2, 255);     // posar PWM del pin 6 a 60
  analogWrite(led3, 255);     // posar PWM del pin 9 a 60
  analogWrite(led4, 255);     // posar PWM del pin 10 a 60
 } 
}





