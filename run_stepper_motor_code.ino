// Stepper motor run code with a4988 driver

const int stepPin = 3; // define pin for step
const int dirPin = 4;  // define pin for direction


void setup() {
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);

}

void loop() {
 digitalWrite(dirPin, HIGH); // set direction, HIGH for clockwise, LOW for anticlockwise
 
 for(int x = 0; x<10000; x++) { // loop for 200 steps
  digitalWrite(stepPin,HIGH);
  delayMicroseconds(500);
  digitalWrite(stepPin,LOW); 
  delayMicroseconds(500);
 }
delay(1000); // delay for 1 second

  digitalWrite(dirPin, LOW); // set direction, HIGH for clockwise, LOW for anticlockwise
 
 for(int x = 0; x<10000; x++) { // loop for 200 steps
  digitalWrite(stepPin,HIGH);
  delayMicroseconds(500);
  digitalWrite(stepPin,LOW); 
  delayMicroseconds(500);
 }
delay(1000); // delay for 1 second
}
