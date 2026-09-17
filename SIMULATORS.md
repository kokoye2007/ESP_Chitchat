# Software, Simulation, and Development Tools

## Toolchain decision

| Layer | Tool | Repository role |
|---|---|---|
| Logic | [Scratch](https://scratch.mit.edu/) | Model behaviour with blocks before wiring. |
| Virtual hardware | [Wokwi](https://wokwi.com/) | Run ESP32 Arduino/MicroPython experiments without hardware. |
| Beginner firmware | [Arduino IDE](https://www.arduino.cc/en/software) | Upload C/C++ sketches to ESP8266/ESP32. |
| Python-style firmware | [MicroPython](https://micropython.org/) | Follow-up path after GPIO concepts. |
| Professional ESP32 | [ESP-IDF](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/) | Advanced framework and production path. |

## Wokwi boundary

Wokwi’s current documentation focuses on ESP32-family boards and supports Arduino, MicroPython, and ESP-IDF workflows. Its Wi-Fi simulation can make HTTP/HTTPS and MQTT connections through the Wokwi gateway. The public gateway is convenient for experiments but should not receive secrets or sensitive data; use the private gateway when local-network access and privacy are required.

For this repository:

- Simulate the Event Box with an ESP32-compatible Wokwi project.
- Keep physical ESP8266 pin assignments separate from ESP32 diagrams.
- Do not claim a live API integration until it has been tested from the simulator.

Start with the [Wokwi ESP32 guide](https://docs.wokwi.com/guides/esp32), then the [Wi-Fi guide](https://docs.wokwi.com/guides/esp32-wifi).

## Scratch boundary

Scratch is the logic layer for the first lesson. Hardware extensions exist, but direct ESP8266 control requires a supported extension or a custom bridge. A bridge is out of scope for Demo Day because it adds browser and networking failure modes.

## Local browser simulator

`demo-day/web-simulator/index.html` is a deterministic presentation harness, not an ESP emulator. It visualises the event vocabulary used by the Arduino sketch:

```text
rain | goal | plant | clear
```

It deliberately has no dependency or API key. A future server component may add shared phone control and live weather data without changing the event vocabulary.
