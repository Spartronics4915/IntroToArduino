/*
  Description: A program to show how code works on the Arduino

  Written by: Riyadth Al-Kazily

  This program is written in several steps, to show how a program
  will evlolve and change over time.
*/

void setup()
{
    // Code placed here will run one time when the Arduino is started

    // Configure the Arduino to make a pin output a voltage
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
    // Code placed here will run over and over forever

    // Turn on the LED connected to the pin by providing voltage
    digitalWrite(LED_BUILTIN, HIGH);

    // Wait for a short time (1000 milliseconds, or 1 second)
    delay(1000);

    // Turn off the LED by turning off the voltage
    digitalWrite(LED_BUILTIN, LOW);

    // Wait for a short time (1000 milliseconds, or 1 second)
    delay(1000);

}
