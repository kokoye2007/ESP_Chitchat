# Devices and Module Sheet

## Controller boards

| Device | Role now | Notes |
|---|---|---|
| ESP8266 / NodeMCU | Beginner Wi-Fi controller | Good for GPIO, sensors, HTTP, and simple API demos; limited GPIO and usually one ADC. |
| ESP32 DevKit | Advanced controller and simulator target | More GPIO, Bluetooth, memory, peripherals, and a stronger upgrade path. |
| M5Stack CoreS3 | Polished demonstration device | Use later for touchscreen, camera, audio, and product-like demos. |

## Current 22-in-1 module kit

| Category | Modules |
|---|---|
| Environment | DHT11, BMP280, photosensitive, soil moisture, water level, raindrop |
| Movement | PIR/SR501, vibration/SW-420, tilt, speed |
| Proximity/optical | HC-SR04 ultrasonic, obstacle avoidance, TCRT5000 tracking, laser KY-008, infrared KY-022 |
| Magnetic | KY-003 Hall, KY-024 linear Hall |
| Interaction | TTP223B touch, KY-037 microphone |
| Other | Voltage sensor |

The kit is a **sensor/module kit**, not a complete output kit. It does not provide the standalone LED, resistor, buzzer, or servo needed for the Event Box. Some modules have indicator LEDs, but those are not a substitute for teaching output components.

## Prioritised additions

1. Breadboards, jumper wires, USB data cables, and resistor assortment.
2. 5 mm LEDs and 220–330 Ω resistors for the first activity.
3. RGB/NeoPixel LEDs, buzzers, and SG90 servos for visible outputs.
4. OLED display, relay/MOSFET modules, fan, and small pump for later projects.

## Reusable wiring pattern

```text
READ sensor/input → INTERPRET value → DECIDE rule/API/AI → ACT output
```
