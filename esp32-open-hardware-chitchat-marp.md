---
description: ESP32, IoT & AI --- Open Hardware Chitchat
marp: true
paginate: true
size: "16:9"
style: |
  section { font-size: 28px; padding: 55px; } h1 { font-size: 52px; } h2
  { font-size: 40px; } code { font-size: 0.85em; } .small { font-size:
  20px; } .center { text-align: center; } .big { font-size: 42px; }
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
ZERO
 ↓
Scratch / Logic
 ↓
Electronics
 ↓
ESP32
 ↓
Sensors + Components
 ↓
Programming
 ↓
Wi-Fi + Web
 ↓
API + JSON
 ↓
MQTT + Cloud
 ↓
AI
 ↓
Automation
 ↓
Real Product
```

------------------------------------------------------------------------

# What Will You Actually Touch?

``` text
ESP32
Breadboard
LEDs
Buttons
Resistors
Sensors
OLED display
Buzzer
Servo
Relay
Camera
M5Stack
```

Not just slides.

**Build → break → debug → understand → rebuild.**

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
