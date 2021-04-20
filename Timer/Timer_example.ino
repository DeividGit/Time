/*
  Timer  example
  Autor: Deivid Leite
  Agosto de 2020
   
 */
 #include <Timer.h>

Timer *t1;
Timer *t2;
Timer *t3;

void setup(){
  Serial.begin(115200);
 t1= new Timer(3000);
 t2= new Timer(5000);
 t3= new Timer(3000);
 pinMode(LED_BUILTIN,OUTPUT);
 digitalWrite(LED_BUILTIN,LOW);
  }

void loop(){

if(t1->timerOn()){
digitalWrite(LED_BUILTIN,LOW);
 Serial.println("true"); 
 t1->setTimer(200);
 delay(1000);
}else{
Serial.println("Contando");
  digitalWrite(LED_BUILTIN,HIGH);
   
}
}
