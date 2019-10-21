
const int buttonPin1 = 2;     // the number of the pushbutton pin
const int buttonpin2 = 4;
      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT);
    pinMode(buttonPin2, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin1);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13,LOW);
    delay(500);
    digitalWrite(12, HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(500);
    digitalWrite(11, HIGH);
    delay(500);
    digitalWrite(11,LOW);
    delay(500);
    digitalWrite(10, HIGH);
    delay(500);
    digitalWrite(10,LOW);
    delay(500);
    digitalWrite(9, HIGH);
    delay(500);
    digitalWrite(9,LOW);
    delay(500);
    digitalWrite(8, HIGH);
    delay(500);
    digitalWrite(8,LOW);
    delay(500);
  } else {
        digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13,LOW);
    delay(1000);
    digitalWrite(12, HIGH);
    delay(1000);
    digitalWrite(12,LOW);
    delay(1000);
    digitalWrite(11, HIGH);
    delay(1000);
    digitalWrite(11,LOW);
    delay(1000);
    digitalWrite(10, HIGH);
    delay(1000);
    digitalWrite(10,LOW);
    delay(1000);
    digitalWrite(9, HIGH);
    delay(1000);
    digitalWrite(9,LOW);
    delay(1000);
    digitalWrite(8, HIGH);
    delay(1000);
    digitalWrite(8,LOW);
    delay(1000);
  }
}
