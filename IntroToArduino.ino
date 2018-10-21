/*
  Description: A program to show how code works on the Arduino

  Written by: Riyadth Al-Kazily

  This program is written in several steps, to show how a program
  will evlolve and change over time.
*/

// Include a library to communicate with colorful LEDs
#include <Adafruit_NeoPixel.h>

// Name some constant values to make them easy to remember
// Note that this is a different way than declaring an integer (below)
#define NEOPIXEL_PIN            6
#define NUMBER_OF_PIXELS        8

// Tell the computer about the arrangement and type of the pixels we are using
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMBER_OF_PIXELS, NEOPIXEL_PIN,
                                             NEO_GRB + NEO_KHZ800);

int sensorPin = A0;     // A pin connected to a potentiomenter
int sensorValue;        // A place to store the value from the potentiometer

void setup()
{
    // Code placed here will run one time when the Arduino is started

    // Configure the Arduino to make a pin output a voltage
    pinMode(LED_BUILTIN, OUTPUT);

    // Initialize the pixels to get them ready for use
    pixels.begin();
}

void loop()
{
    // Code placed here will run over and over forever

    // Read the voltage value on the sensor input pin
    sensorValue = analogRead(sensorPin);

    // Turn on the LED connected to the pin by providing voltage
    digitalWrite(LED_BUILTIN, HIGH);

    // Call a function to turn on the pixels
    turn_on_pixels();

    // Wait for a short time based on the sensor value
    delay(sensorValue);

    // Turn off the LED by turning off the voltage
    digitalWrite(LED_BUILTIN, LOW);

    // Call a function to turn off the pixels
    turn_off_pixels();

    // Wait for a short time based on the sensor value
    delay(sensorValue);

}

void turn_on_pixels()
{
    // Turn on one NeoPixel
    pixels.setPixelColor(0, pixels.Color(0, 150, 0));
    pixels.show();
}

void turn_off_pixels()
{
    // Turn off the NeoPixel
    pixels.setPixelColor(0, pixels.Color(0, 0, 0));
    pixels.show();
}
