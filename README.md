# Boardoza INA250A1 High Precision Current Sense Breakout Board

The **Boardoza INA250A1** is a high-precision **current-sense breakout board** based on the **Texas Instruments INA250A1** integrated current shunt monitor. It combines a precision differential amplifier and an internal **2 mΩ shunt resistor**, enabling accurate current measurements with minimal external components.

This breakout board is suitable for both **unidirectional and bidirectional current sensing** applications. Making it ideal for **power monitoring, energy management, motor control, battery systems, and industrial applications** where accurate current measurement is critical.

## [Click here to purchase!](https://www.ozdisan.com/ureticiler/boardoza)
| Front Side | Back Side |
|:---:|:---:|
| <img src="assets/INA250A1 Front.png" width="400"/> | <img src="assets/INA250A1 Back.png" width="406"/> |

---

## Key Features

- **High-Precision Current Shunt Monitor:** Enables accurate current measurement.  
- **Integrated 2 mΩ Precision Shunt Resistor:** Eliminates the need for an external shunt resistor.
- **Bidirectional Measurement Support:** Supports both unidirectional and bidirectional current measurement.
- **Wide Supply Voltage Range:** Compatible with wide supply voltage levels (**2.7 Vdc to 36 Vdc**).   
- **Analog Voltage Output:** Allows easy interfacing with ADCs and microcontrollers.
- **Low Power Consumption:** Suitable for energy-efficient applications.
- **Adjustable Reference Voltage (REF):** Enables output offset adjustment for measurement flexibility.  
- **Maximum Input Current Capability:** Supports current measurement up to **15 A (max)**.  

---

## Technical Specifications

**Model:** INA250A1  
**Manufacturer:** Boardoza  
**Manufacturer IC:** Texas Instruments  
**Functions:** Precision current sensing  
**Supply Voltage:** 2.7 V – 36 V  
**Maximum Input Current:** 15 A (Max)  
**Shunt Resistance:** 2 mΩ (internal)  
**Gain:** 200 mV/A  
**Output Type:** Analog voltage  
**Measurement Type:** Unidirectional / Bidirectional  
**Operating Temperature:** -40 °C to +125 °C  
**Board Dimensions:** 40 mm × 40 mm

---

## Board Pinout

### **( J1 ) Signal Connector**

| Pin Number | Pin Name | Description |
| :---: | :---: | --- |
| 1 | VS | Device power supply (2.7 V – 36 V) |
| 2 | REF | Reference voltage input |
| 3 | OUT | Analog output voltage |
| 4 | GND | Ground |

### **( J2 ) Current Path Connector**

| Pin Number | Pin Name | Description |
| :---: | :---: | --- |
| 1 | IN+ | Current sense input (supply side) |
| 2 | IN- | Current sense input (load side) |

---

## Board Dimensions

<img src="./assets/INA250A1 Dimensions.png" alt="B-INA250A1-BRK Board Dimensions" width="450"/>

---

## Step Files

[Boardoza INA250A1.step](./assets/INA250A1%20Step.step)

---

## Datasheet

[INA250 Datasheet.pdf](./assets/INA250A1%20Datasheet.pdf)

---

## Version History

- V1.0.0 – Initial Release

---

## Support

- If you have any questions or need support, please contact **<support@boardoza.com>**

---

## **License**

This repository contains both hardware and software components:

### **Hardware Design**

[![CC BY-SA 4.0][cc-by-sa-shield]][cc-by-sa]

All hardware design files are licensed under [Creative Commons Attribution-ShareAlike 4.0 International License][cc-by-sa].

[cc-by-sa]: http://creativecommons.org/licenses/by-sa/4.0/
[cc-by-sa-shield]: https://img.shields.io/badge/License-CC%20BY--SA%204.0-lightgrey.svg

### **Software/Firmware**

[![BSD-3-Clause][bsd-shield]][bsd]

All software and firmware are licensed under [BSD 3-Clause License][bsd].

[bsd]: https://opensource.org/licenses/BSD-3-Clause
[bsd-shield]: https://img.shields.io/badge/License-BSD%203--Clause-blue.svg
