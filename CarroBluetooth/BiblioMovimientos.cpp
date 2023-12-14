#include "Arduino.h"
#include "BiblioMovimientos.h"
BiblioMovimientos::BiblioMovimientos(int x,int y, int z, int w){
    Pin_Motor_Der_A = x;
    Pin_Motor_Der_B = y;
    Pin_Motor_Izq_A = z;
    Pin_Motor_Izq_B = w; 
    // configuramos los pines como salida
    pinMode(Pin_Motor_Der_A, OUTPUT);
    pinMode(Pin_Motor_Der_B, OUTPUT);
    pinMode(Pin_Motor_Izq_A, OUTPUT);
    pinMode(Pin_Motor_Izq_B, OUTPUT);
}

void BiblioMovimientos::Mover_Adelante()
{
  analogWrite (Pin_Motor_Der_A,100);
  analogWrite (Pin_Motor_Der_B,0);
  analogWrite (Pin_Motor_Izq_A,0 );
  analogWrite (Pin_Motor_Izq_B,100);
}
void BiblioMovimientos::Mover_Retroceso()
{
  analogWrite (Pin_Motor_Der_A,0 );
  analogWrite (Pin_Motor_Der_B,100 );
  analogWrite (Pin_Motor_Izq_A,100);
  analogWrite (Pin_Motor_Izq_B,0);

}
void BiblioMovimientos::Mover_Derecha()
{
  analogWrite (Pin_Motor_Der_A,0 );
  analogWrite (Pin_Motor_Der_B,100 );
  analogWrite (Pin_Motor_Izq_A,0 );
  analogWrite (Pin_Motor_Izq_B,100 );
}
void BiblioMovimientos::Mover_Izquierda()
{
  analogWrite (Pin_Motor_Der_A, 100);
  analogWrite (Pin_Motor_Der_B, 0);
  analogWrite (Pin_Motor_Izq_A, 100);
  analogWrite (Pin_Motor_Izq_B, 0);
}
void BiblioMovimientos::Mover_Stop()
{
  analogWrite (Pin_Motor_Der_A, 0);
  analogWrite (Pin_Motor_Der_B, 0);
  analogWrite (Pin_Motor_Izq_A, 0);
  analogWrite (Pin_Motor_Izq_B, 0);
}