void rotaryMenu(int* s, int* i)
  {
    if((digitalRead(DT) == HIGH) && (digitalRead(CLK) == LOW) && (reset == LOW))
      {
        if(*s<=(*i-2))
          {
            *s = *s +1;
          }
        reset = HIGH;
      }
    if((digitalRead(DT) == LOW) && (digitalRead(CLK) == HIGH) && (reset == LOW))
      {
        if((*s<=(*i-1)) && (*s>0)) //set number of item
          {
            *s = *s -1;
          }
        else
          {
            *s=0;
          }
        reset = HIGH;
      }
    if(digitalRead(DT) && digitalRead(CLK))
      {
        reset = LOW;
      }
  }