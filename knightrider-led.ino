// Define the pin to which the LED is connected
const int ledPin1 = 8;
const int ledPin2 = 9;
const int ledPin3 = 10;
const int ledPin4 = 11;
const int ledPin5 = 12;
const int x = 500;
// Use built-in LED on most Arduino boards

void setup() {
  // Initialize the digital pin as an output
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  
}

void loop() {
  digitalWrite(ledPin1, HIGH);
  delay(x); 
  
  digitalWrite(ledPin2, HIGH);
  delay(x);
  
  digitalWrite(ledPin3, HIGH);
  delay(x);
  
  digitalWrite(ledPin4, HIGH);
  delay(x);
  
  digitalWrite(ledPin5, HIGH);
  delay(x);


  digitalWrite(ledPin5, LOW);
  delay(x);
  
  digitalWrite(ledPin4, LOW);
  delay(x);
  
  digitalWrite(ledPin3, LOW);
  delay(x);
  
  digitalWrite(ledPin2, LOW);
  delay(x);
  
  digitalWrite(ledPin1, LOW);
  delay(x);
  
  
  
}
