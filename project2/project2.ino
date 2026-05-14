int switchState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(2);

  if (switchState == LOW) {
    // if the button is not pressed
    digitalWrite(3, HIGH); // green LED - ON
    digitalWrite(4, LOW); // red LED - OFF
    digitalWrite(5, LOW); // red LED - OFF
  } else {
    // button is pressed to allow power and close circuit
    digitalWrite(3, LOW); // green LED - OFF
    digitalWrite(4, LOW); // red LED - OFF
    digitalWrite(5, HIGH); // red LED - ON

    delay(250); // wait for a quarter second

    //toggle LEDs
    digitalWrite(4, HIGH); // flips pin 4 to ON
    digitalWrite(5, LOW); // flips pin 5 to OFF
    delay(250);
  }
}
