void setup()
{
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);

  shiftOut(10, 11, MSBFIRST, 0xff);   
 	digitalWrite(12, HIGH);
  delay(1000);
	digitalWrite(12, LOW);		
}

void loop()
{
 
}
