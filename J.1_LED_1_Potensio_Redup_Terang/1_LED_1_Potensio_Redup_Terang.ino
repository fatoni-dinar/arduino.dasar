byte sensor= A0;
byte led= 9; 
 int nilai; int output; 
 
void setup(){   
  pinMode(led, OUTPUT); 
  Serial.begin(9600); 
}  
void loop(){ 
  nilai= analogRead(sensor); 
  output= map(nilai, 0, 1023, 0, 255); 
 
  analogWrite(led, output); 
 
  Serial.println("sensor: "); 
  Serial.print(nilai); 
  Serial.print("  "); 
  Serial.print("output: "); 
  Serial.print(output); 
 
  delay(2); 
} 
