Though I have worked on multiple Arduino projects, I will describe one of the major ones, done in 2023:
# Low-Cost Seismograph using Arduino

**Authors:** Jaidev Sanjay Khalane & Jani Kandarp Atul

## Overview

This project is an affordable, Arduino-based seismograph designed to detect earthquakes, warn users via intensity-based alarms, and plot real-time seismic data. It serves as a highly cost-effective alternative to conventional seismographs that rely on expensive 3-axis accelerometers or gyroscopes.

## Features

* **Visual & Audio Warnings:** Utilizes a piezo buzzer and a 3-LED system to indicate earthquake severity (1 LED = minor, 2 LEDs = medium, 3 LEDs = major).
* **Real-time Graphing:** Plots the magnitude of seismic waves against time directly within the Arduino IDE Serial Plotter.
* **Ultra Low-Cost:** The entire sensor array costs less than ₹100, making it ideal for large-scale deployment.

## How It Works

The device tracks the physical vibrations of a suspended bar magnet (acting as a pendulum bob) using a combination of three sensors:

1. **Piezoelectric Sensor:** Attached to the suspension thread to measure changes in mechanical stress/tension during a tremor.
2. **Ultrasonic Sensor:** Measures the linear displacement of the magnet from its resting position.
3. **Hall-Effect Sensor:** Measures the angular and Euclidean deflection by detecting changes in the magnetic field.

The Arduino Uno aggregates the absolute scaled values from these sensors to calculate the total deflection, which then triggers the threshold-based LEDs/buzzer and feeds the serial plotter.

## Hardware Components

* 1x Arduino Uno R3
* 1x Piezoelectric Sensor
* 1x Ultrasonic Distance Sensor
* 1x Hall-Effect Sensor
* 1x Piezo Buzzer
* 3x LEDs
* 1x Bar Magnet & suspension thread
* Breadboard, connecting wires, and power supply

More details can be found in the PDF report.
