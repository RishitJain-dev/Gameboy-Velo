# Gameboy-Velo
Gameboy Velo is a modern take on the classic Gameboy, with a joystick instead of a d-pad, and the same A and B buttons as before. This new version includes a large colourful TFT screen and included storage with an SD card reader and even a LiPo battery!

It is programmed in C++, using Arduino IDE to compile! The micro controller is the XIAO ESP32-C3.

Total price is around $70 including filament and PCB prices. Please note that prices fluctuate! Check the BOM.csv for more detailed financial information.

<img width="1021" height="802" alt="Screenshot 2026-09-12 161145" src="https://github.com/user-attachments/assets/3a5f538b-3349-4387-8dad-6968cf7975e2" />

### Features
- Analog Joystick
- 1080p Full Colour screen!
- 3 buttons
- Full Bluetooth and WiFi capabilities!

This project consists of 2 main parts, the PCB and CAD. The PCB was designed in KiCAD, while the CAD was made in Onshape. This project is fully open source for NON COMMERCIAL purposes.

<img width="1040" height="824" alt="Screenshot 2026-09-12 161247" src="https://github.com/user-attachments/assets/202dc2d7-3ce2-41b4-8fbe-19e1dbb2a810" />

### CAD
made in onshape! fits together with friction, but has screw holes in case your printer isnt as accurate. it uses 3 3d printed buttons, any colour you choose!

<img width="928" height="831" alt="Screenshot 2026-09-12 161300" src="https://github.com/user-attachments/assets/9c9c989e-347c-4706-8605-b62b5e6312af" />


### schematic diagram!
took me way too long, its quite simple. look to this while soldering to know what's going on! I used labels instead of wires but remember that labels that have the same text are electrically connected.

<img width="891" height="480" alt="Screenshot 2026-09-12 152349" src="https://github.com/user-attachments/assets/94ce8fbf-21ca-4097-9c65-a6532e781413" />

### PCB
made in kicad! what the pcb looks like: (everything is a thru hole component so they can easily be hand-soldered.)

<img width="657" height="810" alt="Screenshot 2026-09-12 152209" src="https://github.com/user-attachments/assets/32b892cf-17a3-4827-b8eb-6a104b8647ea" />
<img width="488" height="596" alt="Screenshot 2026-09-12 143816" src="https://github.com/user-attachments/assets/9049a31c-255a-4f3a-9b41-ffc21c500d87" />

### Firmware
It uses arduino IDE to flash the code onto the XIAO. using C++, you can program the screen to run whatever game you choose. im currently working on a scratch game importer. they are stored on the screen's inbuilt SD card.

<img width="837" height="617" alt="image" src="https://github.com/user-attachments/assets/9a64c679-db47-4cb4-a846-89ec99fbe307" />

### BOM
please read bom.csv for more detailed financials and where to buy the parts, here is a uncomprehensive list of components:
- XIAO ESP32-C3
- 3 Push Buttons
- Analogue Joystick
- Adafruit TFT screen
- PCB
- 3D printed parts



### Credits 
to Stardance Hack club for funding this project!
