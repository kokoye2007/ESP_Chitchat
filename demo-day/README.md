# Demo Day Projects

This folder contains three small projects for the Chitchat / Demo Day:

1. **Touch LED** — audience activity: input → decision → output.
2. **Weather Event Box** — rain event → blue light, buzzer, umbrella flag.
3. **Football Event Box** — goal event → flashing light, buzzer, football flag.

Scratch teaching notes are in `scratch/README.md`.

## Browser simulator

The browser simulator needs no dependencies. Start it from this folder:

```bash
cd demo-day
python3 -m http.server 8000
```

Open `http://localhost:8000/web-simulator/` on the presentation laptop. Phones on the same network can open the laptop's local IP address and use the buttons as remote controls. Project the laptop screen for the audience.

The buttons represent API events. They are deliberately simulated so the demo remains reliable; a live weather or football API can be added later. The current page is a local visual simulator: opening it on a phone does not control the laptop page. Use the laptop buttons for the main presentation, or add a small server/WebSocket bridge when shared phone control is required.

## Arduino / Wokwi

The sketches in `arduino/` use Arduino C++. Open them in Arduino IDE or paste them into Wokwi. `touch_led.ino` is the hands-on activity; `event_box.ino` demonstrates the event response logic. Adjust pin numbers for the selected board. The event-box sketch uses Serial commands as an API placeholder and positions a real servo through `Servo.h`.

## Language choice

For Demo Day, introduce **C/C++ briefly** because it is the standard Arduino path and shows how firmware controls pins. Do not teach syntax in depth. Explain that **MicroPython** expresses the same logic in a more beginner-friendly way and is a good follow-up workshop. Keep the first activity language-neutral: describe the behaviour in plain English before showing either code version.
