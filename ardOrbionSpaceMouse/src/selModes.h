 void selModes()
  {
  switch (EEPROM.read(10))
    {
      case 0:
        //mouse mode
      break;

      case 1:
        //Autodesk
        Keyboard.press(KEY_LEFT_SHIFT);
        Mouse.press(MOUSE_MIDDLE);
      break;

      case 2:
        //Solid Work/Edge
        Mouse.press(MOUSE_MIDDLE);
      break;

      case 3:
        //Blender
        Keyboard.press(KEY_LEFT_SHIFT);
        Keyboard.press(KEY_LEFT_ALT);
        Mouse.press(MOUSE_MIDDLE);
      break;

      case 4:
        //Adobe
        Keyboard.press(32);
        Mouse.press(MOUSE_LEFT);
      break;

      case 5:
        //Freecad
        Mouse.press(MOUSE_MIDDLE);
        Mouse.press(MOUSE_RIGHT);
      break;

      case 6:
        //Rhino
        Mouse.press(MOUSE_RIGHT);
      break;

      case 7:
        //ZBrush
        Mouse.press(MOUSE_LEFT);
      break;

      case 8:
        //ANSA
        Keyboard.press(KEY_LEFT_CTRL);
        Mouse.press(MOUSE_LEFT);
      break;

      case 9:
        //Onshape
        Mouse.press(MOUSE_RIGHT);
        break;
    }  
  }