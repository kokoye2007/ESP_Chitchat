# ESP Resources Catalogue

Curated on 2026-09-18. Links are grouped by authority and purpose; an “awesome” list is a discovery index, not a guarantee that every linked project is maintained or safe.

## Official foundations

| Resource | Use |
|---|---|
| [Espressif ESP-IDF](https://github.com/espressif/esp-idf) | Official ESP32 framework and production-oriented APIs. |
| [Arduino ESP32 core](https://github.com/espressif/arduino-esp32) | Arduino C++ support for ESP32 boards. |
| [Arduino ESP8266 core](https://github.com/esp8266/Arduino) | Arduino C++ support for ESP8266 boards. |
| [MicroPython](https://github.com/micropython/micropython) | Python-like firmware implementation. |
| [Arduino built-in examples](https://docs.arduino.cc/built-in-examples/) | Small, teachable sketches. |

## Awesome lists and curated GitHub indexes

- [agucova/awesome-esp](https://github.com/agucova/awesome-esp) — curated ESP8266/ESP32 projects and code.
- [s0lness/awesome-esp32](https://github.com/s0lness/awesome-esp32) — ESP32 projects worth building or studying.
- [pfalcon/awesome-micropython](https://github.com/pfalcon/awesome-micropython) — MicroPython libraries, tools, and resources.
- [mcauser/awesome-micropython](https://github.com/mcauser/awesome-micropython) — an additional MicroPython catalogue with project links.
- [GitHub ESP32 topic](https://github.com/topics/esp32) — live topic index; filter and inspect each repository.
- [GitHub IoT topic](https://github.com/topics/iot) — broader connected-device projects.

Before using a project from an awesome list, inspect its last commit, issue activity, license, hardware assumptions, and dependency versions.

## IDEs and development environments

| Environment | Best fit | Link |
|---|---|---|
| Arduino IDE 2 | Beginner firmware upload and serial monitor | [arduino.cc/en/software](https://www.arduino.cc/en/software) |
| VS Code + PlatformIO | Repeatable multi-file projects and library management | [platformio.org](https://platformio.org/) |
| VS Code + Espressif extension | ESP-IDF development and debugging | [Espressif IDE docs](https://docs.espressif.com/projects/espressif-ide/en/latest/) |
| Wokwi web editor | No-hardware ESP32 simulation | [wokwi.com](https://wokwi.com/) |
| Wokwi for VS Code | Simulation beside a local firmware project | [Wokwi VS Code docs](https://docs.wokwi.com/vscode/) |
| Scratch | Behaviour and logic before firmware | [scratch.mit.edu](https://scratch.mit.edu/) |

Recommended progression: **Scratch → Wokwi → Arduino IDE → PlatformIO/ESP-IDF**. MicroPython is a parallel teaching path after the first GPIO experiments, not a requirement for the C++ path.

## Project and community sites

- [Hackaday](https://hackaday.com/) — engineering project reports and real-world inspiration.
- [Hackster.io](https://www.hackster.io/) — tutorial-style hardware projects.
- [Adafruit Learning System](https://learn.adafruit.com/) — accessible electronics and CircuitPython projects.
- [Random Nerd Tutorials](https://randomnerdtutorials.com/) — ESP32/ESP8266 tutorials; verify versions and wiring against official documentation.
- [Wokwi community projects](https://wokwi.com/projects) — runnable simulator examples.
- [Open-Meteo](https://open-meteo.com/en/docs) — weather JSON API candidate for a no-key prototype.

## Selection checklist

Before copying code or wiring:

1. Confirm the exact board and pinout.
2. Read the license and retain attribution.
3. Check recent activity and open issues.
4. Identify required libraries and versions.
5. Check voltage, current, power, and actuator requirements.
6. Test in simulation or on a current-limited setup first.
