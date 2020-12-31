cmake_minimum_required(VERSION 3.10.0)

set(PROJ vtkQt6)
project(${PROJ}) # version 2020.12.1)
include(CTest)
enable_testing()


#********** include Qt *****************
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

#*** Your path to Qt6 below
set(CMAKE_PREFIX_PATH "/Users/sekar/Programs/Qt/6.0.0/clang_64/")

find_package(OpenGL)
find_package(Qt6 COMPONENTS Core GUI OpenGL Widgets Xml REQUIRED)


#********** include Vtk *****************
#*** Your path to VTK below
set(VTK_DIR "/Users/sekar/Programs/vtk/build/")
find_package(VTK REQUIRED)


#********** include Project code
set(FORMS_DIR "${CMAKE_SOURCE_DIR}/forms")
set(INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include")
set(SOURCE_DIR "${CMAKE_SOURCE_DIR}/src")
include_directories(${FORMS_DIR})
include_directories(${INCLUDE_DIR})
include_directories(${SOURCE_DIR})

# get all the files
file(GLOB_RECURSE SOURCES
  "${FORMS_DIR}/*.ui"
  "${INCLUDE_DIR}/*.h"
  "${SOURCE_DIR}/*.cpp"
)

# enhance search paths to our code
set(CMAKE_AUTOUIC_SEARCH_PATHS ${CMAKE_AUTOUIC_SEARCH_PATHS} ${FORMS_DIR})


#********* executable *****************
if (WIN32)
  # no cmd line on windows
  add_executable(${PROJ} WIN32 ${SOURCES})
else()
  add_executable(${PROJ} ${SOURCES})
endif()
add_test(NAME ${PROJ}Test1 COMMAND ${PROJ})


#********** target includes *****************
target_include_directories(${PROJ} PRIVATE ${FORMS_DIR} ${INCLUDE_DIR} ${SOURCE_DIR})


#********** libraries for linking *****************
target_link_libraries(${PROJ} Qt6::OpenGL Qt6::Widgets Qt6::Xml)
target_link_libraries(${PROJ} ${QT_LIBRARIES} ${OPENGL_LIBRARIES})
target_link_libraries(${PROJ} ${VTK_LIBRARIES})
