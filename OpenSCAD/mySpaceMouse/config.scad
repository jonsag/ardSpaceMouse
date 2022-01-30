// config.scad

wallThickness = 2;

baseHeight = 25;
baseDia = 65;

gripDepth = 3;

standDia = 9;
insertDia = 5;
//standTopDia = 7;
standBottomDia = 11;

screwHoleDia = 3.5;
screwHeadDia = 5;

lidStandDia = screwHeadDia + wallThickness * 2;

topHeight = 10;

joystickZ = 14;
joystickDia = 26.7;
joystickGap = 1;

boardMountHeight = 5;
boardMountHoleDia = 3;

cutOutWidth =   12;
cutOutHeight = 5;

encoderHoleThick = 3;
encoderHoleDia = 7.5;

pcbThickness = 1.6;
pcbMountDia = 3.2;
pcbComponentDia = 0.8;

lidStandsPos = [[-baseDia / 2 + gripDepth + standDia / 2, 0, baseHeight / 2],
		[baseDia / 2 - gripDepth - standDia / 2, 0, baseHeight / 2],
		[0, -baseDia / 2 + gripDepth + standDia / 2, baseHeight / 2],
		[0, baseDia / 2 - gripDepth - standDia / 2, baseHeight / 2]];

joystickMountPos = [[-10.15, -14.65, joystickZ / 2 + 3.5 - wallThickness],
		    [10.15, -14.65, joystickZ / 2 + 3.5  - wallThickness],
		    [10.15, 12, joystickZ / 2 + 3.5 - wallThickness],
		    [-10.15, 12, joystickZ / 2 + 3.5 - wallThickness]];

buttonRodDia1 = 4;
buttonRodHeight1 = 5;

buttonRodDia2 = 6;
buttonRodHeight2 = 1;

buttonRodClearance = 0.5;

6mmHeight = 5.2;

buttonsPos = [[-baseDia / 2 + wallThickness + gripDepth + 6, 0, baseHeight + pcbThickness]];
buttonsRot = [[0, 0, -90],
	      [0, 0, 0],
	      [0, 0, 90]];

//buttonsPos = [[0, 0, 0]];
//buttonsRot = [[0, 0, 0]];

//buttonsPos = [[-baseDia / 2 + wallThickness + gripDepth + 6, -13, baseHeight],
//		  [-baseDia / 2 + wallThickness + gripDepth + 6, 0, baseHeight],
//		  [-baseDia / 2 + wallThickness + gripDepth + 6, 13, baseHeight]];

buttonBoardPoints = [[2.54, 0],
		  [7.62, 0],
		  [10.16, 6.985],
		  [10.16, 15.24],
		  [7.62, 22.225],
		  [2.54, 22.225],
		  [0, 15.24],
		  [0, 6.985]];

buttonBoardPos = [-10.16 / 2, -22.25 / 2, 0];

buttonMountPos = [[0, -14.859 / 2, 0],
                [0, 14.859 / 2, 0]];

domeDia = 23;
domeX = 12;
domeY = 23;
domeZ = 11;

domeZOffset = 5;

roundness = 100;
