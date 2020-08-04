byte sensor= A0;
byte led= 13;
int nilai; 
  
void setup(){ 
pinMode(led, OUTPUT); 
}   
void loop(){ 
nilai= analogRead(sensor); 
  
digitalWrite(led, HIGH);
delay(nilai);
digitalWrite(led, LOW);
delay(nilai); 
} 
