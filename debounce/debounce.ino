#include <Bounce2.h>

int buttonPin = 0;
const int analogOutPin = 10;
Bounce b1 = Bounce();

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT);

  b1.attach(buttonPin);
  b1.interval(20);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(b1.update());

  if (b1.read() == 1) {
    analogWrite(analogOutPin, 150);
  } else {
    analogWrite(analogOutPin, 20);
  }
}
