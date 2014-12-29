# Set a variable for commands below
set(PROJECT_NAME serial)

# Define your project and language
project(${PROJECT_NAME} C CXX)

set(${PROJECT_NAME}_BOARD nano328)

# Define the source code
set(${PROJECT_NAME}_SRCS serial.cpp)

# Define the port for uploading code to the Arduino
set(${PROJECT_NAME}_PORT COM8)

# Command to generate code arduino firmware (.hex file)
generate_arduino_firmware(${PROJECT_NAME})