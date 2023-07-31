/*
  Author: 
  Learning Intention: The students will learn about the different data types used in the C++ language and how they can be converted for storage or computation
  Success Criteria:
    1. I understand and can store variables in the datatypes string, interger, float, longs and boolean
    2. I know how to access more information about the different datatypes in the documentation
    3. I Understand how (1, HIGH and true) and (0, LOW, false) all represent the same concept and can be used interchangeably in an INO sketch
    4. I can convert an integer, float and boolean to a string and print it in to the serial monitor
    5. I understand the difference between an int and an unsigned int or a long or an unsigned long
    6. I understand the difference between a global variable and a function variable 

  Student Notes: 
float can be seen as 1.1f however it just means float.
int is integer (any whole number both positive and negative)
bool- true or false, used in game design often to trigger an event
float- point floats along a line 
zero and false is interchangable, so is 1 and true
unsigned int- no negative numbers
  Documentation: 
    https://www.arduino.cc/reference/en/#variables
    https://www.arduino.cc/reference/en/language/variables/data-types/stringobject/
*/

int myInt = 5;
String myString ="5";
bool myBool = true;
float myFloat = 1.1;


void setup() {
Serial.begin(9600);
Serial.println("Serial Monitor is configured to 9600");
Serial.println("-----------------------------------");
Serial.print("Data stored: ");
myString = String(myInt);
Serial.println(myString);
}

void loop() {

}