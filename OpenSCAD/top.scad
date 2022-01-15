// top.scad

include <config.scad>


module topShell(center = true) {
  translate([0, 0, baseHeight])
    difference() {
    intersection() {
      
      resize([baseDia, baseDia, topHeight * 2])
	sphere(d = baseDia, center = center, $fn = roundness);
      
      translate([0, 0, topHeight / 2])
	cube([baseDia, baseDia, topHeight], center = true);
    }

    resize([baseDia - wallThickness, baseDia - wallThickness, topHeight * 2 - wallThickness])
        sphere(d = baseDia, center = center, $fn = roundness);
  }
}

module joyStickCutOut(center = true) {
  translate([0, 0, 15.9 + joystickZ])
    sphere(d = joystickDia + joystickGap, center = center, $fn = roundness);
  //cube([joystickDia, joystickDia, 0.1], center = true);
}

module top() {
  difference() {
    topShell();
    
    joyStickCutOut();
  }
}

top();
