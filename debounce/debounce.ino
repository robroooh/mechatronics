int wheel1 = 10;  // left wheel
int wheel2 = 9;  //right wheel

int button1 = 6; // left btn
int button2 = 4; // right btn

int button1State = 0;
int button2State = 0;

void setup() {
  pinMode(wheel1, OUTPUT);
  pinMode(wheel2, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  Serial.begin(9600);
}

void loop() {

  button1State = digitalRead(button1);
  button2State = digitalRead(button2);

  Serial.print("Button1 State = ");
 Serial.println(button1State);
  Serial.print("Button2 State = ");
 Serial.println(button2State);

  if (button1State == HIGH && button2State == LOW) { // turn left
    analogWrite(wheel1, 255);
  }
  else if (button1State == LOW && button2State == HIGH) { // turn tight
    analogWrite(wheel2, 255);
  } else if (button1State == LOW && button2State == LOW) { // stop
    analogWrite(wheel1, 0);
    analogWrite(wheel2, 0);
  } else {// go straight
    analogWrite(wheel1, 255);
    analogWrite(wheel2, 255);
  }

<<<<<<< HEAD
=======
  delay(300);

>>>>>>> origin/master
}
