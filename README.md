# Acridinium Ester-based Bacterial Detection with Arduino

## Project Overview
This project aims to assist doctors in identifying bacterial infections in blood samples. By leveraging the chemical properties of acridinium ester, which emits light when mixed with blood, and using an Arduino-based setup, we can differentiate between bacterial and viral infections based on the intensity of the emitted light.

## Table of Contents
1. [Introduction](#introduction)
2. [Problem Statement](#problem-statement)
3. [Solution](#solution)
4. [Hardware Components](#hardware-components)
5. [Methodology](#methodology)
6. [Results](#results)
7. [Usage](#usage)
8. [Contributing](#contributing)
9. [License](#license)

## Introduction
In medical diagnostics, distinguishing between bacterial and viral infections is crucial for prescribing the appropriate treatment. Traditional methods can be time-consuming and sometimes inaccurate. This project leverages the light-emitting properties of acridinium ester when it interacts with bacterial components in blood. By measuring the intensity of the emitted light using an Arduino, we can accurately differentiate between bacterial and viral infections.

## Problem Statement
Doctors often face challenges in quickly and accurately identifying whether an infection is bacterial or viral. Misidentification can lead to incorrect treatments, potentially causing harm to patients and contributing to antibiotic resistance.

## Solution
Our solution involves mixing acridinium ester with blood samples. The chemical reaction emits light, and the intensity of this light varies based on the presence of bacteria. Using an Arduino and light sensor, we measure the light intensity and set a threshold value of 0.25. If the intensity is above 0.25, the sample is identified as bacterial; if below, it is identified as viral.

## Hardware Components
- **Arduino Uno**: The microcontroller used to process data from the light sensor.
- **Light Sensor**: Measures the intensity of light emitted by the acridinium ester reaction.
- **Acridinium Ester**: The chemical used to detect the presence of bacteria in blood samples.
- **Breadboard and Wires**: For building the circuit.
- **LED**: To visually indicate the detection results.
- **Blood Sample Holder**: A container to hold the blood sample and acridinium ester mix.

## Methodology
1. **Setup**: Assemble the Arduino and light sensor circuit on a breadboard.
2. **Chemical Reaction**: Mix the blood sample with acridinium ester.
3. **Measurement**: Place the sample in the holder and measure the emitted light intensity using the light sensor connected to the Arduino.
4. **Data Processing**: The Arduino processes the light intensity data.
5. **Threshold Check**: Compare the light intensity against the threshold value of 0.25.
6. **Result Indication**: If the intensity is above 0.25, an LED lights up indicating a bacterial infection. If below, it indicates a viral infection.

## Results
The system successfully differentiates between bacterial and viral infections based on light intensity measurements. By setting a threshold value, the system determines if the light intensity is above the threshold, indicating a bacterial infection, or below it, indicating a viral infection.

<h1 align=center>
<img align ="center" alt="coding" width="500" src="https://github.com/rugvedjalit/Acridinium-Ester-based-Bacterial-Detection-with-Arduino/blob/main/Media_Gallery/Work.gif">
</h1>


## Hardware Setup
![Hardware Setup](https://github.com/rugvedjalit/Acridinium-Ester-based-Bacterial-Detection-with-Arduino/blob/main/Media_Gallery/Circuit_Designs.jpg)


## Usage
To use this project:
1. Assemble the hardware components as per the circuit diagram.
2. Upload the Arduino code to the Arduino Uno.
3. Mix a blood sample with acridinium ester and place it in the holder.
4. Observe the LED indicator for the result.

## Contributing
We welcome contributions from the community! To contribute:

1\. Fork the repository.

2\. Create a new branch for your feature or bugfix.

3\. Make your changes and commit them.

4\. Push to your branch.

5\. Create a pull request explaining your changes.

## Contact

For any questions or inquiries, please contact us at [rugwedjalit@gmail.com](mailto:rugwedjalit@gmail.com).

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.


