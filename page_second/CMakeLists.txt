add_definitions(-DMODULE_LIBRARY)
add_library(page_second SHARED)
target_sources(page_second
PUBLIC FILE_SET CXX_MODULES FILES
  page_second.ixx
)

target_sources(page_second
    PRIVATE
    module_define.h
    page_second.cpp
    page_second.ui
    wobjectdefs.h
    wobjectimpl.h
    wobjectcpp.h
)
target_link_libraries(page_second Qt6::Core Qt6::Widgets Qt6::Gui)
