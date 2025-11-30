#include <SoftwareSerial.h>
SoftwareSerial BTSerial(0, 1); // RX=0, TX=1

// Motor pins
const int in1 = 8, in2 = 9, in3 = 10, in4 = 11;
const int enA = 5, enB = 6;

// Ultrasonic pins
const int trigPin = 12, echoPin = 13;

void setup() {
  pinMode(in1, OUTPUT); pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT); pinMode(in4, OUTPUT);
  pinMode(enA, OUTPUT); pinMode(enB, OUTPUT);
  pinMode(trigPin, OUTPUT); pinMode(echoPin, INPUT);
  
  BTSerial.begin(9600);
  Serial.begin(9600);
}

void loop() {
  // Bluetooth Command
  if (BTSerial.available()) {
    char cmd = BTSerial.read();
    Serial.print("Command: "); Serial.println(cmd);
    
    switch(cmd) {
      case 'F': moveForward(); break;
      case 'B': moveBackward(); break;
      case 'L': turnLeft(); break;
      case 'R': turnRight(); break;
      case 'S': stopCar(); break;
    }
  }

  // Obstacle Avoidance
  float distance = getDistance();
  if (distance < 20) {
    stopCar(); delay(500);
    moveBackward(); delay(500);
    turnLeft(); delay(500);
  }
}

// Motor Functions
void moveForward() {
  digitalWrite(in1, HIGH); digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH); digitalWrite(in4, LOW);
  analogWrite(enA, 200); analogWrite(enB, 200);
}

void moveBackward() {
  digitalWrite(in1, LOW); digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW); digitalWrite(in4, HIGH);
  analogWrite(enA, 200); analogWrite(enB, 200);
}

void turnLeft() {
  digitalWrite(in1, LOW); digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH); digitalWrite(in4, LOW);
  analogWrite(enA, 200); analogWrite(enB, 200);
}

void turnRight() {
  digitalWrite(in1, HIGH); digitalWrite(in2, LOW);
  digitalWrite(in3, LOW); digitalWrite(in4, HIGH);
  analogWrite(enA, 200); analogWrite(enB, 200);
}

void stopCar() {
  digitalWrite(in1, LOW); digitalWrite(in2, LOW);
  digitalWrite(in3, LOW); digitalWrite(in4, LOW);
}

// Distance Calculation
float getDistance() {
  digitalWrite(trigPin, LOW); delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  long duration = pulseIn(echoPin, HIGH);
  return (duration / 2) / 29.1; // cm
}