// top.scad

include <config.scad>

use <buttons.scad>

module topBody() {
  difference() {
    resize([baseDia, baseDia, topHeight * 2])
      sphere(d = baseDia, center = true, $fn = roundness);
    
    translate([0, 0, -topHeight / 2])
      color("red")
      cube([baseDia, baseDia, topHeight], center = true);
  }
}

module topShell(center = true) {
  difference() {
    topBody();
    
    resize([baseDia - wallThickness, baseDia - wallThickness, topHeight * 2 - wallThickness])
      color("red")
      sphere(d = baseDia, center = center, $fn = roundness);
  }
}

module screwHolesCutOut() {
  rotate([0, 0, -45])
  for (pos = lidStandsPos) {
    translate(pos)
      translate([0, 0, -baseHeight / 2 + topHeight / 2])
    cylinder(d = lidStandDia, h = topHeight, center = true, $fn = roundness);
  }
}

module screwHoles() {
  intersection() {
    rotate([0, 0, -45])
      for (pos = lidStandsPos) {
	translate(pos)
	  translate([0, 0, -baseHeight / 2 + topHeight / 2])
	  difference() {
	  cylinder(d = lidStandDia, h = topHeight, center = true, $fn = roundness);
	  
	  color("red")
	    cylinder(d = screwHoleDia, h = topHeight + 0.2, center = true, $fn = roundness);
	  
	  translate([0, 0, wallThickness / 2 + 0.1])
	    color("red")
	    cylinder(d = screwHeadDia, h = topHeight - wallThickness + 0.2, center = true, $fn = roundness);
	}
      }
	topBody();
      
  }
}

module joyStickCutOut(center = true) {
  translate([0, 0, 15.9 + joystickZ])
    sphere(d = joystickDia + joystickGap, center = center, $fn = roundness);
  //cube([joystickDia, joystickDia, 0.1], center = true);
}

module top() {
  translate([0, 0, baseHeight])
    union() {
    difference() {
      topShell();

      translate([0, 0, -baseHeight])
      joyStickCutOut();

      translate([0, 0, -baseHeight])
      buttonsCutOut();

      //translate([0, 0, -baseHeight])
      screwHolesCutOut();
    }
    translate([0, 0, -baseHeight])
    dome();
    screwHoles();
  }
}

module topTest() {
    union() {
    difference() {
      topShell();

      translate([0, 0, -15.9 - joystickZ])
      joyStickCutOut();

      translate([0, 0, -baseHeight])
      buttonsCutOut();

      screwHolesCutOut();
    }
  }
    //translate([0, 0, -baseHeight])
    //dome();
    screwHoles();
}

top();

//dome();
 
//topBody();

//topShell();

//topTest();
