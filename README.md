# ESP_Chitchat

ESP_Chitchat is an open-hardware education repository for demonstrating how software interacts with the physical world. It combines beginner activities, browser simulation, Arduino firmware examples, and a research-backed path toward Wi-Fi, APIs, MQTT, and AI.

This is a curriculum and demonstration project—not production device firmware. The first event uses an ESP8266/NodeMCU where available; ESP32 is the recommended upgrade and simulation target.

## Demonstration scope

1. **Touch LED** — input → decision → output.
2. **Weather Event Box** — weather event → light, buzzer, and flag.
3. **Football Event Box** — match event → light, buzzer, and flag.

The first project is interactive. The Event Box projects use deterministic simulated events so the presentation does not depend on an external API being available at the right moment.

## Run locally

Requirements: Python 3 for the browser demo; Arduino IDE for hardware sketches; Marp CLI only if editing presentations.

```bash
python3 -m http.server 8000 --directory demo-day
```

Open <http://localhost:8000/web-simulator/>. Use the laptop controls for the reliable demonstration. The current static page does not synchronize multiple phones with one laptop.

Render the focused presentation with Marp:

```bash
marp --html esp32-open-hardware-demo-day-marp.md \
  -o esp32-open-hardware-demo-day-marp.html
```

## Repository map

```text
demo-day/                         runnable teaching assets
  arduino/                        Arduino C++ sketches
  scratch/                        Scratch activity specification
  web-simulator/                  dependency-free browser simulator
docs/                             architecture, research, and runbook
DEVICES.md                        inventory and purchasing sheet
SIMULATORS.md                    toolchain and simulator decisions
PROJECTS.md                      external project references
```

## Design principles

- Start with a visible result and zero assumed knowledge.
- Keep the first circuit local; add Internet data only after GPIO is understood.
- Separate simulated events from live API integrations.
- Treat board pin limits, voltage, power, and licensing as engineering constraints.

Read [`docs/RESEARCH.md`](docs/RESEARCH.md) for technical decisions, then [`docs/DEMO_DAY_RUNBOOK.md`](docs/DEMO_DAY_RUNBOOK.md) for the event procedure.

For broader discovery, see [`RESOURCES.md`](RESOURCES.md) and [`GITHUB_SEARCH.md`](GITHUB_SEARCH.md). These explain which sources are authoritative, how to evaluate community projects, and how to search GitHub effectively.
