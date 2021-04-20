/*
  Timer  example
  Autor: Deivid Leite
  Agosto de 2020
   
 */

 #ifndef Timer_h
 #define Timer_h

 #include "Arduino.h"

class Timer{
  private:
  unsigned long _tempoAtual=0;
  unsigned long _instanteAcionamento=0;

  public:
  unsigned long tempo;
  bool flag=true;
  bool tempoAtingido;
  int saida;

  Timer(unsigned long t);
  void setTimer(unsigned long t);
  bool timerOn();
  void timerOff();
  void resetTimer();
  void timerSaida(unsigned long t, int saida);
  
};



 #endif
