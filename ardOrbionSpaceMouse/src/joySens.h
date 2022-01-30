void joySens()
  {
  int ex2 = LOW;
  int t = EEPROM.read(0);
  delay(500);
  do
    {
    display.clearDisplay();
    display.setTextColor(WHITE);
    display.setTextSize(2);
    display.setCursor(10,10);
    display.println("Joy Sense");
    display.setCursor(56,35);
    display.print(t+1);
    display.display();
    item = 5;
    rotaryMenu(&t, &item);
    if(digitalRead(butFun)==LOW)
      {
      ex2=HIGH;
      EEPROM.update(0, t);
      }
    }
  while (ex2==LOW);
  delay(500);
  ex2=LOW;
  }