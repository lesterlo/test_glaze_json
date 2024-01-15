cmake_minimum_required(VERSION 3.20)  # CMake version check


# Setup building varaible
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin) # Output all the executable to ./bin directory
set(CMAKE_CXX_STANDARD 20)

# -----------------------------   Project Settings    -------------------------------------------------------

# project() need to be placed after all compiler settings
project(Test_glaze_json
    VERSION 0.01
    DESCRIPTION "Test the Glaze json library"
    LANGUAGES CXX 
) 

# Setup variable
set(EXE_NAME ${PROJECT_NAME}) # setup the executable output name



# include folder
include_directories(include)
include_directories(lib/glaze/include/) # include the glaze library



# Setup compile files
file(GLOB_RECURSE SOURCE_FILES  CONFIGURE_DEPENDS src/*.c src/*.cpp)# Add source files

# Building process
add_executable(${EXE_NAME} ${SOURCE_FILES}) # Make executable
target_link_libraries(${EXE_NAME})

