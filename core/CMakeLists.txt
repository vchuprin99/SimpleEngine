cmake_minimum_required(VERSION 3.25)

project(core)

set(PUBLIC_INCLUDES
	include/application.h
	include/window.h
	include/log.h
)
set(PRIVATE_INCLUDES

)
set(PRIVATE_SOURCES
	src/application.cpp
	src/window.cpp
)

add_library(core
	${PUBLIC_INCLUDES}
	${PRIVATE_INCLUDES}
	${PRIVATE_SOURCES}
)
target_include_directories(core PUBLIC include)
target_include_directories(core PRIVATE src)

add_subdirectory(external/glfw)
target_link_libraries(core PRIVATE glfw)
add_subdirectory(external/glad)
target_link_libraries(core PRIVATE glad)
add_subdirectory(external/spdlog)
target_link_libraries(core PUBLIC spdlog)

set_property(TARGET core PROPERTY CXX_STANDARD 20)