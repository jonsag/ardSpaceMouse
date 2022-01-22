// encoder.scad

include <config.scad>

include <../../myCAD/OpenSCADlibraries/NopSCADlib/core.scad>
include <../../myCAD/OpenSCADlibraries/NopSCADlib/utils/layout.scad>
include <../../myCAD/OpenSCADlibraries/NopSCADlib/vitamins/potentiometers.scad>

use <TheKnobMaker.scad>

module encoderBody() {
  rotate([0, 0, 90])
    translate([baseDia / 2 - wallThickness - gripDepth, 0, baseHeight / 2])
    rotate([0, -90, 0]) {
    potentiometer(KY_040_encoder);
    translate_z(- encoderHoleThick)
      pot_nut(KY_040_encoder, washer = true);
  }
}

module encoderCutOut() {
  rotate([0, 0, 90])
  translate([baseDia / 2 - wallThickness - gripDepth + encoderHoleThick / 2, 0, baseHeight / 2])
    cube([encoderHoleThick, 15, baseHeight], center = true);
}

module encoderMount() {
  rotate([0, 0, 90])
  translate([baseDia / 2 - wallThickness - gripDepth + encoderHoleThick / 2, 0, baseHeight / 2])
    difference() {
    cube([encoderHoleThick, 15, baseHeight], center = true);

    color("red")
    rotate([0, 90, 0])
      cylinder(d = encoderHoleDia, h = encoderHoleThick + 0.2, center = true, $fn = roundness);
  }
}

module encoderWheel() {
  translate([0, baseDia / 2 - wallThickness - gripDepth + 15, baseHeight / 2])
  rotate([-90, 0, 0])
    knobMaker();
}

module encoder() {
  encoderBody();
}

encoderBody();
encoderMount();
encoderWheel();
