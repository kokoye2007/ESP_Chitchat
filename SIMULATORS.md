# Software and Simulator Guide

## Recommended progression

| Stage | Tool | Best use |
|---|---|---|
| 1 | [Scratch](https://scratch.mit.edu/) | Explain logic with blocks, stories, and broadcasts. |
| 2 | [Wokwi](https://wokwi.com/) | Simulate ESP32 circuits, sensors, displays, LEDs, buzzers, and servos in a browser. |
| 3 | [Arduino IDE](https://www.arduino.cc/en/software) | Upload Arduino C/C++ to real ESP8266/ESP32 boards. |
| 4 | [MicroPython](https://micropython.org/) | Introduce Python-style firmware after the hardware basics. |
| 5 | [PlatformIO](https://platformio.org/) | Move toward repeatable, professional project builds. |

## Wokwi

Wokwi is the primary no-hardware simulator for this project. It supports ESP32 boards and can simulate Wi-Fi projects that query HTTP/HTTPS services, MQTT, and other network protocols. The public gateway is convenient for learning; the private gateway is intended for faster/local development and has plan requirements. Read the [Wokwi documentation](https://docs.wokwi.com/) and [ESP32 Wi-Fi guide](https://docs.wokwi.com/guides/esp32-wifi).

Use an ESP32 board in Wokwi for simulation, even when the first physical lesson uses an ESP8266. Label the difference clearly: **physical starter board: ESP8266; simulator/upgrade path: ESP32**.

## Scratch

Use Scratch to model the decision before introducing pins:

```text
when I receive [rain]
say [Rain expected!]
switch costume to [umbrella]
```

Direct Scratch-to-ESP control requires a supported extension or a custom bridge. Do not make that bridge a Demo Day dependency; use Scratch for logic and Wokwi/web simulation for hardware.

## Local browser simulator

The repository’s `demo-day/web-simulator/index.html` is a dependency-free visual fallback. It runs with Python’s static server and simulates event outputs. It is intentionally deterministic for presentations; live APIs can be added later.
