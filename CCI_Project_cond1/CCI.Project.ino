#define LED_PIN 13
#define BUTTON_PIN 2
#define LED_PIN2 4


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


void response() {
  int value = analogRead(A0);

  if (value > 10) {
    digitalWrite(LED_PIN2, HIGH);
  } else {
    digitalWrite(LED_PIN2, LOW);
  }
  
}




void loop() {
  control();
  response(); 
}