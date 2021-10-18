int X = 0;
void setup() {
 Serial.begin(96000);
}

void loop() {
  // put your main code here, to run repeatedly:
  int giaTri = analogRead(A0);
  int nhietdo = map(giaTri, 20, 358, -40, 125);
  if (nhietdo>37) digitalWrite(10,HIGH);
  else digitalWrite(10,LOW);
}
