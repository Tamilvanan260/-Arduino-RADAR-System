// Program code for RADAR System


#include <Servo.h>   // Includes the Servo library

// Defines Trig and Echo pins of the Ultrasonic Sensor
const int trigPin = 10;
const int echoPin = 11;

// Variables for the duration and the distance
long duration;
int distance;

Servo myServo; // Creates a servo object for controlling the servo motor

void setup() {
  pinMode(trigPin, OUTPUT);   // Sets the trigPin as an Output
  pinMode(echoPin, INPUT);    // Sets the echoPin as an Input
  Serial.begin(9600);         // Serial communication for debugging
  myServo.attach(12);         // Connects the servo motor to pin 12
}

void loop() {
  // Sweep servo from 15° to 190° (forward direction)
  for (int i = 15; i <= 190; i += 10) {   // step by 2 degrees
    scanAndMeasure(i);
  }

  // Sweep servo from 190° back to 15° (reverse direction)
  for (int i = 190; i >= 15; i -= 10) {   // step by 2 degrees
    scanAndMeasure(i);
  }
}

// Function to rotate servo, measure distance and print data
void scanAndMeasure(int angle) {
  myServo.write(angle);        // Rotate servo to angle
  delay(35);                   // Faster sweep (was 30 before)
  distance = calculateDistance();   // Measure distance

  // Send data to Serial Monitor (Processing IDE compatible format)
  Serial.print(angle);
  Serial.print(",");
  Serial.print(distance);
  Serial.print(".");
}

// Function for calculating the distance measured by the Ultrasonic sensor
int calculateDistance() {
  // Clear trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Trigger the sensor with a 10us HIGH pulse
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance in cm (speed of sound = 0.034 cm/us)
  distance = duration * 0.034 / 2;
  return distance;
}
