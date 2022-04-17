aux_source_directory(. SRC)

add_definitions("-g -std=c++11")

add_executable(logger ${SRC})