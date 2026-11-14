
# ESP32 Keypad and LCD Interface

Development and testing of a keypad and LCD interface using an ESP32 microcontroller, a 4×3 matrix keypad and a 16×2 character LCD.

The project demonstrates digital input processing, character display, input storage and command confirmation using Arduino C++.

Developed as part of an Electrical and Electronic Engineering laboratory project.

## Demo / Images

Original circuit diagrams, laboratory photographs and flowcharts will be available in the [Project Documentation](docs/README.md).

## Hardware

- ESP32 development board
- 4×3 matrix keypad
- 16×2 character LCD
- Breadboard
- Stripboard
- Jumper wires
- Connecting cables
- Power supply
- USB cable for programming

## How It Works

The ESP32 reads inputs from a matrix keypad and processes the characters entered by the user.

The LCD provides a visual interface, displaying keypad inputs.

Characters can also be stored in a string until the user confirms the input.

### 1. Matrix Keypad Input

A 4×3 matrix keypad contains 12 keys arranged in four rows and three columns.

The keypad is connected to the ESP32 through its row and column connections.

The program detects which key has been pressed and processes the corresponding character.

### 2. LCD Display

A 16×2 character LCD displays text across two rows, with up to 16 characters per row.

The ESP32 sends display commands and character data to the LCD.

This allows the user to see the keypad inputs while interacting with the system.

### 3. Character Storage

The program stores keypad inputs as a sequence of characters.

This allows multiple keypresses to form a complete input rather than processing each character independently.

### 4. Input Confirmation

The `#` key is used to confirm the entered sequence.

When the user presses `#`, the program processes the stored input, outputs the completed sequence to the Serial Monitor and clears the stored characters.

The system can then accept a new sequence.

## System Operation

The interface follows a simple input-processing sequence:

1. Initialise the ESP32, keypad and LCD.
2. Wait for a keypad input.
3. Detect the pressed key.
4. Display the input on the LCD.
5. Store the entered character.
6. Check whether the confirmation key has been pressed.
7. If `#` is pressed, submit the stored input.
8. Clear the stored input and continue accepting new characters.

## Software

### Development Environment

- Arduino IDE
- Arduino C++
- ESP32 board support package
- Keypad interface library
- LCD control library

The exact libraries and GPIO assignments are documented in the original laboratory code.

### Project Files

| File | Description |
|---|---|
| `keypad-lcd-interface.ino` | Arduino code for keypad input, LCD output and input confirmation |
| `docs/README.md` | Original laboratory diagrams, photographs and testing evidence |

## Build & Test

### 1. Hardware Assembly

1. Connect the matrix keypad to the ESP32.
2. Connect the LCD according to the laboratory circuit diagram.
3. Verify the power and ground connections.
4. Check the row, column and LCD connections before applying power.

### 2. Programming

1. Open the project in Arduino IDE.
2. Install the required keypad and LCD libraries.
3. Select the correct ESP32 board and communication port.
4. Upload the Arduino sketch.
5. Open the Serial Monitor where required.

### 3. Testing

1. Press individual keypad buttons.
2. Verify that the ESP32 detects the correct characters.
3. Confirm that the LCD displays the inputs.
4. Enter multiple characters to test input storage.
5. Press `#` to confirm the entered sequence.
6. Check the output in the Serial Monitor.
7. Confirm that the stored input is cleared for the next sequence.

## Results / Notes

### Successful Implementation

The laboratory project demonstrated:

- Successful keypad input detection.
- Character display using a 16×2 LCD.
- Storage of multiple keypad inputs.
- Confirmation of a stored input sequence.
- Serial Monitor output for testing.
- Breadboard and stripboard construction.

The keypad and LCD interface was successfully tested during the laboratory work.

### Limitations

The interface was developed as part of a larger robotics laboratory project.

Although keypad-based robot navigation commands were explored, the complete command-driven maze-navigation system was not successfully implemented.

This repository therefore focuses on the completed keypad and LCD interface rather than presenting the unfinished navigation functionality as operational.

### Future Improvements

- Add input validation.
- Implement a clear or delete function.
- Improve handling of long character sequences.
- Develop a structured menu interface.
- Use a finite-state machine for different operating modes.
- Integrate validated keypad commands into a complete robot-control system.

## What I Learned

- How matrix keypads are interfaced with microcontrollers.
- How digital inputs are processed using Arduino C++.
- How character LCDs display information.
- How to store and manage user input.
- How to implement confirmation logic.
- How to use the Serial Monitor for debugging.
- How to construct and test input/output circuits on breadboard and stripboard.
- How user interfaces can be integrated into embedded systems.

## Related Projects

This project forms part of a series of embedded systems and robotics laboratory projects:

- [EEEbot Robot Construction](https://github.com/farazali-24/eeebot-robot-construction)
- [ESP32 Wireless Joystick Robot Control](https://github.com/farazali-24/esp32-wireless-robot-control)

## Credits

Developed as part of an Electrical and Electronic Engineering laboratory project.

**Hardware:**
- ESP32 microcontroller
- 4×3 matrix keypad
- 16×2 character LCD
- Breadboard and stripboard prototyping equipment

## License

This project is licensed under the MIT License. See [LICENSE](LICENSE) for details.
