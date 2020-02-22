//Program for LED chaser

using namespace std;

// LED pins
int LEDS[10] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

void setup() {
  // Monitor for debugging
  Serial.begin(9600);
  // Set pins for LEDs
  for (int i = 0; i < 10; i++) {
      pinMode(LEDS[i], OUTPUT); //make arduino pin an output
  }
}

int ledDelay = 200; //delay for 200 miliseconds 
void loop() {
  // Put your main code here, to run repeatedly:
  for (int i = 0; i < 10; i++) {
    // Turn LED on
    digitalWrite(LEDS[i], HIGH);
    //delay for 200 miliseconds 
    delay(ledDelay);
    // Turn LED off
    digitalWrite(LEDS[i], LOW);
  }
}
