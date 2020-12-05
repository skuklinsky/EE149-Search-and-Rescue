# MouseCommand

# Constants
uint8 POSITION=0
# x = desired x coordinate
# y = desired y coordinate
# ang = desired angle

uint8 PUSH=1
# x = desired velocity

uint8 HOME=2
# y = desired y offset

uint8 VELOC=3
# x = desired velocity
# ang = desired angular velocity

# TODO add more as needed

# Data
uint8 type
float32 x
float32 y
float32 ang
# TODO add more as needed

# compass angle is referenced in standard way with 0 being facing in the X-axis