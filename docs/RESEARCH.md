# Technical Research and Decisions

This document records the evidence behind the repository’s hardware, simulator, and API choices. It is separate from the beginner-facing lesson text.

## 1. ESP8266 versus ESP32

**Decision:** use ESP8266/NodeMCU for the first physical lesson when that is the available board; use ESP32 as the advanced platform and Wokwi simulation target.

The ESP8266 Arduino Core reference documents one user ADC channel and warns that GPIO6–11 are normally occupied by the flash interface. This makes ESP8266 appropriate for simple digital modules, but a poor choice for a beginner circuit that needs many simultaneous analog inputs.

The ESP32 GPIO reference documents a larger and more flexible GPIO set, but also notes that ADC2 cannot be used while Wi-Fi is active. Sensor designs that need analog readings during Wi-Fi operation should prefer ADC1 pins and follow the selected board’s restrictions.

Sources: [ESP8266 Arduino Core reference](https://arduino-esp8266.readthedocs.io/en/stable/reference.html), [Espressif ESP32 GPIO reference](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/peripherals/gpio.html), and [ESP32 hardware reference](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/hw-reference/).

## 2. Simulation strategy

**Decision:** Wokwi is the virtual hardware reference; the repository web page is a deterministic event visualiser.

Wokwi documents ESP32 simulation, Arduino/MicroPython/ESP-IDF workflows, and Wi-Fi access to HTTP/HTTPS/MQTT services. Its gateway is an emulation boundary, not evidence that a physical circuit or third-party API will behave identically. The Demo Day therefore uses simulated buttons as a fallback and labels live integrations separately.

Sources: [Wokwi documentation](https://docs.wokwi.com/), [ESP32 simulation](https://docs.wokwi.com/guides/esp32), and [ESP32 Wi-Fi](https://docs.wokwi.com/guides/esp32-wifi).

## 3. Weather API candidate

**Decision:** use Open-Meteo for a first live weather experiment, behind a replaceable adapter.

Open-Meteo exposes a JSON forecast endpoint using latitude/longitude and documents no API key for free non-commercial access. Its data is provided under CC BY 4.0 and the service has usage limits, so production or high-volume use needs attribution and a reviewed service plan.

Source: [Open-Meteo documentation](https://open-meteo.com/en/docs).

The football demo remains simulated until a competition, provider, authentication method, quota, and event schema are selected. A vague “football API” is not a reproducible dependency.

## 4. Teaching sequence

**Decision:** Scratch explains behaviour; Wokwi explains virtual hardware; Arduino C/C++ explains firmware; MicroPython is a later comparison.

Scratch supports extensions for selected hardware and services, but an ESP8266 bridge requires additional software and setup. That bridge is educationally interesting but operationally risky for a first public demonstration.

Sources: [Scratch extension guidance](https://scratch.mit.edu/help/studio/tips/blocks/add-an-extension/), [Scratch hardware extension plugin](https://scratch.mit.edu/info/ext_download/), and [Arduino software documentation](https://docs.arduino.cc/software/).

## 5. Safety and reproducibility

- Treat every GPIO voltage/current limit as board-specific; consult the board schematic/datasheet before wiring.
- Do not power servos, motors, relays, or pumps from a GPIO pin.
- Keep API keys out of sketches, browser code, and Git history.
- Record board model, pin map, library versions, and API assumptions beside each future Wokwi project.
- Use deterministic simulated events during presentations and live APIs during development/testing.
