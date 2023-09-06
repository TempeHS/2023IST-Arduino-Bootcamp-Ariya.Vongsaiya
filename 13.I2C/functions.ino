//Function to update OLED display
void printToOLED (theTemp, thePressure){
    u8g2.clearBuffer();                   // clear the internal memory
  u8g2.setFont(u8g2_font_ncenB08_tr);     // choose a suitable font
  u8g2.setCursor(0,10);                   //set cursor 
  u8g2.print("Hello World!");
   u8g2.setCursor(0,20);                   //set cursor to next line
  u8g2.print("The Temperature today is:");  //Print Today's temp onto OLED
 u8g2.print(theTemp);
 u8g2.print("C");
 
  u8g2.sendBuffer();                      // transfer internal memory to the display
}

float theTemp(){
return(bmp280.getTemperature());
}

float thePressure(){
return(bmp280.getPressure());
}
