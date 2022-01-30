#include <Arduino.h>

//Author Mattia Russo aka FaqT0tum
//June 2021
//FREE FOR ANY NON COMMERCIAL PROJECT

#include "icon.h"
#include <EEPROM.h>
#include <Mouse.h>
#include <Keyboard.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH1106.h>                   // Comment if you use SSD1306
//#include <Adafruit_SSD1306.h>                // Uncomment if your oled is SSD1306

#include <config.h>

#define OLED_RESET 4
Adafruit_SH1106 display(OLED_RESET);           // Comment if you use SSD1306
//Adafruit_SSD1306 display(OLED_RESET);        // Uncomment if your oled is SSD1306


/////////////// Encoder ////////////////////



void setup()
  {

//////////////////////////////////////////////////////////////////////////// PIN //////////////////////////////////////

    pinMode(horzPin, INPUT_PULLUP);
    pinMode(vertPin, INPUT_PULLUP);
    pinMode(encBut, INPUT_PULLUP);
    pinMode(butFun, INPUT_PULLUP);
    pinMode (DT, INPUT);
    pinMode (CLK, INPUT);
    pinMode (joyButt, INPUT_PULLUP);

    YZero = analogRead(vertPin);
    XZero = analogRead(horzPin);
    scr = digitalRead(DT);

//////////////////////////////////////////////////////////////////////////// INITIALIZE ///////////////////////////////

    Mouse.begin();
    Keyboard.begin();

    display.begin(SH1106_SWITCHCAPVCC, 0x3C);             // Comment if you use SSD1306
    //display.begin(SSD1306_SWITCHCAPVCC, 0x3C);          // Uncomment if your oled is SSD1306

    display.setRotation(2);
    display.clearDisplay();
  }

#include <selButt.h>
#include <selModes.h>
#include <start.h>
#include <rotaryMenu.h>
#include <joySens.h>
#include <joyMode.h>
#include <buttMode.h>
#include <menu.h>

void loop()
  {
  //selSense(&sens);
  sens = arSens[EEPROM.read(0)];

  YValue = analogRead(vertPin) - YZero;
  XValue = analogRead(horzPin) - XZero;

//////////////////////////////////////////////////////////////////////////// SCROLL ///////////////////////////////////

  scr = digitalRead(DT);
  if ((encBef == LOW) && (scr == HIGH))
    {
    if (digitalRead(CLK) == LOW)
      {
        if (EEPROM.read(10) == 4)
            {
              Keyboard.press(KEY_LEFT_ALT);
            }
        Mouse.move(0, 0, -1);
      }
      else
        {
          if (EEPROM.read(10) == 4)
            {
              Keyboard.press(KEY_LEFT_ALT);
            }
          Mouse.move(0, 0, 1);
        }
    }
  encBef = scr;

//////////////////////////////////////////////////////////////////////////// REAR BUTTON ///////////////////////////////

  if ((digitalRead(butFun) == 0) && (butFunBef == 0))
    {
      butFunBef = 1;
      if (EEPROM.read(20) <=35)
        {
          Keyboard.press(arButt [EEPROM.read(20)]);
        }
      if (EEPROM.read(20) >=36)
        {
          epr = 20;
          selButt(&epr);
        }
    }
  else if (digitalRead(butFun) && (butFunBef))
    {
      butFunBef = 0;
      tim2 = millis() - h2;
      if (tim2 > 50)
        {
          h2 = millis();
          Mouse.release(MOUSE_MIDDLE);
          Keyboard.releaseAll();
        }
    }

//////////////////////////////////////////////////////////////////////////// CENTRAL BUTTON ///////////////////////////////
  Serial.println(encBefClick);
  if ((digitalRead(encBut) == 0) && (encBefClick == 0))
    {
      encBefClick = 1;
      if (EEPROM.read(30) <=35)
        {
          Keyboard.press(arButt [EEPROM.read(30)]);
        }
      if (EEPROM.read(30) >=36)
        {
          epr = 30;
          selButt(&epr);
        }
    }
  else if (digitalRead(encBut) && (encBefClick))
    {
      encBefClick = 0;
      tim2 = millis() - h2;
      if (tim2 > 50)
        {
          h2 = millis();
          Mouse.release(MOUSE_MIDDLE);
          Keyboard.releaseAll();
        }
    }

//////////////////////////////////////////////////////////////////////////// ORBIT & PAN //////////////////////////////
  if(EEPROM.read(10) == 0)
    {
      smooth = 0;
    }
  else
    {
      smooth = 30;
    }

  tim = millis() - h;
  if (tim > smooth)
    {
      h = millis();
      if ((YValue > offsetJoyY)||(YValue < (-offsetJoyY)))
        {
          selModes();
          Mouse.move(0, (invertMouseY * (YValue / sens)), 0);
          moved=1;
        }

      if ((XValue > offsetJoyX)||(XValue < (-offsetJoyX)))
        {
          selModes();
          Mouse.move((invertMouseX * (XValue / sens)), 0, 0);
          moved=1;
        }

      if ( (YValue <= offsetJoyY)&&(YValue >= (-offsetJoyY))  &&  (XValue <= offsetJoyX)&&(XValue >= (-offsetJoyX)))
        {
          if ( (digitalRead(encBut) == 1) && (digitalRead(butFun) == 1) || (EEPROM.read(10) == 4) )
            {
              Keyboard.releaseAll();
              tim1 = millis() - h1;
              if (tim1 > 120)
                {
                  h1 = millis();
                  Mouse.release(MOUSE_MIDDLE);
                  Mouse.release(MOUSE_LEFT);
                }
            }

        }
     }


//////////////////////////////////////////////////////////////////////////// MAIN /////////////////////////////////////


  if(first == LOW)
    {
      start(&first);
    }
  if(digitalRead(joyButt) == LOW)
    {
      delay(300);
      Keyboard.releaseAll();
      Mouse.release(MOUSE_MIDDLE);
      Mouse.release(MOUSE_LEFT);
      Mouse.release(MOUSE_RIGHT);
      do
        {
          item = 5; //////////////////// item main menu
          rotaryMenu(&sel, &item);
          menu(&sel, &exi, &first);
        }
      while (exi==LOW);
      delay(300);
    }
  exi = LOW;
  sel = 0;
  }
