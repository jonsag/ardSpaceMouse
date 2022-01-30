void menu(int* s, int* e, int* f)
  {
    switch (*s)
      {
        case 0:
          display.clearDisplay();
          display.setTextColor(WHITE);
          display.setTextSize(2);
          display.setCursor(11,25);
          display.println("Joy Sense");
          display.display();
          if(digitalRead(butFun)==LOW)
            {
              joySens();
            }
        break;

        case 1:
          display.clearDisplay();
          display.setTextColor(WHITE);
          display.setTextSize(2);
          display.setCursor(16,25);
          display.println("Joy Mode");
          display.display();
          if(digitalRead(butFun)==LOW)
            {
              joyMode();
            }
        break;

        case 2:
          display.clearDisplay();
          display.setTextColor(WHITE);
          display.setTextSize(2);
          display.setCursor(10,25);
          display.println("Knob Push");
          display.display();
          if(digitalRead(butFun)==LOW)
            {
              epr = 30;
              buttMode(&epr);
            }
        break;

        case 3:
          display.clearDisplay();
          display.setTextColor(WHITE);
          display.setTextSize(2);
          display.setCursor(10,25);
          display.println("Rear Push");
          display.display();
          if(digitalRead(butFun)==LOW)
            {
              epr = 20;
              buttMode(&epr);
            }
        break;

        case 4:
          display.clearDisplay();
          display.drawBitmap(0, 0, ext, 128, 64, WHITE);
          display.setTextColor(WHITE);
          display.setTextSize(1);
          display.setCursor(49,54);
          display.println("v0.25");
          display.display();
          if(digitalRead(butFun)==LOW)
            {
              *e = HIGH;
            }
        break;
      }
    *f = LOW;
  }