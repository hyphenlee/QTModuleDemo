cmake_minimum_required(VERSION 3.28.0)
project(test VERSION 1.0.0 LANGUAGES C CXX)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)
find_package(Qt6 REQUIRED COMPONENTS Quick Core Widgets)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
add_compile_options(/utf-8 )
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")

add_executable(test)
target_sources(test 
  PUBLIC FILE_SET CXX_MODULES FILES
  module1.cppm  # both cppm/ixx worked
  module2.ixx
)
target_sources(test
  PRIVATE
  module2.cpp
  main_window.cpp
  main_window.ui
  main.cpp 
  OldClass.h
  OldClass.cpp
  main_window.h
)
target_link_libraries(test
  Qt6::Core
  Qt6::Gui
  Qt6::Widgets
  module3
)

subdirs(module3)
