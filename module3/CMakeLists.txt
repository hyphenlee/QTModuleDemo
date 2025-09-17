add_definitions(-DMODULE_LIBRARY)
add_library(module3 SHARED)
target_sources(module3 
PUBLIC FILE_SET CXX_MODULES FILES
  module3.ixx
)

target_sources(module3
    PRIVATE
    module_define.h
    module3.cpp
)
