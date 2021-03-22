
/****************************************************************
 **                        TITOL                               **
 **                        Plantilla                           **
 **                                                            **
 ** Sebas Demera                                    08/03/2021 **
 ***************************************************************/
//************************ INCLUDE ******************************

//*********************** VARIABLES *****************************

//************************* SETUP *******************************

int comptar = 18;

void setup() {              // configura el final de salida
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);
  for (int i=0; i <= comptar; i++)
  if (i==comptar)
  {
    Serial.print(i);
  } 
  else
  {
    Serial.print(i);
    Serial.print("-");
  } 
  
}
void loop()     // we need this to be here even though its empty
{
}


//************************** LOOP *******************************

void loop() {               // inicia el bucle del programa

}

//************************ FUNCIONS ***************************** 
