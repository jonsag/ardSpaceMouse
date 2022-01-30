  void start(int* f)
  {
    int i = 0;
    if(on == 1)
      {
        do
          {
            display.clearDisplay();
            display.drawBitmap(0, 0, faq, 12*i, 6*i, WHITE);
            display.display();
            i++;
          }
        while(i != 20);
        on = 0;
      }
    display.clearDisplay();
    display.drawBitmap(0, 0, faq, 128, 64, WHITE);
    display.display();
    *f=1;
  }