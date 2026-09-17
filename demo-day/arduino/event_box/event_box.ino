// Event response logic. Replace simulateEvent() with an HTTP/API result later.
#include <Servo.h>

const int LIGHT_PIN = LED_BUILTIN;
const int BUZZER_PIN = D6;
const int SERVO_PIN = D7;
Servo flagServo;

void setup() {
  pinMode(LIGHT_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  flagServo.attach(SERVO_PIN);
  flagServo.write(0);
  Serial.begin(115200);
}

void loop() {
  // Demo trigger: type rain, goal, plant, or clear in the Serial Monitor.
  if (Serial.available()) {
    String event = Serial.readStringUntil('\n');
    event.trim();
    simulateEvent(event);
  }
}

void simulateEvent(String event) {
  bool active = event == "rain" || event == "goal" || event == "plant";
  digitalWrite(LIGHT_PIN, active ? LOW : HIGH);
  digitalWrite(BUZZER_PIN, (event == "rain" || event == "goal" || event == "plant") ? HIGH : LOW);
  flagServo.write((event == "rain" || event == "goal") ? 90 : 0);
  Serial.println(active ? "Event handled: outputs activated" : "Outputs reset");
}
