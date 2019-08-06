define laser ranger(
	sensor(
		range [0.0 5.6]
		fov 240.0
		samples 240
	)

	color "blue"
	size [0.06 0.06 0.06]

	block(
		points 4
		point[3] [0 0]
		point[2] [0 1]
		point[1] [1 1]
		point[0] [1 0]
		z [0 1]
	)
)

define body actuator(
	
	block(
		points 4
		point[0] [0 0]
		point[1] [0 1]
		point[2] [1 1]
		point[3] [1 0]
		z [0 1]
		
	)
	size [0.5 0.5 0.5]
	color "yellow"
)

define neck actuator(
	
	block(
		points 4
		point[0] [0 0]
		point[1] [0 0.11]
		point[2] [0.11 0.11]
		point[3] [0.11 0]
		z [0.09 0.13]
		
	)
	size [0.2 0.2 0.2]
	color "black"
)

define head actuator(
	
	block(
		points 7
		point[0] [0.015 0]
		point[1] [0 0.1]
		point[2] [0.1 0.1]
		point[3] [0.085 0]
		point[4] [0.065 0]
		point[5] [0.05 0.05]
		point[6] [0.035 0]
		z [0.229999 0.245]
		
	)
	size [0.40 0.40 0.109]
	color "gray"
)

define armL actuator(
	
	block(
		points 4
		point[0] [0 0]
		point[1] [0 0.25]
		point[2] [0.1 0.25]
		point[3] [0.1 0]
		z [0 1]
		
	)
	size [0.20 0.40 0.109]
	color "black"
)

define armR actuator(
	
	block(
		points 4
		point[0] [0 0]
		point[1] [0 0.25]
		point[2] [0.1 0.25]
		point[3] [0.1 0]
		z [0 1]
		
	)
	size [0.20 0.40 0.109]
	color "black"
)




define simple_robot position(
	odom_error [0.03 0.03 0.00 0.05]
	localization "odom"
	size [0.5 0.5 0.20]
	gui_nose 1

	body(pose [0.0 0.0 -0.02 0.0])
	neck(pose [0.0 0.0 0.05 0.0])
	head(pose [0.0 0.0 -0.95 90.0])
	armL(pose [0.0 0.30 0.25 90.0])
	armR(pose [0.0 -0.30 0.25 90.0])
	laser(pose [0.25 0.0 0.15 0.0])

	block(
		points 4
		point[0] [0 0]
		point[1] [0 0.05]
		point[2] [0.3 0.05]
		point[3] [0.3 0]
		z [0 0.09]

	)
	
	block(
		points 4
		point[0] [0 0.15]
		point[1] [0 0.2]
		point[2] [0.3 0.2]
		point[3] [0.3 0.15]
		z [0 0.09]
	)
	
	drive "diff"
	color "black"
	
)
