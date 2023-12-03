// C++ code
//
void setup()
{
  for (int i=2;i<8;i++)
  pinMode(i, OUTPUT);
}

void loop()
{
  for (int i=2;i<8;i++)
  {
  digitalWrite(i,1);
  delay(300);
  }
  for (int i=8;i>2;i--)
  {
  digitalWrite(i,0);
  delay(200);
  }
}