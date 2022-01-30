// mySpaceMouse.scad

include <config.scad>

use <base.scad>
use <joystick.scad>
use <top.scad>
use <board.scad>
use <buttons.scad>
use <encoder.scad>

showBase = true;
showTop = false;
showButtonRods = false;
showEncoderWheel = false;

showJoystick = true;
showBoard = true;
showButtons = false;
showEncoder = true;

print = true;

//color(alpha = 0.2)
if(showBase) {
  base();
 }

if(showJoystick && !print) {
  joystick_n_board();
  //joystickMounts();
 }

if(showBoard && !print) {
  board();
  //microBoardMount();
 }

if(showButtons && !print) {
  buttons();
  //microBoardMount();
 }

if(showEncoder && !print) {
  encoder();
  //microBoardMount();
 }

if(showTop) {
  if(!print) {
    top();
  } else {
    translate([baseDia + 5, 0, -baseHeight])
      top();
  }
 }

if(showEncoderWheel) {
  if(!print) {
    encoderWheel();
  } else {
    translate([0, -baseDia, baseHeight * 2])
      rotate([-90, 0, 0])
      encoderWheel();
  }
 }

if(showButtonRods) {
  if(!print) {
    buttonRods();
  } else {
    
    translate([-baseDia, 0, -baseHeight - buttonRodHeight1 - buttonRodHeight2])
      buttonRods();
  }
 }
