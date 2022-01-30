int DT = 7;       // Pin  Detect                           <------------
int CLK = 6;      // Pin  Clockwise                        <------------
int encBut = 5;    //Pin encoder Button                    <------------

int encBef = LOW;
int scr = LOW;
int encBefClick = 0;

/////////////// JoyStick ///////////////////

int horzPin = A2;         // Pin Analog output of X        <------------
int vertPin = A1 ;        // Pin Analog output of Y        <------------
int joyButt = 15;         // Pin Joystick Button           <------------

int moved = 0;
int YZero, XZero;
int YValue, XValue;
int sens = 0;
int arSens[5] = {125,100,85,60,35};
int used = 0;
int lastused = 0;
int offsetJoyX = 15;    // set this value if the joystick moves by itself
int offsetJoyY = 15;    // set this value if the joystick moves by itself

unsigned long tim, h, tim1, h1, tim2, h2;

/////////////// Rear Button  ///////////////

int butFun = 14;   // Pin rear button                      <------------
int butFunBef = 0;
char arButt [36] = {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m','1','2','3','4','5','6','7','8','9','0'};
char cb;

/////////////// Mouse Axis ///////////////////////

int invertMouseX = -1;
int invertMouseY = 1;
int inv = 0;
int smooth = 0;

/////////////// MENU ////////////////////////

int reset = LOW;
int sel = 0;
int exi = LOW;
int first = LOW;
int item = 0;
int on = 1;
int epr = 0;