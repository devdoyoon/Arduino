const int ledpin = 13;
const int buttonPin = 2;
int buttonState = 0;

void setup() {
  pinMode(ledpin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {   // 버튼 눌렀을 때
    digitalWrite(ledpin, HIGH);
    delay(500);
  } else {
    digitalWrite(ledpin, LOW);
  }
  delay(500);
}
