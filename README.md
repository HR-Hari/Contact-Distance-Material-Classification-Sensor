# Contact Distance & Material Classification Sensor

This project explores a simple tactile sensing approach using controlled contact and vibration analysis. A servo-driven probe performs repeatable tapping actions, and an accelerometer records the resulting vibration signals for basic analysis.

---

## Overview

Inspired by tactile sensing concepts used in assistive devices and biological systems, this project replaces manual tapping with a controlled electromechanical mechanism. The aim was to observe how vibration signals change with contact distance and surface material.

---

## System Description

- A lightweight probe is actuated using an **MG995 servo motor**
- An **MPU6050 accelerometer** captures vibration signals during contact
- Signals were analyzed mainly in the time domain

---

## What Was Done

- Implemented a repeatable tapping mechanism using a servo motor
- Collected raw vibration data from the accelerometer
- Observed:
  - Amplitude decay
  - Timing differences
  - Transient vibration behaviour
- Noted that different materials produce visibly different vibration patterns

---

## Scope & Limitations

- Analysis was exploratory and feature-based
- No advanced machine learning models were implemented
- Focus was on understanding signal behaviour rather than building a full classifier

---

## Tools Used

- Arduino / C
- MG995 Servo Motor
- MPU6050 Accelerometer
- Python (basic plotting and analysis)

---

## Affiliation

University of Peradeniya  
Nov 2023 – Mar 2024
