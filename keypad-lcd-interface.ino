
#include <Wire.h>
#include <LiquidCrystal.h>
#include <Keypad.h>

// LCD pin configuration
const int rs = 4;
const int en = 5;
const int d4 = 18;
const int d5 = 19;
const int d6 = 21;
const int d7 = 23;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// Keypad layout and pin connections
const byte ROWS = 4;
const byte COLS = 3;

char keys[ROWS][COLS] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'*', '0', '#'}
};

byte rowPins[ROWS] = {13, 12, 14, 27};
byte colPins[COLS] = {26, 25, 33};

Keypad keypad = Keypad(
  makeKeymap(keys),
  rowPins,
  colPins,
  ROWS,
  COLS
);

// Store keypad input until confirmation
String storedInput = "";

void setup() {
  Serial.begin(115200);

  lcd.begin(16, 2);
  lcd.print("Press a Key:");
}

void loop() {
  char key = keypad.getKey();

  if (key) {
    // '#' confirms the stored input
    if (key == '#') {
      Serial.println("Stored Input: " + storedInput);

      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Stored Input:");
      lcd.setCursor(0, 1);
      lcd.print(storedInput);

      storedInput = "";
    }
    else {
      // Store and display each pressed key
      storedInput += key;

      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Key Pressed:");
      lcd.setCursor(0, 1);
      lcd.print(key);
    }

    delay(500);
  }
}
