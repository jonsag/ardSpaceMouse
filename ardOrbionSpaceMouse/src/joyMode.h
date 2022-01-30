void joyMode()
  {
    int t = EEPROM.read(10);
    int ex = LOW;
    delay(500);
    do
      {
        display.clearDisplay();
        display.setTextColor(WHITE);
        display.setTextSize(2);
        display.setCursor(16,10);
        display.println("Joy Mode");
        if(t == 0)
          {
            display.setCursor(33,35);
            display.print("Mouse");
          }
        if(t == 1)
          {
            display.setCursor(17,35);
            display.print("Autodesk");
          }
        if(t == 2)
          {
            display.setCursor(10,35);
            display.print("Solid W/E");
          }
        if(t == 3)
          {
            display.setCursor(23,35);
            display.print("Blender");
          }
        if(t == 4)
          {
            display.setCursor(33,35);
            display.print("Adobe");
          }
        if(t == 5)
          {
            display.setCursor(23,35);
            display.print("FreeCad");
          }
        if(t == 6)
          {
            display.setCursor(33,35);
            display.print("Rhino");
          }
        if(t == 7)
          {
            display.setCursor(28,35);
            display.print("ZBrush");
          }
        if(t == 8)
          {
            display.setCursor(41,35);
            display.print("ANSA");
          }
        if(t == 9)
          {
            display.setCursor(23,35);
            display.print("Onshape");
          }
        display.display();
        item = 10;                     //number of modes
        rotaryMenu(&t, &item);
        Serial.println(t);
        if(digitalRead(butFun)==LOW)
          {
            ex = HIGH;
            EEPROM.update(10, t);
          }
      }
    while (ex == LOW);
    delay(500);
  }