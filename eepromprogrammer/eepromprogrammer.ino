void setup()
{
  for (int pin = 2; pin < 10; pin++)
    pinMode(pin,  INPUT);

  pinMode(13,  OUTPUT);
  digitalWrite(13, HIGH);

  delay(1000);
 
  Serial.begin(57600);

  byte data = 0;
  for (int pin = 9; pin > 2; pin--)
    data = (data << 1) + digitalRead(pin);

  char buffer[80];
  sprintf(buffer, "%x", data);
  Serial.println(buffer);

  for (int pin = 2; pin < 10; pin++)
    pinMode(pin,  OUTPUT);

  data = 7;
  for (int pin = 2; pin < 10; pin++)
  {
    digitalWrite(pin, data & 1);
    data = data >> 1;
  }

  digitalWrite(13, LOW);
  delayMicroseconds(1);
  digitalWrite(13, HIGH);

  delay(1000);

}

void loop()
{

}
