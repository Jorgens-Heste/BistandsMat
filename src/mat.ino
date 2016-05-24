const int relayport = 6;
const int matport = 2;

void setup() {
  pinMode(relayport, OUTPUT);
  pinMode(matport, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {

  int matstatus = digitalRead(matport);

  if(!matstatus) { // user on mat

    turnOnScreen();
    Serial.println("ALIVE");

  } else {

      turnOffScreen();
      Serial.println("DEAD");

  }
  delay(10);
}


void turnOnScreen() {
  digitalWrite(relayport, LOW);  // turn on relay
}

void turnOffScreen() {
  digitalWrite(relayport, HIGH);  // turn on relay
}
