const int analogOutPin = 9; 
int buttonPin = 4;

int buttonState = 0;      

void setup() {
  // initialize serial communications at 9600 bps:
  pinMode(analogOutPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  
 buttonState = digitalRead(buttonPin);
  Serial.println("Button State = " + buttonState);
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    analogWrite(analogOutPin, 255);
  }
  else {
    // turn LED off:
    analogWrite(analogOutPin, 50);
  }
  delay(2);

}
