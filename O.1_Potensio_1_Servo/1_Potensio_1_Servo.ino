#include <Servo.h> 
Servo servoku; 
  
int pot= A0; int nilaipot; 
  
void setup(){ servoku.attach(3); 
}   
void loop(){ 
nilaipot= analogRead(pot); 
nilaipot= map(nilaipot, 0, 1023, 10, 180);
servoku.write(nilaipot); 
} 
