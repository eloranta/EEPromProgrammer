void setup()
{
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);

  int address = 0x7ff;
  byte lsb = address & 0x07;
  byte msb = address >> 3;
  shiftOut(10, 11, MSBFIRST, lsb);   
  shiftOut(10, 11, MSBFIRST, msb);   
 	digitalWrite(12, HIGH);
  delay(1000);
	digitalWrite(12, LOW);		
}

void loop()
{
 
}
