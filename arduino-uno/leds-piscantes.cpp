// C++ code

int led_pin1 = 12;
int led_pin2 = 13;

void setup() {
  pinMode (led_pin1, OUTPUT);
  pinMode (led_pin2, OUTPUT);
}

void loop() {
  digitalWrite(led_pin1, HIGH);
  digitalWrite(led_pin2, HIGH);
  delay(1000);
  digitalWrite(led_pin1, LOW);
  digitalWrite(led_pin2, LOW);
  delay(150);
}