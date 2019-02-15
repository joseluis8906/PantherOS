cmake_minimum_required(VERSION 2.6)

Project(PantherOS)

include_directories(${PantherOS_SOURCE_DIR}/include)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

file(GLOB SOURCES "src/*.cpp")

find_package(PkgConfig)
pkg_check_modules(CAIROMM REQUIRED cairomm-1.0)
pkg_check_modules(LIBRSVGMM REQUIRED librsvgmm-2.0)

include_directories(${CAIROMM_INCLUDE_DIRS})
link_directories(${CAIROMM_LIBRARY_DIRS})

include_directories(${LIBRSVGMM_INCLUDE_DIRS})
link_directories(${LIBRSVGMM_LIBRARY_DIRS})

add_executable(PantherOS ${SOURCES})
add_definitions(${CAIROMM_CFLAGS_OTHER})
add_definitions(${LIBRSVGMM_CFLAGS_OTHER})
target_link_libraries(PantherOS ${CAIROMM_LIBRARIES} ${LIBRSVGMM_LIBRARIES})

