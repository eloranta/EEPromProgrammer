void setup()
 {
  Serial.begin(57600);

  for (int pin = 2; pin < 10; pin++)
    pinMode(pin, OUTPUT);

  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);

  delay(1000);

  digitalWrite(13, LOW);
  delayMicroseconds(1);
  digitalWrite(13, HIGH);

/*
  for (int pin = 9; pin > 1; pin--)
    Serial.print(digitalRead(pin));
digitalWrite(WRITE_ENABLE, LOW);
  delayMicroseconds(1);
  digitalWrite(WRITE_ENABLE, HIGH);

  Serial.println();
*/
}

void loop()
{
 
}
