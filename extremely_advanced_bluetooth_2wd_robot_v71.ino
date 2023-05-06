void setup()
{
  for (byte i=0;i<4;i++)pinMode(i,1);
  Serial.begin(9600);
}

void loop()
{
  char x=(Serial.available()>0)?Serial.read():0;
  for (byte i=0;i<4;i++)digitalWrite(i+2,x&1<<i);
}  
