// base.scad

include <config.scad>

use <joystick.scad>
use <board.scad>

// calculations


module baseShell() {

  difference() {
  
      // shell
      translate([0, 0, baseHeight / 2])
	//color(alpha = 0.2)
	cylinder(h = baseHeight, d = baseDia, center = true, $fn = roundness);
      
      // outer grip
    translate([0, 0, baseHeight / 2])
      color("red")
      rotate_extrude(angle = 360, convexity = 10, $fn = roundness)
      translate([baseDia / 2, 0, 0])
      resize([gripDepth * 2, baseHeight - wallThickness * 2])
      circle(d = baseHeight, $fn = roundness);

    // hollow out
    translate([0, 0, baseHeight / 2 + wallThickness])
      //color(alpha = 0.2)
      cylinder(h = baseHeight, d = baseDia - gripDepth * 2 - wallThickness, center = true, $fn = roundness);
    }

  // lid stands
  rotate([0, 0, 45]) {
    difference() {
      translate([-baseDia / 2 + gripDepth + standDia / 2, 0, baseHeight / 2])
	cylinder(d = standDia, h = baseHeight, center = true, $fn = roundness);
      
      translate([-baseDia / 2 + gripDepth + standDia / 2, 0, baseHeight / 2])
	color("red")
	cylinder(d = insertDia, h = baseHeight + 0.2, center = true, $fn = roundness);  
    }
    
    difference() {
      translate([baseDia / 2 - gripDepth - standDia / 2, 0, baseHeight / 2])	
	cylinder(d = standDia, h = baseHeight, center = true, $fn = roundness);
      
      translate([baseDia / 2 - gripDepth - standDia / 2, 0, baseHeight / 2])
	color("red")
	cylinder(d = insertDia, h = baseHeight + 0.2, center = true, $fn = roundness);
    }
    
    difference() {
      translate([0, -baseDia / 2 + gripDepth + standDia / 2, baseHeight / 2])	
	cylinder(d = standDia, h = baseHeight, center = true, $fn = roundness);
      
      translate([0, -baseDia / 2 + gripDepth + standDia / 2, baseHeight / 2])
	color("red")
	cylinder(d = insertDia, h = baseHeight + 0.2, center = true, $fn = roundness);
    }
    
    difference() {
      translate([0, baseDia / 2 - gripDepth - standDia / 2, baseHeight / 2])
	cylinder(d = standDia, h = baseHeight, center = true, $fn = roundness);
      
      translate([0, baseDia / 2 - gripDepth - standDia / 2, baseHeight / 2])
	color("red")
	cylinder(d = insertDia, h = baseHeight + 0.2, center = true, $fn = roundness);
    }
  }
  
}

module base() {
  difference() {
    union() {
      baseShell();
      
      joystickMounts();
      
      microBoardMount();
    } // union
    microCutOut();
  } // difference
}

base();
