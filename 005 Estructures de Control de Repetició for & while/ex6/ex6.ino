int comptar = 30;
int i = 10;
void setup()               // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  delay(2000);
  Serial.print("Ara comptare de 10 a ");
  Serial.println(comptar);  
  while(i <= comptar)
  {
    Serial.print(i);
    Serial.print("-");
    i++;
  } 
}
void loop()   // we need this to be here even though its empty
{
}
