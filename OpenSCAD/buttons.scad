// buttons.scad

include <config.scad>

include <../../myCAD/OpenSCADlibraries/NopSCADlib/vitamins/buttons.scad>

module 6mmButtons() {
  for(rot = buttonsRot) {
    rotate(rot)
      for(pos = buttonsPos) {
	translate(pos) {
	  square_button(button_6mm);
	  
	}
      }
  }
}

module buttonBoards() {
  for(rot = buttonsRot) {
    rotate(rot)
      translate([0, 0, -pcbThickness / 2])
      difference() {
      
      for(pos = buttonsPos) {
        translate(pos) {
          translate(buttonBoardPos)
            linear_extrude(height = pcbThickness, center = true, convexity = 10, twist = 0)
            polygon(points = buttonBoardPoints);
	}
      }
      
      for(pos = buttonsPos) {
	translate(pos) {
          for (pos = buttonMountPos)
            translate(pos)
              color("red")
              cylinder(d = pcbMountDia, h = pcbThickness + 0.2, center = true, $fn = roundness);
	}
      }
    }
  }
}

module buttonRods() {
  for(rot = buttonsRot) {
    rotate(rot)
      for(pos = buttonsPos) {
	translate(pos) {
	  translate([0, 0, 6mmHeight])
	    union() {
	    translate([0, 0, buttonRodHeight1 / 2 + buttonRodHeight2 / 2])
	      cylinder(h = buttonRodHeight1, d = buttonRodDia1, center = true, $fn = roundness);
	    
	    translate([0, 0, buttonRodHeight2 / 2])
	      cylinder(h = buttonRodHeight2, d = buttonRodDia2, center = true, $fn = roundness);
	    
	  }
	}
      }
  }
}

module domeSpace() {
      union() {
	domeSphere();
	domeBottom();
      }
    }

module buttonsCutOut() {
  for(rot = buttonsRot) {
    rotate(rot)
      for(pos = buttonsPos) {
	translate(pos) {
	  domeSpace();
	}
      }
  }
}

module domeSphere() {
      translate([0, 0, domeZOffset])
	resize([domeX, domeY, domeZ])
	sphere(d = domeDia, center = true, $fn = roundness);
    }


module domeBottom() {
      translate([0, 0, domeZOffset / 2])
	resize([domeX, domeY, domeZOffset])
	//linear_extrude(height = domeZ, center = true, convexity = 10)
	//circle(d = domeDia, $fn = roundness);
	cylinder(d = domeDia, h = domeDia, center = true, $fn = roundness);
    }

module domeHollow() {
      translate([0, 0, domeZOffset])
	resize([domeX - wallThickness, domeY - wallThickness, domeZ - wallThickness])
	sphere(d = domeDia, center = true, $fn = roundness);
    }

module domeShell() {
  union() {
    difference() {
      domeSphere();
      domeBottom();
      domeHollow();
      translate([0, 0, -1])
	domeBottom();
    }
    difference() {
      domeBottom();
      resize([domeX - wallThickness, domeY - wallThickness, domeZ])
	translate([0, 0, -0.01])
	domeBottom();
    }
  }
}

module rodCutOut() {
      translate([0, 0, domeZOffset + domeZ / 2 - buttonRodHeight1 / 2])
	cylinder(d = buttonRodDia1 + buttonRodClearance + wallThickness * 2, h = buttonRodHeight1, center = true, $fn = roundness);
    }

module rodGuide() {
      translate([0, 0, buttonRodHeight2 / 2 + 0.2])
	difference() {
	rodCutOut();
	
	translate([0, 0, domeZOffset + domeZ / 2 - buttonRodHeight1 / 2])
	  cylinder(d = buttonRodDia1 + buttonRodClearance, h = buttonRodHeight1 + 0.2, center = true, $fn = roundness);
      }
    }

module boardMounts() {
  for(rot = buttonsRot) {
    rotate(rot)
      translate([0, 0, (domeZOffset + domeZ / 2) / 2])
      for (pos = buttonMountPos) {
	translate(pos)
	  difference() {
	  cylinder(d = standDia, h =  domeZOffset + domeZ / 2, center = true, $fn = roundness);
	  color("red")
	    cylinder(d = insertDia, h =  domeZOffset + domeZ / 2 + 0.2, center = true, $fn = roundness);
	}
      }
  }
}

module dome() {
  for(rot = buttonsRot) {
    rotate(rot)
      for(pos = buttonsPos) {
	translate(pos) {
	  intersection() {
	    union() {
	      intersection() {
		union() {
		  difference() {
		    domeShell();
		    rodCutOut();
		  }
		  rodGuide();
		}
		domeSpace();
	      }
	      boardMounts();
	    }
	    domeSpace();
	  }
	}
      }
  }
}

module domeTest() {
  difference() {
  domeShell();
  rodCutOut();
  }
  rodGuide();
}

module buttons() {
  6mmButtons();
  buttonBoards();
}

domeTest();

//6mmButtons();
//board();

//buttonRod();

//domeSphere();
//domeBottom();
//domeSpace();

//domeShell();

//dome();

//buttonDome();

