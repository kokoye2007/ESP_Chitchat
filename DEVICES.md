# Devices and Module Inventory

This sheet separates the controller, input modules, and output hardware. The existing “22-in-1” kit is a mixed sensor/module pack; it is not a complete Event Box.

## Controller decision

| Board | Use | Engineering note |
|---|---|---|
| ESP8266 / NodeMCU | Early physical lessons | Wi-Fi and simple GPIO/HTTP are suitable; it has one user ADC channel and constrained GPIO. |
| ESP32 DevKit | Upgrade path and Wokwi target | More GPIO/peripherals and better headroom for displays, actuators, and networking. |
| M5Stack CoreS3 | Polished showcase later | Use for touchscreen, camera, audio, and product-like demonstrations—not first wiring lessons. |

## Exact 22-in-1 kit inventory

| # | Module | Category | First teaching use |
|---:|---|---|---|
| 1 | DHT11 | Environment | Temperature/humidity |
| 2 | SR501 PIR | Movement | Detect motion |
| 3 | BMP280 | Environment | Pressure/temperature over I²C |
| 4 | LM393 photosensitive | Light | Digital light threshold |
| 5 | Soil moisture | Environment | Dry/wet threshold |
| 6 | KY-008 laser | Optical/output | Light beam demonstration |
| 7 | TTP223B touch | Human input | Touch LED activity |
| 8 | Water level | Environment | Liquid level threshold |
| 9 | Voltage sensor | Electrical measurement | Analog scaling with safety checks |
| 10 | Speed sensor | Movement | Pulse counting |
| 11 | KY-024 linear Hall | Magnetic | Magnetic field level |
| 12 | Dupont cables | Wiring accessory | Prototyping |
| 13 | HC-SR04 ultrasonic | Proximity | Distance measurement |
| 14 | SW-420 vibration | Movement | Vibration threshold |
| 15 | TCRT5000 tracking | Optical/proximity | Line tracking |
| 16 | KY-037 microphone | Sound/input | Sound threshold |
| 17 | KY-018 photosensitive | Light | Analog light experiment |
| 18 | Obstacle avoidance | Proximity/IR | Near-object detection |
| 19 | Raindrop | Environment | Wet/dry threshold |
| 20 | Tilt switch | Movement | Orientation change |
| 21 | KY-022 IR receiver | Remote input | Decode remote signals |
| 22 | KY-003 Hall switch | Magnetic | Digital magnet detection |

## Required output additions

The kit does not include the standalone output set needed for the demonstrations:

- 5 mm LEDs and 220–330 Ω resistors
- RGB LED or NeoPixel
- Active/passive buzzer
- SG90 servo and suitable 5 V power arrangement
- Breadboards, jumper wires, USB data cables, and spare ESP boards

Never drive a motor, servo, relay, or pump directly from an ESP GPIO. Use an appropriate driver, shared ground, and external power where required.
