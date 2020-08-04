byte tombol= 2;
byte led1= 13;
byte led2= 12;
byte led3= 11;
int nilai;
void setup(){ 
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(tombol, INPUT); 
}   
void loop(){ 
  nilai= digitalRead(tombol); 
  
  if(nilai == 1){ 
    digitalWrite(led1, HIGH); 
    digitalWrite(led2, HIGH); 
    digitalWrite(led3, HIGH); 
  }   else{ 
    digitalWrite(led1, LOW); 
    digitalWrite(led2, LOW); 
    digitalWrite(led3, LOW); 
  } 
} 
