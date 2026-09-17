# ESP_Chitchat

Beginner-friendly open-hardware demonstrations showing how code can sense, decide, connect to the Internet, and create a physical response.

## What this repository contains

- **Scratch → Wokwi → Arduino** learning path.
- Touch-sensor activity for Chitchat / Demo Day.
- Weather and football Event Box demonstrations.
- Browser-based Event Box simulator in [`demo-day/web-simulator`](demo-day/web-simulator/).
- Marp presentation sources and generated HTML decks.
- Practical reference sheets for software, simulators, devices, and project inspiration.

## Quick start

Run the browser simulator locally:

```bash
cd demo-day
python3 -m http.server 8000
```

Open <http://localhost:8000/web-simulator/>. The buttons simulate `rain`, `goal`, and `plant` events. This is a reliable presentation fallback; it does not yet synchronize multiple phones with one laptop.

## Learning path

```text
Scratch logic → Wokwi simulation → Arduino C/C++ → ESP8266/ESP32 → APIs → AI
```

Start with one visible physical idea. Add networking and AI only after the input/decision/output pattern is understood.

## Main documents

- [`SIMULATORS.md`](SIMULATORS.md) — software and websites.
- [`DEVICES.md`](DEVICES.md) — board, sensor, and output reference sheet.
- [`PROJECTS.md`](PROJECTS.md) — project inspiration and useful links.
- [`demo-day/README.md`](demo-day/README.md) — Demo Day setup.
- [`esp32-open-hardware-demo-day-marp.md`](esp32-open-hardware-demo-day-marp.md) — focused 15-slide deck.
- [`esp32-open-hardware-chitchat-marp-v2.md`](esp32-open-hardware-chitchat-marp-v2.md) — longer bootcamp overview deck.

## Audience

Assume zero prior experience. Prefer diagrams, short code, interaction, and a physical or virtual result over specification-heavy explanations.
