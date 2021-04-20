/*
  Timer  example
  Autor: Deivid Leite
  Agosto de 2020
   
 */

 #include "Arduino.h"
 #include "Timer.h"

 Timer::Timer(unsigned long t){
  tempo= t;
}
 void Timer::setTimer(unsigned long t){
  tempo= t;
}
bool Timer::timerOn(){
    if(flag==true){
      tempoAtingido=false;
      _instanteAcionamento = millis();
    }
    flag=false;
    _tempoAtual=millis();
    if (_tempoAtual - _instanteAcionamento >= tempo&& flag==false) {
      tempoAtingido=true;
      flag=true; 
    } 
    return tempoAtingido;
}
void Timer::timerOff(){
  tempoAtingido=false; 
}
void Timer::resetTimer(){
   tempoAtingido=false; 
   _tempoAtual=0;
   _instanteAcionamento=0;
   flag=true;
}
