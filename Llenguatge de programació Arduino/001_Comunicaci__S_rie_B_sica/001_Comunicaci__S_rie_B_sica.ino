
/****************************************************************
 **                        Comunicacio                         **
 **                        Basica                              **
 **                                                            **
 ** Sebas Demera                                    08/03/2021 **
 ***************************************************************/
//************************ INCLUDE ******************************

//*********************** VARIABLES *****************************

//************************* SETUP *******************************


void setup()              
{
  Serial.begin(9600);  
   Serial.println("Escull el numero de l'operacio que vols realitzar");  // prints Escull el numero de l'operacio que vols realitzar
   Serial.println("1. Comprovar numero de tarjeta de credit");  // prints 1. Comprovar numero de tarjeta de credit
   Serial.println("2. Comprovar numero de compte bancari");  // prints 2. Comprovar numero de compte bancari
   Serial.println("3. Buscar un digit perdut de tarjeta de credit");  // prints 3. Buscar un digit perdut de tarjeta de credit
}

//********** Loop *****************************************************************
void loop()                     
{
 
}

//************************ FUNCIONS ***************************** 
