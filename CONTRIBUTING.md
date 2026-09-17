# Contributing

## Scope

Contributions should improve beginner comprehension, reproducibility, or correctness of the hardware/software examples.

## Before opening a pull request

- Keep examples board-specific: state whether the target is ESP8266 or ESP32.
- Document pin assignments and required voltage/power conditions.
- Do not commit API keys, Wi-Fi credentials, or private URLs.
- Run `git diff --check` and test the browser simulator with a local Python server.
- For presentation changes, render the Markdown with Marp and check every changed slide at 16:9.

## Naming

- Markdown documents: uppercase descriptive names at the root or lower-case names under `docs/`.
- Arduino sketches: one folder per sketch with a matching `.ino` filename.
- Event types: lower-case stable names such as `rain`, `goal`, `plant`, and `clear`.

## Pull requests

Describe the learner outcome, hardware tested, board model, pin map, and verification steps. Include screenshots for changed web UI or slides. Link external research sources when a hardware limitation or service decision is introduced.
