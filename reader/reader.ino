void setup()
 {
  Serial.begin(57600);

  for (int pin = 2; pin < 10; pin++)
    pinMode(pin, INPUT);

  delay(1000);

  for (int pin = 9; pin > 1; pin--)
    Serial.print(digitalRead(pin));

  Serial.println();
}

void loop()
{
 
}
