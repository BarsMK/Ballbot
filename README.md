# 🏓 BallBot

> **An autonomous table-tennis-ball collecting robot built from scratch.**

## 🎯 What is BallBot?

BallBot is a robot I'm building to autonomously collect scattered table-tennis balls.

The project combines a custom-built physical chassis, motors, sensors, electronics, and a ball-collection mechanism. My goal is to develop the robot from an early physical prototype into a working autonomous system.

## Goals

* Build the robot's chassis from scratch
* Create a working drivetrain
* Build a reliable ball-collection mechanism
* Add sensors for navigation and detection
* Program the robot's movement
* Develop autonomous ball collection
* Test and improve the design

## 🔧 Hardware

The BallBot build currently uses or is planned to use:

* Arduino Mega
* ESP32
* L298N motor driver
* DC motors
* HuskyLens AI camera
* HC-SR04 ultrasonic sensor
* Servo motor
* Stepper motor
* Battery system
* Custom-built chassis

See [`BOM.md`](BOM.md) for the current parts list.

## 💻 Software

The `firmware/` folder contains the code used to control BallBot.

Planned software includes:

* Motor control
* Sensor reading
* Manual movement
* Ball detection
* Obstacle avoidance
* Autonomous navigation
* Ball collection

## 🔌 Hardware Documentation

The `hardware/` folder contains information about BallBot's electronics and physical build, including wiring, pin assignments, and hardware notes.

## 🧪 Testing

The `testing/` folder contains technical testing and experiments performed during development.

Testing will include:

* Motor tests
* Sensor tests
* Collection mechanism tests
* Navigation tests
* Autonomous operation

## 📈 Current Status

### Phase 1 — Physical Build

- [x] Begin chassis construction
- [x] Plan motor placement
- [x] Begin ball-collection mechanism
- [x] Work on hopper
- [x] Plan electronics placement
- [x] Attempt motor wire extension
- [ ] Complete motor wiring
- [ ] Finish chassis
- [ ] Finish collection mechanism

### Phase 2 — Electronics

* [ ] Install motor driver
* [ ] Connect motors
* [ ] Install sensors
* [ ] Install controllers
* [ ] Complete power system

### Phase 3 — Programming

* [ ] Motor control
* [ ] Sensor integration
* [ ] Manual control
* [ ] Ball detection
* [ ] Autonomous movement
* [ ] Autonomous collection

### Phase 4 — Testing

* [ ] Test drivetrain
* [ ] Test collection system
* [ ] Test sensors
* [ ] Test autonomous movement
* [ ] Test complete robot

## 📓 Documentation

The development process, timelapses, photos, and devlogs are documented on my Stardance project page.

This repository focuses on the technical side of BallBot, including its code, hardware documentation, and testing.

## 🤖 AI Usage

AI was occasionally used for brainstorming, troubleshooting, and learning during development. The physical construction, wiring, testing, and implementation were done by me.
