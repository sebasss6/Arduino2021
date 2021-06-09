/**********************************************************************************
**                                                                               **
**                             Velocitat de 8 LEDs                               **
**                                                                               **
**                                                                               **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const int led0 = 3;          // donar nom al pin 5 de l’Arduino
const int led1 = 5;          // donar nom al pin 6 de l’Arduino
const int led2 = 6;          // donar nom al pin 7 de l’Arduino
const int led3 = 9;          // donar nom al pin 8 de l’Arduino
const int led4 = 10;          // donar nom al pin 9 de l’Arduino
const int pot0 = A0;         // donar nom al pin A0 de l’Arduino

int entrada = 0;          
int valPot0;                 // guardar valor del potenciometre
float voltatge;
//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 9 com una sortida
  
  Serial.begin(9600);
}

//********** Loop *****************************************************************
void loop()
{
  entrada = analogRead(pot0);   // llegir valor del potenciòmetre
  valPot0 = analogRead(pot0);
  
  float voltatge;
  voltatge = entrada * (5.0 / 1023.0);
  Serial.println(voltatge);
 
  if (voltatge >0 && voltatge <1)
  {
  analogWrite(led0,valPot0  );    // posar a 5V el pin 5
  digitalWrite(led1, LOW);    // posar a 5V el pin 6
  digitalWrite(led2, LOW);    // posar a 5V el pin 7
  digitalWrite(led3, LOW);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9
  }
  if(voltatge >=1 && voltatge <2)
  {
  analogWrite(led1,valPot0-204.6);     // posar a 0V el pin 6
  digitalWrite(led2, LOW);     // posar a 0V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, LOW);     // posar a 0V el pin 9
  }
  if(voltatge >=2 && voltatge <3)
  {
  analogWrite(led2, valPot0-409.2);     // posar a 0V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, LOW);     // posar a 0V el pin 9
  }
  if(voltatge >=3 && voltatge <4)
  {
  analogWrite(led3, valPot0-613.8);     // posar a 0V el pin 8
  digitalWrite(led4, LOW);     // posar a 0V el pin 9
  }
  if(voltatge >=4 && voltatge <5)
  {
 
  analogWrite(led4, valPot0-818.4);     // posar a 0V el pin 9 
  }
}
//********** Funcions *************************************************************
