
void setup()
{
    pinMode(0, OUTPUT);
    pinMode(1, OUTPUT);
    pinMode(2, OUTPUT);
}

void loop()
{
  digitalWrite(0, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(0, LOW);
  digitalWrite(1, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(2, LOW);
}
