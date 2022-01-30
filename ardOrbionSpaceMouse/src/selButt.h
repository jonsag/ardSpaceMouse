void selButt(int *e)
  {
  switch (EEPROM.read(*e))
      {
        case 36:
          Keyboard.press(32);          
        break;
  
        case 37:
          Keyboard.press(KEY_LEFT_CTRL);
        break;
  
        case 38:
          Keyboard.press(KEY_LEFT_SHIFT);
        break;
  
        case 39:
          Keyboard.press(KEY_LEFT_ALT);
        break;
  
        case 40:
          Keyboard.press(KEY_TAB);
        break;
  
        case 41:
          Keyboard.press(KEY_ESC);
        break;
  
        case 42:
          Keyboard.press(KEY_DELETE);
        break;

        case 43:
          Mouse.press(MOUSE_MIDDLE);
        break;

        case 44:
          Keyboard.press(KEY_LEFT_GUI);
          Mouse.press(MOUSE_MIDDLE);

        case 45:
          Keyboard.press(KEY_LEFT_CTRL);
          Mouse.press(MOUSE_MIDDLE);
        break;
      } 
  }