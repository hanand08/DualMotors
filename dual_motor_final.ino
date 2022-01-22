#define dirPin 6
#define stepPin 7

#define dirPin1 8
#define stepPin1 9

#define stepsPerRevolution 1600
#define pushButton A0
#define pushButton1 A5

void setup() {
 Serial.begin(9600);
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  pinMode(stepPin1, OUTPUT);
  pinMode(dirPin1, OUTPUT);
  pinMode(pushButton, INPUT);
  pinMode(pushButton1, INPUT);
  pinMode(10, OUTPUT);
  pinMode (11, OUTPUT);
}

void loop() {
int buttonState = analogRead(pushButton);
delay(1);

  
  
  if (buttonState > 1020){
    digitalWrite(10, HIGH);
  digitalWrite(dirPin, HIGH);
  digitalWrite(dirPin1, HIGH);

 
  for (int i = 0; i < stepsPerRevolution; i++) {
    // These four lines result in 1 step:
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(500);
     digitalWrite(stepPin1, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin1, LOW);
    delayMicroseconds(500);
  }


  }
  else{digitalWrite(10, LOW);
    
  }


  
  

  int buttonState1 = analogRead(pushButton1);
  delay(1);
   Serial.println(buttonState1);
  
  if (buttonState1 > 1020){
    digitalWrite(11, HIGH);
    digitalWrite(dirPin, LOW);
  digitalWrite(dirPin1, LOW);

 
  for (int i = 0; i < stepsPerRevolution; i++) {
    // These four lines result in 1 step:
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(500);
     digitalWrite(stepPin1, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin1, LOW);
    delayMicroseconds(500);
  }


  
 }
  else{digitalWrite(11, LOW);
    
  }
}
