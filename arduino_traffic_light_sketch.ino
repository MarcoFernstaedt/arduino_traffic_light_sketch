void setup() {
    pinMode(10, OUTPUT);
    pinMode(9, OUTPUT);
}

void loop() {
    digitalWrite(10, HIGH);
    delay(200);
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
    delay(200);
    digitalWrite(9, LOW);
}