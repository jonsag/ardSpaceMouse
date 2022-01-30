// joystick.scad

include <config.scad>

module joystickTop() {
  intersection() {

	translate([0, 0, 25.4])
	cube([27, 27, 19], center = true);
      
	  translate([-13.35, -13.35, 0])
	import("KY-034_Joystick-PTH.stl", convexity = 5);
	}
}


module joystickLegs() {
     intersection() {
    
    translate([0, 0, 2.22])
      cube([27, 27, 4.44], center = true);
    
    translate([-13.35, -13.35, 0])
      import("KY-034_Joystick-PTH.stl", convexity = 5);
  }
}

module joystickBody() {
  intersection() {
    
    translate([0, 0, 10.2])
      cube([27, 27, 11.5], center = true);
    
    translate([-13.35, -13.35, 0])
      import("KY-034_Joystick-PTH.stl", convexity = 5);
  }
}

module board() {
  translate([-12.73, -17.2, 3.65])
    color("red")
    import("joystick-breakout-v12.stl", convexity = 5);
}


module joystickMounts() {
  for(pos = joystickMountPos) {
    translate(pos) {
      difference() {
	cylinder(d1 = standBottomDia, d2 = standDia, h = joystickZ + wallThickness + 1, center = true, $fn = roundness);
      color("red")
      cylinder(d = insertDia, h = joystickZ +wallThickness + 1.2, center = true, $fn = roundness);
      }
    }
  }
}

module joystick_n_board() {
  //color("black")
  translate([0, 0, joystickZ]) {
    color("black")
      joystickTop();
    
    color("grey")
      joystickLegs();
    
    color("lightgreen")
      joystickBody();
    
    color("red")
      board();
  }
}

joystick_n_board();

joystickMounts();
