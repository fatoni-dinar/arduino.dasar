void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  Serial.println ("LAMPU HIDUP");
  digitalWrite(9, HIGH);
  Serial.println ("LAMPU HIDUP");
  delay(1000);
  digitalWrite(13, LOW);
  Serial.println ("LAMU MATI");
  digitalWrite(9, LOW);
  Serial.println ("LAMPU MATI");
  delay(1000);

  digitalWrite(12, HIGH);
  Serial.println ("LAMPU HIDUP");
  digitalWrite(10, HIGH);
  Serial.println ("LAMPU HIDUP");
  delay(1000);
  digitalWrite(12, LOW);
  Serial.println ("LAMU MATI");
  digitalWrite(10, LOW);
  Serial.println ("LAMPU MATI");
  delay(1000);

  digitalWrite(13, HIGH);
  Serial.println ("LAMPU HIDUP");
  digitalWrite(11, HIGH);
  Serial.println ("LAMPU HIDUP");
  digitalWrite(9, HIGH);
  Serial.println ("LAMPU HIDUP");
  delay(1000);
  digitalWrite(13, LOW);
  Serial.println ("LAMU MATI");
  digitalWrite(11, LOW);
  Serial.println ("LAMPU MATI");
  digitalWrite(9, LOW);
  Serial.println ("LAMPU MATI");
  delay(1000);

}
