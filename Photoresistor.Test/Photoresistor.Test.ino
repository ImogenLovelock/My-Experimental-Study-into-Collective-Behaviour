#define LED_PIN2 4

void setup() {
  
  pinMode(LED_PIN2, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  
  int value = analogRead(A0);

  if(value > 10) {
    digitalWrite(LED_PIN2, HIGH);
  } else {
    digitalWrite(LED_PIN2, LOW);
  }
}
