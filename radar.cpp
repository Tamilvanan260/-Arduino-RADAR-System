#include <Servo.h>

// Pin definitions
const int trigPin = 9;
const int echoPin = 10;
const int servoPin = 11;

Servo myServo; 

void setup() {
  Serial.begin(9600); 
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  myServo.attach(servoPin); 
}

void loop() {
  // Sweep from 15° to 180°
  for (int angle = 15; angle <= 180; angle++) {
    myServo.write(angle);
    delay(30);
    int distance = calculateDistance();
    Serial.print(angle);
    Serial.print(",");
    Serial.println(distance);
  }

  // Sweep back from 180° to 15°
  for (int angle = 180; angle >= 15; angle--) {
    myServo.write(angle);
    delay(30);
    int distance = calculateDistance();
    Serial.print(angle);
    Serial.print(",");
    Serial.println(distance);
  }
}

// Function to calculate distance using ultrasonic sensor
int calculateDistance() {
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034 / 2; // Convert to cm
  return distance;
}
