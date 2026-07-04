/*
=========================================================
 Smart Water Level Monitoring and Alert System
 Arduino Uno + LCD + Potentiometer + LEDs + Buzzer
=========================================================
*/

#include <LiquidCrystal.h>

// LCD Pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// Analog Input
const int sensorPin = A0;

// LEDs
const int redLED = 9;
const int yellowLED = 10;
const int greenLED = 13;

// Buzzer
const int buzzer = 8;

// Variable
int waterLevel = 0;

void setup()
{
    pinMode(redLED, OUTPUT);
    pinMode(yellowLED, OUTPUT);
    pinMode(greenLED, OUTPUT);

    pinMode(buzzer, OUTPUT);

    Serial.begin(9600);

    lcd.begin(16, 2);

    lcd.print("Water Monitor");
    delay(2000);

    lcd.clear();
}

void loop()
{
    // Read Water Level
    waterLevel = analogRead(sensorPin);

    Serial.print("Water Level: ");
    Serial.println(waterLevel);

    // Display Level
    lcd.setCursor(0, 0);
    lcd.print("Level: ");
    lcd.print(waterLevel);
    lcd.print("    ");

    // LOW LEVEL
    if (waterLevel < 400)
    {
        digitalWrite(redLED, HIGH);
        digitalWrite(yellowLED, LOW);
        digitalWrite(greenLED, LOW);

        tone(buzzer, 1000);

        lcd.setCursor(0, 1);
        lcd.print("LOW WATER      ");
    }

    // MEDIUM LEVEL
    else if (waterLevel >= 400 && waterLevel < 700)
    {
        digitalWrite(redLED, LOW);
        digitalWrite(yellowLED, HIGH);
        digitalWrite(greenLED, LOW);

        noTone(buzzer);

        lcd.setCursor(0, 1);
        lcd.print("MEDIUM LEVEL   ");
    }

    // FULL LEVEL
    else
    {
        digitalWrite(redLED, LOW);
        digitalWrite(yellowLED, LOW);
        digitalWrite(greenLED, HIGH);

        noTone(buzzer);

        lcd.setCursor(0, 1);
        lcd.print("TANK FULL      ");
    }

    delay(1000);
}
