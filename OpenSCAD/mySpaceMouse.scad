// mySpaceMouse.scad

include <config.scad>

use <base.scad>
use <joystick.scad>
use <top.scad>
use <board.scad>

showBase = true;
showTop = true;

showJoystick = true;
showBoard = true;

print = false;

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

if(showTop) {
  if(!print) {
    top();
  } else {
    translate([baseDia + 5, 0, -baseHeight])
      top();
  }
 }
