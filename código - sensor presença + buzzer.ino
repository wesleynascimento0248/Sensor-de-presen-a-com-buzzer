// C++ code
//
void setup()
{
  pinMode(7, INPUT);
  Serial.begin(9600);
  pinMode(5, OUTPUT);
}

void loop()
{
  Serial.println(digitalRead(7));
  if (digitalRead(7) == 1) {
    tone(5, 123, 1000); // play tone 35 (B2 = 123 Hz)
    delay(2000); // Wait for 2000 millisecond(s)
  }
}