int soundSensor = 2;   // KY-038 D0 pin
int ledPin = 13;
int state = LOW;

void setup() {
  pinMode(soundSensor, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int sensorValue = digitalRead(soundSensor);

  if (sensorValue == HIGH) {   // sound detected
    state = !state;            // toggle LED
    digitalWrite(ledPin, state);
    delay(500);                // debounce delay
  }
}
