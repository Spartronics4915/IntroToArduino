/*
  Description: A program to show how code works on the Arduino

  Written by: Riyadth Al-Kazily

  This program is written in several steps, to show how a program
  will evlolve and change over time.
*/

int sensorPin = A0;     // A pin connected to a potentiomenter
int sensorValue;        // A place to store the value from the potentiometer

void setup()
{
    // Code placed here will run one time when the Arduino is started

    // Configure the Arduino to make a pin output a voltage
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
    // Code placed here will run over and over forever

    // Read the voltage value on the sensor input pin
    sensorValue = analogRead(sensorPin);

    // Turn on the LED connected to the pin by providing voltage
    digitalWrite(LED_BUILTIN, HIGH);

    // Wait for a short time based on the sensor value
    delay(sensorValue);

    // Turn off the LED by turning off the voltage
    digitalWrite(LED_BUILTIN, LOW);

    // Wait for a short time based on the sensor value
    delay(sensorValue);

}
