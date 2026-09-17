---
description: ESP32, IoT & AI --- Open Hardware Chitchat
marp: true
paginate: true
size: "16:9"
style: |
  :root { --ink: #f4f0df; --muted: #b9c0b2; --field: #101815; --panel: #1a2922; --signal: #f4c542; --hot: #ef7358; --line: #526356; }
  section { background: var(--field); color: var(--ink); font-family: "Avenir Next", "Trebuchet MS", sans-serif; font-size: 27px; line-height: 1.22; padding: 58px 68px; border-top: 12px solid var(--signal); }
  section::after { color: var(--muted); font-size: 16px; }
  h1 { color: var(--signal); font-size: 55px; letter-spacing: -0.03em; line-height: 1.02; margin-bottom: 22px; }
  h2 { color: var(--ink); font-size: 36px; line-height: 1.08; }
  h3 { color: var(--hot); font-size: 23px; text-transform: uppercase; letter-spacing: 0.08em; }
  strong { color: var(--signal); } em { color: var(--hot); }
  p, li { color: var(--muted); } blockquote { border-left: 6px solid var(--hot); color: var(--ink); background: var(--panel); padding: 14px 22px; }
  code { color: var(--signal); font-size: 0.84em; } pre { background: var(--panel); border: 1px solid var(--line); border-radius: 12px; padding: 18px 22px; }
  .small { font-size: 19px; } .center { text-align: center; } .big { color: var(--signal); font-size: 42px; }
  section.lead { background: var(--signal); color: var(--field); border-top-color: var(--hot); } section.lead h1, section.lead h2, section.lead h3, section.lead p, section.lead strong { color: var(--field); }
theme: default
title: From Code to the Real World
---

<!-- _class: lead -->
# From Code to the Real World

## ESP32 • IoT • APIs • AI • Open Hardware

### Chitchat / Demo Day

**Zero experience required**

------------------------------------------------------------------------

# What if your code could...

-   Know when a room is too hot?
-   Detect someone entering?
-   Know that rain is coming?
-   React when your football team scores?
-   Ask AI what to do next?
-   Turn on a light, motor, fan or pump?

> Software doesn't have to stay inside a screen.

------------------------------------------------------------------------

# The Big Idea

``` text
               REAL WORLD
                   ↕
                ESP32
          ↙        ↓        ↘
      Sensors   Internet     AI
          ↘        ↓        ↙
        LIGHT / MOTOR / DISPLAY
```

**Sense → Think → Connect → Act**

------------------------------------------------------------------------

# What is Open Hardware?

Hardware we can:

-   Learn from
-   Program
-   Connect
-   Modify
-   Extend
-   Build products around

Examples:

**Arduino • ESP8266 • ESP32 • Raspberry Pi • M5Stack • XIAO • LilyGO**

------------------------------------------------------------------------

# Meet ESP32

A tiny programmable computer with connectivity built in.

``` text
ESP32
├── CPU + Memory
├── Wi-Fi
├── Bluetooth
├── GPIO
├── ADC
├── PWM
├── I²C
├── SPI
└── UART
```

One board can connect software to the physical world.

------------------------------------------------------------------------

# The ESP Family

``` text
Arduino ecosystem
       │
    ESP8266
       │
     ESP32
       ├── ESP32
       ├── ESP32-C3
       ├── ESP32-S3
       └── ESP32-C6
```

And ready-to-build devices:

**M5Stack • Seeed XIAO • LilyGO • many more**

------------------------------------------------------------------------

# You Can Start Without Hardware

## Playground → Simulator → Real Device

``` text
MIT Scratch / Blocks
        ↓
 Programming Logic
        ↓
      Wokwi
        ↓
 Virtual ESP32
        ↓
   Real ESP32
```

Start in the browser. Move to hardware when ready.

------------------------------------------------------------------------

# From Blocks to Professional Development

``` text
Scratch / Block Programming
            ↓
          Wokwi
            ↓
       Arduino IDE
            ↓
       MicroPython
            ↓
 VS Code + PlatformIO
            ↓
         ESP-IDF
```

You don't need to learn everything on day one.

------------------------------------------------------------------------

# Demo 1 --- The Simplest Device

``` text
BUTTON
   ↓
 ESP32
   ↓
  LED
```

No AI.

No cloud.

No Internet.

## INPUT → PROCESS → OUTPUT

This is the foundation of almost everything we build.

------------------------------------------------------------------------

# Demo 2 --- Let It Sense the World

``` text
Temperature ─┐
Humidity ────┤
Light ───────┤
Motion ──────┤→ ESP32 → OLED / LED / Buzzer / Motor
Button ──────┘
```

Examples:

-   Hot room → fan
-   Dark room → light
-   Motion → alert
-   Dry soil → pump

------------------------------------------------------------------------

# Add Wi-Fi

``` text
Sensor
   ↓
 ESP32
   ↓ Wi-Fi
Phone Browser
```

Now your phone can:

-   Read sensor values
-   Control an LED
-   Start a motor
-   Change settings

## Welcome to IoT.

------------------------------------------------------------------------

# Local Data + Global Data

  Local --- around us   Global --- Internet
  --------------------- ---------------------
  Temperature           Weather
  Humidity              Football
  Motion                Currency
  Light                 Air quality
  Soil moisture         Transport
  Distance              News
  Buttons               Maps

**ESP32 can use both.**

------------------------------------------------------------------------

# Demo 3 --- Weather Becomes Physical

``` text
Weather API
     ↓
  Internet
     ↓
   ESP32
     ↓
┌──────────────┐
│ Melbourne    │
│ 17°C         │
│ Rain: 85% ☔ │
└──────────────┘
     ↓
BLUE LED + "Take Umbrella"
```

Global information → physical action.

------------------------------------------------------------------------

# A More Fun API Demo ⚽

``` text
Football API
      ↓
    GOAL!
      ↓
    ESP32
   ↙   ↓    ↘
 LED Buzzer Servo
             ↓
          Team Flag
```

Something happens somewhere in the world...

**...and hardware on our desk reacts.**

------------------------------------------------------------------------

# What Is Happening Behind the Demo?

``` text
ESP32
  ↓
Wi-Fi
  ↓
HTTP Request
  ↓
API
  ↓
JSON Data
  ↓
ESP32
  ↓
ACTION
```

These are not just web-development concepts.

They can control the real world.

------------------------------------------------------------------------

# Can ESP32 Use AI?

## Yes.

``` text
ESP32
  ↓
Internet
  ↓
AI API / AI Service
  ↓
Answer / Decision
  ↓
ESP32
  ↓
Physical Action
```

ESP32 handles the device.

AI can help understand, classify or decide.

------------------------------------------------------------------------

# Demo 4 --- Sensor → AI → Action

``` text
Temperature: 31°C
Humidity:    82%
       ↓
      AI
       ↓
"Hot and very humid.
Turn ventilation on."
       ↓
ESP32 → FAN
```

Local sensor data can become context for AI.

------------------------------------------------------------------------

# And the Other Direction...

``` text
YOU
 ↓
"Turn the light on"
 ↓
AI / Voice Service
 ↓
ESP32
 ↓
💡 LIGHT
```

Or:

``` text
"Set brightness to 50%"
          ↓
         ESP32
          ↓
          PWM
```

AI can trigger physical actions.

------------------------------------------------------------------------

# Give the Device Eyes

``` text
ESP32 Camera
     ↓
   Image
     ↓
 Vision AI
     ↓
"Plant leaf may be unhealthy"
     ↓
   ESP32
     ↓
Display / Alert / Action
```

Camera + network + AI turns a small board into a smart sensor.

------------------------------------------------------------------------

# The Big WOW Demo 🌱

## Smart Plant / Smart Environment

``` text
             🌱 PLANT
                 │
        ┌────────┼────────┐
        ↓        ↓        ↓
      Soil     Temp    Humidity
        └────────┼────────┘
                 ↓
               ESP32
                 ↑
            Weather API
                 ↓
              AI / Rules
                 ↓
        DECISION / ACTION
          ↙      ↓      ↘
       Screen   Pump   Phone
```

------------------------------------------------------------------------

# Simple Automation vs Smart Decision

Local data:

``` text
Soil = DRY
Temperature = 29°C
Humidity = 48%
```

Global data:

``` text
Weather forecast:
Rain expected in 2 hours
```

Simple automation:

``` text
IF soil == dry → WATER
```

Smarter decision:

> "Don't water yet. Rain is expected soon."

------------------------------------------------------------------------

# From Breadboard to Product

We start here:

``` text
ESP32 + Breadboard + Wires + Sensors
```

And can progress to:

``` text
M5Stack / Integrated ESP32 Device
├── Touchscreen
├── Wi-Fi
├── Sensors
├── Speaker / Microphone
├── Camera
└── Battery
```

Same concepts --- increasingly polished hardware.

------------------------------------------------------------------------

# Example: Smart Room Controller

``` text
┌─────────────────────────┐
│      SMART ROOM         │
│                         │
│ 🌡 24°C      💧 55%     │
│                         │
│ Weather: ☔ 17°C         │
│                         │
│ [ LIGHT ]    [ FAN ]    │
│                         │
│ AI: Room comfortable    │
└─────────────────────────┘
```

A student project can start looking like a real product.

------------------------------------------------------------------------

# The Complete World

``` text
                     AI
                      ↑
                      │
Sensor → ESP32 → Internet → API
           ↓          │
        Display       ↓
           ↓        Cloud
         Motor        ↓
           ↓       Database
         Relay        ↓
           ↓      Dashboard
         Robot        ↓
                   Mobile
```

Hardware + Software + Internet + AI.

------------------------------------------------------------------------

# What Will the Bootcamp Teach?

``` text
ZERO → LOGIC → ELECTRONICS
          ↓
ESP8266 / ESP32 → SENSORS
          ↓
INTERNET → APIs → AI
          ↓
AUTOMATION → PRODUCT
```

------------------------------------------------------------------------

# What Will You Actually Touch?

## A first kit

**ESP32 · breadboard · LEDs · buttons · resistors · sensors**

Start with the physical basics.

**Build → break → debug → understand → rebuild.**

------------------------------------------------------------------------

# Then Grow the Project

``` text
OLED display
Buzzer
Servo
Relay
Camera
M5Stack
```

From a first LED to a product-like device.

------------------------------------------------------------------------

# Where Can This Lead?

-   Smart home
-   Smart agriculture
-   Environmental monitoring
-   Robotics
-   Wearables
-   Industrial IoT
-   Home Assistant
-   TinyML / Edge AI
-   AI-connected devices
-   Custom PCB / product development

Your first LED can be the first step toward a real product.

------------------------------------------------------------------------

<!-- _class: lead -->
# Today: Watch Us Build It

------------------------------------------------------------------------

<!-- _class: lead -->
# Bootcamp: Build It Yourself

``` text
CODE
 ↓
LED
 ↓
SENSOR
 ↓
REAL WORLD
 ↓
INTERNET
 ↓
GLOBAL DATA
 ↓
AI
 ↓
PHYSICAL ACTION
 ↓
REAL PRODUCT
```

**Open Hardware / ESP32 Bootcamp**

Zero experience required.

------------------------------------------------------------------------

<!-- _class: lead -->
# Questions?

### What would YOU build if your code could control the real world?

**VibeCode.Tours × Open Hardware**

------------------------------------------------------------------------

<!-- _class: lead -->
# Demo Day: Build Together

## Three projects. One clear journey.

``` text
SCRATCH LOGIC → WOKWI SIMULATION → API EVENT BOX
```

**One project is hands-on. Two projects are visual WOW demos.**

------------------------------------------------------------------------

# Guest Project --- Touch Light

We ask the room:

> "What should happen when I touch this sensor?"

``` text
Touch Sensor
     ↓
  ESP8266
     ↓
    LED
```

Guests help decide the behaviour before we write any code.

**No hardware? Run the same logic as a Wokwi simulation.**

------------------------------------------------------------------------

# Think Together → Write Together

First, write the idea in plain language:

``` text
IF touched
    light ON
ELSE
    light OFF
```

Then turn the idea into code together.

``` text
IDEA
 ↓
LOGIC
 ↓
CODE
 ↓
UPLOAD
 ↓
REAL-WORLD RESULT 💡
```

------------------------------------------------------------------------

# Make It Interactive

Once the first version works, ask the audience:

**"What should we change?"**

Possible ideas:

-   Touch once → ON
-   Touch again → OFF
-   Blink three times
-   Add a sensor condition
-   Trigger something over Wi-Fi

The guests become part of the development process.

------------------------------------------------------------------------

# Project 2 --- Weather Event Box

``` text
PHONE BUTTON / WEATHER API
            ↓
      VIRTUAL ESP32
      ↙     ↓     ↘
  BLUE LIGHT  BUZZER  UMBRELLA FLAG
```

Press **Rain expected** on a phone. The event box reacts on the projected simulator.

**Global data → local physical action.**

------------------------------------------------------------------------

<!-- _class: lead -->
# Project 3 --- Football Event Box

## Same tiny board. A different event.

``` text
PHONE BUTTON / FOOTBALL API
            ↓
       GOAL EVENT
            ↓
      VIRTUAL ESP32
      ↙     ↓     ↘
   FLASH   SOUND   FLAG
```

Press **Football goal**. A goal somewhere else becomes a celebration here.

------------------------------------------------------------------------

# One Box --- Many Stories

One reusable demo device:

``` text
                 INTERNET
                    ↓
               GLOBAL API
                    ↓
                 ESP8266
              ↙     ↓     ↘
            RGB   BUZZER   SERVO
            LED              🚩
```

Change the event + logic...

**and it becomes a completely different project.**

------------------------------------------------------------------------

# Optional Extension --- Smart Plant 🌱

``` text
SOIL IS DRY + RAIN IS COMING
            ↓
       SMART DECISION
            ↓
       WAIT / WATER / WARN
```

Mention this as the next bootcamp project, not a fourth main Demo Day build.

------------------------------------------------------------------------

# One Box --- Many Ideas

``` text
Weather       → ☔
Football      → ⚽
Air Quality   → 🚨
Transport     → 🚦
GitHub Event  → ⭐
Smart Plant   → 🌱
AI Decision   → 🤖
```

The hardware can stay almost the same.

**The idea + data + code changes the product.**

------------------------------------------------------------------------

# Add Our Local Sensors

Use the modules we already have:

``` text
DHT11 ───────────┐
BMP280 ──────────┤
Soil Moisture ───┤
Light Sensor ────┤
Rain Sensor ─────┤
                 ↓
              ESP8266
```

Now the device understands what is happening **here**.

------------------------------------------------------------------------

# Local + Global

``` text
LOCAL                         GLOBAL

DHT11 ────────┐              Weather API
BMP280 ───────┤                   │
Soil ─────────┤                   │
Light ────────┤                   │
              ↓                   ↓
                  ESP8266
                     ↓
                  DECISION
```

Example:

**Plant is dry locally + rain is coming globally.**

What should we do?

------------------------------------------------------------------------

# Now Add AI 🤖

``` text
LOCAL SENSOR ──────┐
                   │
GLOBAL API ────────┼→ AI → DECISION
                   │
USER INPUT ────────┘
                           ↓
                        ESP8266
                      ↙    ↓    ↘
                    LED  BUZZER  SERVO
```

AI becomes another tool in the project --- not the whole project.

------------------------------------------------------------------------

# WOW Example --- Smart Decision

``` text
LOCAL + GLOBAL DATA
          ↓
         AI
          ↓
"Take a jacket and umbrella."
          ↓
ESP8266 → LED + BUZZER + SERVO
```

------------------------------------------------------------------------

# What Did We Just Learn?

``` text
INPUT / API → ESP8266 → OUTPUT
```

Same foundation. More inputs and connectivity create bigger projects.

**Read → decide → act.**

------------------------------------------------------------------------

# Demo Day Journey

``` text
WATCH
  ↓
THINK TOGETHER
  ↓
WRITE TOGETHER
  ↓
BUILD TOGETHER
  ↓
SEE IT WORK
  ↓
TOUCH LED
  ↓
WEATHER + FOOTBALL WOW
  ↓
"WHAT CAN I BUILD?"
```

That question leads directly into the Bootcamp.

------------------------------------------------------------------------

<!-- _class: lead -->
# Today We Build One Together

## In the Bootcamp, you build your own.

**ESP8266 / ESP32 • Sensors • APIs • IoT • AI • Real Projects**
