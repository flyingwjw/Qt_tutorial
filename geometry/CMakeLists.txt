cmake_minimum_required(VERSION 3.8)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(RESOURCE_DIR)

find_package(Qt5 REQUIRED Widgets)
#qt5_wrap_cpp( MOC widget.h)
#qt5_wrap_ui( UIC widget.ui)
#qt5_add_resources(RCC resources.qrc)

add_executable(geometry main.cpp geometry.cpp${RESOURCE_DIR})

target_link_libraries(geometry Qt5::Widgets)

