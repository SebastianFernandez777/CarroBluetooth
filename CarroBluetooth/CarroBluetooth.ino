#include "BiblioMovimientos.h"
BiblioMovimientos coche(6,9,10,11);

int tiempo=0;
void setup() {
  // inicializar la comunicación serial a 9600 bits por segundo:
  Serial.begin(9600);

}

void loop() {

  if (Serial.available()) {
     char dato= Serial.read();
     if(dato=='a')
     {
        coche.Mover_Adelante();
        tiempo=0;
     }
     else if(dato=='r')
     { 
        coche.Mover_Retroceso();
        tiempo=0;
     }
     else if(dato=='d')
     { 
        coche.Mover_Derecha();
        tiempo=0;
     }
     else if(dato=='i')
     { 
        coche.Mover_Izquierda();
        tiempo=0;
     }   
   
  }

  if(tiempo<200) // 100 cilcos de 1ms 
  {    
    tiempo=tiempo+1;
  }
  else   //ya transcurrió 100ms (100ciclos)
  {
    coche.Mover_Stop();
  }
  
  delay(1); //pasusa de 1ms por ciclo
  
}

