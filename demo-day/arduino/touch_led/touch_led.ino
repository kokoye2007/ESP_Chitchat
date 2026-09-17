// Touch sensor -> LED. Change these pins for your board/module.
const int TOUCH_PIN = D5;
const int LED_PIN = LED_BUILTIN;

void setup() {
  pinMode(TOUCH_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  bool touched = digitalRead(TOUCH_PIN) == HIGH;
  digitalWrite(LED_PIN, touched ? LOW : HIGH); // onboard LEDs are often active-low
  delay(20);
}
