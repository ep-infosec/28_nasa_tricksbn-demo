# CMake snippet for building the host-side tools.
cmake_minimum_required(VERSION 2.6.4)
project(CFETOOLS C)

# Build these tools
add_subdirectory(small_tools)
add_subdirectory(cFS-GroundSystem/Subsystems/cmdUtil)
add_subdirectory(elf2cfetbl)

