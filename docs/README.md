# ESP32 Keypad and LCD Interface — Documentation

Original diagrams and laboratory photographs from **Week 7, Figures 6–9**, of the Electrical and Electronic Engineering laboratory report.

## 1. Keypad Input Flowchart

<img src="keypad-input-flowchart.png" width="500" alt="Original keypad input and LCD feedback flowchart">

Figure 6: The program waits for a keypress, displays and stores ordinary keys, and displays the stored input when `#` is pressed before resetting the input string.

## 2. Keypad and LCD Schematic

<img src="keypad-lcd-schematic.png" width="500" alt="Original ESP32 keypad and LCD wiring schematic">

Figure 7: The original report schematic of the ESP32, 4×3 keypad and 16×2 LCD. The report specifies LCD GPIOs 4, 5, 18, 19, 21 and 23, with keypad rows 13, 12, 14 and 27 and columns 26, 25 and 33. See the Arduino sketch for the exact pin order.

## 3. Breadboard Implementation

<img src="keypad-lcd-breadboard.jpg" width="500" alt="Original keypad and LCD breadboard assembly photograph">

Figure 8: Photograph of the laboratory breadboard prototype, including the ESP32, LCD and connecting wires.

## 4. Stripboard Implementation

<img src="keypad-lcd-stripboard.jpg" width="500" alt="Original keypad and LCD stripboard assembly photograph">

Figure 9: Photograph of the assembled stripboard with the ESP32, keypad and LCD.

## Notes

These images document the **tested keypad/LCD interface**. The later maze-navigation command system was not successfully completed and is not represented as operational here.

Return to the [main README](../README.md) for project details and source code.
