void setup() {
  Serial.begin(9600);
  pinMode(10, OUTPUT); // pin 13 5v
  }

void loop() { //Mengulang coding kalian 
  digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
  Serial.println ("LAMPU HIDUP");
  delay(1000);  //Waktu Tunda                     // wait for a second
  digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW
  Serial.println ("LAMPU MATI");
  delay(1000);  //Waktu tunda                     // wait for a second
}
