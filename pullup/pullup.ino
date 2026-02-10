const int ledpin = 13;
const int buttonPin = 2;
int buttonState = 0;

void setup() {
  pinMode(ledpin, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);
 Serial.begin(buttonState);
  if (buttonState == HIGH) {   // 버튼 눌렀을 때
    digitalWrite(ledpin, HIGH);
    
    delay(500);
  } else {
    digitalWrite(ledpin, LOW);
  }
  delay(500);
}
