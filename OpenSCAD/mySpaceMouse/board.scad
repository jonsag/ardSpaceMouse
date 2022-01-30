// board.scad

include <config.scad>

module micro() {
  color("blue")
    translate([-17.75 / 2, -33 / 2, 0.8])
    import("Pro_Micro.stl", , convexity = 5);
}

module microBoardMount() {
  translate([-baseDia / 2 + wallThickness + gripDepth + 33 / 2 + 1.5, -1.5, wallThickness + boardMountHeight])
    rotate([0, 0, 90])
    translate([0, 0, -boardMountHeight / 2])
    difference() {
    cube([17.75, 33, boardMountHeight], center = true);
    for(i = [1 : 1 : 4]) {
      translate([0, -33 / 2 + i * 33 / 5, -boardMountHeight / 2 + boardMountHoleDia / 2])
	rotate([0, 90, 0])
	cylinder(d = boardMountHoleDia, h = 17.75 + 0.2, center = true, $fn = roundness);
    }
  }
}

module microCutOut() {
  translate([-baseDia / 2 + wallThickness + gripDepth + 33 / 2 + 1.5, -1.5, wallThickness + boardMountHeight])
    rotate([0, 0, 90])
    translate([0, 33 / 2 + (wallThickness + gripDepth) / 2 + 1.5, 2.85])
    union() {
    cube([cutOutWidth - cutOutHeight, wallThickness + gripDepth, cutOutHeight], center = true);
    translate([-(cutOutWidth - cutOutHeight) / 2, 0, 0])
      rotate([90, 0, 0])
      cylinder(d = cutOutHeight, h = wallThickness + gripDepth, center = true, $fn = roundness);
    translate([(cutOutWidth - cutOutHeight) / 2, 0, 0])
      rotate([90, 0, 0])
      cylinder(d = cutOutHeight, h = wallThickness + gripDepth, center = true, $fn = roundness);
  }
}

module board() {
  translate([-baseDia / 2 + wallThickness + gripDepth + 33 / 2 + 1.5, -1.5, wallThickness + boardMountHeight])
    rotate([0, 0, 90])
    micro();
}


board();

microBoardMount();

microCutOut();
