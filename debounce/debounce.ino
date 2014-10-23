int wheel1 = 10; 
int wheel2 = 9;

int button1 = 6;
int button2 = 4;

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
 
  Serial.println("Button State = " + button1State);
  Serial.println("Button State = " + button2State);

  
  if (button1State == HIGH) {

    analogWrite(wheel1, 255);
  }
  else {
    
    analogWrite(wheel1, 50);
  }
  delay(2);

}
