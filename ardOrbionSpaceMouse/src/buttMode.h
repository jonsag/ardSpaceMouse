void buttMode(int *e)
  {
    int ex = LOW;
    int t = EEPROM.read(*e);
    delay(500);
    do
      {
        display.clearDisplay();
        display.setTextColor(WHITE);
        display.setTextSize(2);
        display.setCursor(10,10);
        display.println("SELECT FN");
        if (t <= 35)
          {
            display.setCursor(58,35);
            display.print(arButt[t]);
          }
        if (t == 36)
          {
            display.setCursor(36,35);
            display.print("Space");
          }
        if (t == 37)
          {
            display.setCursor(45,35);
            display.print("CTRL");
          }
        if (t == 38)
          {
            display.setCursor(37,35);
            display.print("Shift");
          }
        if (t == 39)
          {
            display.setCursor(48,35);
            display.print("Alt");
          }
        if (t == 40)
          {
            display.setCursor(48,35);
            display.print("Tab");
          }
        if (t == 41)
          {
            display.setCursor(49,35);
            display.print("Esc");
          }
        if (t == 42)
          {
            display.setCursor(49,35);
            display.print("Del");
          }
        if (t == 43)
          {
            display.setCursor(31,35);
            display.print("Scroll");
          }
        if (t == 44)
          {
            display.setCursor(10,35);
            display.print("Solid W/E");
          }
        if (t == 45)
          {
            display.setCursor(41,35);
            display.print("ANSA");
          }
        display.display();
        item = 46;
        rotaryMenu(&t, &item);
        if(digitalRead(butFun)==LOW)
          {
            ex = HIGH;
            EEPROM.update(*e, t);
          }
      }
    while (ex == LOW);
    delay(500);
  }