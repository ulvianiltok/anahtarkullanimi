void setup()
{
pinMode(2, OUTPUT); pinMode(3, OUTPUT);
pinMode(4, INPUT); pinMode(5, INPUT);
}
void loop()
{
if (digitalRead(4)==1)
 { digitalWrite(2, 1);
 }
else digitalWrite(2, 0);
if (digitalRead(5)==1)
 { digitalWrite(3, 1);
 }
else digitalWrite(3, 0);
}
