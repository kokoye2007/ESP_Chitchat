---
marp: true
paginate: true
size: 16:9
title: From Code to the Real World — Demo Day
description: A beginner-friendly ESP8266, Scratch, Wokwi, and API demonstration
footer: VibeCode.Tours • Open Hardware Demo Day
style: |
  :root { --ink: #f4f0df; --muted: #b9c0b2; --field: #101815; --panel: #1a2922; --signal: #f4c542; --hot: #ef7358; --local: #67b7d5; --api: #bd91e8; --out: #82d59b; --line: #526356; }
  section { background: var(--field); color: var(--ink); font-family: "Avenir Next", "Trebuchet MS", sans-serif; font-size: 27px; line-height: 1.2; padding: 58px 68px 52px; border-top: 12px solid var(--signal); }
  section::after { color: var(--muted); font-size: 16px; }
  header { color: var(--hot); font-size: 17px; letter-spacing: .08em; text-transform: uppercase; }
  footer { color: var(--muted); font-size: 15px; }
  h1 { color: var(--signal); font-size: 57px; letter-spacing: -.04em; line-height: 1.02; margin-bottom: 22px; }
  h2 { color: var(--ink); font-size: 36px; line-height: 1.08; }
  h3 { color: var(--hot); font-size: 22px; text-transform: uppercase; letter-spacing: .08em; }
  p, li { color: var(--muted); } strong { color: var(--signal); } em { color: var(--hot); }
  blockquote { border-left: 6px solid var(--hot); color: var(--ink); background: var(--panel); padding: 14px 22px; }
  code { color: var(--signal); font-size: .84em; } pre { background: var(--panel); border: 1px solid var(--line); border-radius: 12px; padding: 18px 22px; }
  .small { font-size: 19px; } .big { color: var(--signal); font-size: 43px; }
  .local { color: var(--local); } .api { color: var(--api); } .out { color: var(--out); }
  section.lead { background: var(--signal); color: var(--field); border-top-color: var(--hot); } section.lead h1, section.lead h2, section.lead h3, section.lead p, section.lead strong { color: var(--field); }
---

<!-- _class: lead -->

# From Code to the Real World

## ESP8266 • Scratch • Wokwi • APIs

### Chitchat / Demo Day

**No experience required.**

---

# Today’s promise

You will see software move through three stages:

```text
IDEA → LOGIC → VIRTUAL HARDWARE → REAL-WORLD ACTION
```

We will build one simple project together, then turn the same idea into two event machines.

---

# Three projects / one journey

```text
1  TOUCH LED       audience builds the logic
2  WEATHER BOX     rain event → umbrella reaction
3  FOOTBALL BOX    goal event → celebration
```

**One hands-on activity. Two fast visual WOW demos.**

---

# Start with Scratch

Before wiring anything, describe the behaviour:

```text
WHEN touched
    SAY “I felt that!”
    TURN LED ON
ELSE
    TURN LED OFF
```

Scratch makes the decision visible. The board comes next.

---

# Project 1 / Touch LED

```text
TOUCH SENSOR  →  ESP8266  →  ONBOARD LED
     input          decision       output
```

Ask the room:

> “What should happen when I touch the sensor?”

No cloud. No AI. Just **input → process → output**.

---

# Audience build

```text
IF touched
    LED ON
ELSE
    LED OFF
```

Then change one thing:

- touch once → toggle
- blink three times
- add a sound

The audience becomes the developer.

---

# Same idea / new tool

```text
SCRATCH BLOCKS
      ↓
ARDUINO C/C++
      ↓
ESP8266 PIN
```

Show only the few lines that read the input and control the output. Explain that **MicroPython** is a friendly alternative for a later workshop.

---

<!-- _class: lead -->

# LIVE NOW / Project 2

## Weather Event Box ☔

---

# Rain becomes physical

```text
PHONE BUTTON or WEATHER API
              ↓
         VIRTUAL ESP32
        ↙      ↓      ↘
   BLUE LIGHT  BUZZER  FLAG
```

Press **Rain expected** in the browser simulator.

**Global data → local action.**

---

<!-- _class: lead -->

# LIVE NOW / Project 3

## Football Event Box ⚽

---

# A goal happens somewhere else

```text
PHONE BUTTON or FOOTBALL API
              ↓
           GOAL!
              ↓
         VIRTUAL ESP32
        ↙      ↓      ↘
      FLASH   SOUND   FLAG
```

Press **Football goal**.

The box celebrates here.

---

# How the simulator is set up

```text
LAPTOP                  PHONES
Wokwi / web simulator  optional event controls
       ↓                       ↓
       └────── projected demo ─┘
```

The laptop buttons are the reliable controller. Phone pages are optional and currently run independently; shared phone control requires a small server bridge.

---

# The reusable pattern

```text
READ → INTERPRET → DECIDE → ACT
```

The input can be:

- a touch sensor
- a weather API
- a football event
- a local soil sensor
- an AI recommendation

The pattern stays the same.

---

# What comes next?

```text
SCRATCH → WOKWI → ARDUINO → MICROPYTHON
                              ↓
                       APIs • MQTT • AI
```

The bootcamp turns today’s three small ideas into projects you can build yourself.

---

<!-- _class: lead -->

# Your turn

## What would you build if your code could control the real world?

**VibeCode.Tours × Open Hardware**
