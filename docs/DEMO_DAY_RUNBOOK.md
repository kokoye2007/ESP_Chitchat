# Demo Day Runbook

## Before the event

1. Start the local server from the repository root:

   ```bash
   python3 -m http.server 8000 --directory demo-day
   ```

2. Open `http://localhost:8000/web-simulator/` and test `Rain expected`, `Football goal`, and `Reset outputs`.
3. Open the 15-slide deck `esp32-open-hardware-demo-day-marp.html` in a browser.
4. If using hardware, test the onboard LED, touch module, buzzer, and servo independently.
5. Keep the browser simulator as the fallback even when physical hardware works.

## 60-minute sequence

| Time | Activity | Outcome |
|---:|---|---|
| 0–5 min | What is an ESP board? | Software can affect the physical world. |
| 5–15 min | Scratch behaviour | Audience understands the decision before wiring. |
| 15–30 min | Touch LED | Audience participates in one input/output loop. |
| 30–40 min | Weather Event Box | A simulated/global event creates outputs. |
| 40–50 min | Football Event Box | Same architecture, different event and story. |
| 50–60 min | Questions and bootcamp path | Participants choose what to build next. |

## Failure handling

- API unavailable: use the simulator’s event buttons.
- Hardware unavailable: run the Touch LED logic in Wokwi or the browser.
- Servo unstable: show the virtual flag and explain the actuator boundary.
- Wi-Fi unavailable: do not improvise credentials on the projector; use deterministic local events.
