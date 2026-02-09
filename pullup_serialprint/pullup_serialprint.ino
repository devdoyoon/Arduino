const int ledpin = 12;
const int YledPin = 9;
const int buttonPin = 2;
int sensorPin = A0;
int buttonState = 0;
int sensorValue;

void setup() {
  pinMode(ledpin, OUTPUT);
  pinMode(Yledpin, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);
 sensorValue = analogRead(sensorPin);
 Serial.println(sensorValue);
  if (buttonState == HIGH) {   // 버튼 눌렀을 때
  Serial.println("LED ON");
    digitalWrite(ledpin, HIGH);
    digitalWrite(Yedpin, LOW);
    delay(5);
  } else {
    digitalWrite(ledpin, LOW);
    digitalWrite(Yedpin, LOW);
    delay(5);
  }
}
