/*
  Author: Ariya Vongsaiya
  Learning Intention: The students will learn what 'pulse width modulation' is and how to use it to write analogue data on a digital PIN.
  Success Criteria:
    1. I understand what pulse width modulation is
    2. I can identify the PWM PINS on the Arduino Uno
    3. I can wire an RGB LED for PWM control in TINKERCAD
    5. I can write PWM data to multiple pins and manually change the colour of the LED

  Student Notes: 
  Follow steps to limit mistakes:
  1. Configure serial monitor
  2. Debug Serial monitor
  3. check if it prints onto serial monitor
  Value range for PWM 0-255
  Documentation: 
    https://www.w3schools.com/colors/colors_rgb.aspt
  Schematic:
    https://www.tinkcad.com/things/drNDsMxGMIY?sharecode=D6x4_xTTRl_zGs7B-XGqfbQhG_xgjj3TVS_c-GNTK-c
    https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/06.pulseWidthModulation/Bootcamp-PWMOutput.png
*/
unsigned static int lightSensor = A0; 
unsigned static int myLED = 5;

void setup() {
Serial.begin(9600); 
Serial.println("Serial monitor configured to 9600");
Serial.println("--------------------------------");
pinMode(myLED, OUTPUT);
}

void loop() {
int val = analogRead(lightSensor);
Serial.print("LightSensor:");
Serial.println(val);
int LEDbright = val/4; 
analogWrite(myLED, LEDbright);
}