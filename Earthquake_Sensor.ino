
// defines pins numbers
const int trigPin = 9;
const int echoPin = 10;
int sensoroutput = 3; // the analog pin connected to the sensor
int ledoutput = 2; // pin connected to LED
long duration;
int distance;

int analogPin = A0;
int val = 0;
void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(2, OUTPUT);
}
void loop() {

  val = analogRead(analogPin);  // read the input pin
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;
  if (abs(distance-10)+val>30) {
    digitalWrite(11, HIGH);
    digitalWrite(2, HIGH);    
    delay (500);
  }
  else { 
    digitalWrite (11, LOW);
    digitalWrite(2, LOW);
        delay (50);        
  } 
  if (abs(distance-10)+val>60) {
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(2, HIGH);
    delay (500);
  }
  else { 
    digitalWrite (11, LOW);
    digitalWrite (12, LOW);
    digitalWrite (2, LOW);
    delay (50);        
  } 
    if (abs(distance-10)+val>90) {
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    delay (500);
  }
  else { 
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    delay (50);        
  } 
  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(abs(distance-10)+val);
  
  int value = analogRead(A3);  // function to read analog voltage from sensor
  if (value >= 1000)                    // function to check voltage level from sensor
  {
  digitalWrite(ledoutput, HIGH);
  delay(1); // to make the LED visible
  }
  else {
  digitalWrite(ledoutput, LOW);
  delay(2);
  }
//  int value1 = analogRead(A3);  // function to read analog voltage from sensor
//  if (value1 >= 1000)                    // function to check voltage level from sensor
//  {
//  digitalWrite(ledoutput, HIGH);
//  delay(1); // to make the LED visible
//  }
//  else
//  digitalWrite(ledoutput, LOW);
//  delay(1);
}
