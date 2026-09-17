# System Architecture

## Current demonstration architecture

```text
Scratch / audience input
          ↓
  event vocabulary
 (rain, goal, plant)
          ↓
 browser simulator ───────→ projected visual output
          ↓
  Arduino sketch / future API adapter
          ↓
 ESP8266 or simulated ESP32
          ↓
 LED · buzzer · servo · display
```

The browser simulator and Arduino sketch share event names, but are not currently connected by a network service. This keeps the first demonstration reliable and makes the integration boundary explicit.

## Future live-weather architecture

```text
Open-Meteo JSON → weather adapter → Event { type, source, timestamp, payload }
                                      ↓
                                decision rule
                                      ↓
                                ESP output command
```

The adapter should own provider-specific URL and JSON parsing. Presentation code should consume a normalised event rather than know the weather provider’s response shape.

## Non-goals for the first release

- No hidden cloud service or API key.
- No promise that a phone controls the presenter laptop.
- No production safety certification for connected actuators.
- No claim that ESP8266 and ESP32 use interchangeable pin numbers.
