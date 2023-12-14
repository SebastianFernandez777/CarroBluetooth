#ifndef BiblioMovimientos_h
#define BiblioMovimientos_h
#include "Arduino.h"

// La librería se crea como una clase denominada ObjetoLibreria
class BiblioMovimientos {
  // Atributos
  private:
  int Pin_Motor_Der_A;
  int Pin_Motor_Der_B;
  int Pin_Motor_Izq_A;
  int Pin_Motor_Izq_B; 

  // Métodos
  public:
    BiblioMovimientos (int Pin_Motor_Der_A,int Pin_Motor_Der_B, int Pin_Motor_Izq_A, int Pin_Motor_Izq_B);
    void Mover_Adelante();
    void Mover_Retroceso();
    void Mover_Derecha();
    void Mover_Izquierda();
    void Mover_Stop();

};

#endif