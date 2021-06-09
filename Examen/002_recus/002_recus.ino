/**********************************************************************************
**                                                                               **
**                                   Recus                                       **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int Vin = A0;         // donar nom al pin A0 de l’Arduino
const int V2 = A1;         // donar nom al pin A1 de l’Arduino


int entrada;
int R1;
int R2=10000;
int VR2;
float VR1;
float voltatge1;
float voltatge2;

//********** Setup ****************************************************************
void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);
}

//********** Loop *****************************************************************
void loop()   // run over and over again
{
 
  delay(1000);
  
  entrada = analogRead(Vin);
  voltatge1 = (entrada * 5.0) / 1023.0;
  Serial.println(voltatge1);

  delay(1000);
  
  VR2 = analogRead(V2);
  voltatge2 = (VR2 * 5.0) / 1023.0;
  Serial.println(voltatge2);
  
  delay(1000); 

  VR1 = voltatge1 - voltatge2;
  Serial.println(VR1);

  delay(1000);

  R1=(R2*voltatge1/voltatge2)-R2;
  Serial.println(R1);

   delay(4000); 
}

//********** Funcions *************************************************************
