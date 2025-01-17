#define ledPin 4
#define potentiometerPin A1

void setup()
{
  pinMode(ledPin, OUTPUT);
  
}

void loop()
{
  int potentiometerValue = analogRead(potentiometerPin);
  int brightness = potentiometerValue / 4;
  analogWrite(ledPin, brightness);
}
