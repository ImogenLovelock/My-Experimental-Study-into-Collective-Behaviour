#define LED_PIN 13
#define BUTTON_PIN 2
#define LED_PIN2 4
#define POTENTIOMETER_PIN A1


void setup() {
  
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN2, OUTPUT);
  Serial.begin(9600);
}

void control() {
  
  if (digitalRead(BUTTON_PIN) == LOW) {
    digitalWrite(LED_PIN, HIGH);
  } 
  else {
    digitalWrite(LED_PIN, LOW);
  }
}


void response1() {
  int value = analogRead(A0);

  if (value > 10) {
    digitalWrite(LED_PIN2, HIGH);
  } else {
    digitalWrite(LED_PIN2, LOW);
  }
  
}


void response2() {
  int potentiometerValue = analogRead(POTENTIOMETER_PIN);
  int brightness = potentiometerValue / 4;
  analogWrite(LED_PIN2, brightness);
}



void loop() {
  control();
  response1(); 
  response2();
}