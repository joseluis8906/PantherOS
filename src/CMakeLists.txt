include_directories(${PantherOS_SOURCE_DIR}/include)

file(GLOB SOURCES "./*.cpp")

find_package(PkgConfig)
pkg_check_modules(CAIROMM REQUIRED cairomm-1.0)

include_directories(${CAIROMM_INCLUDE_DIRS})
link_directories(${CAIROMM_LIBRARY_DIRS})

add_executable(PantherOS ${SOURCES})
add_definitions(${CAIROMM_CFLAGS_OTHER})
target_link_libraries(PantherOS ${CAIROMM_LIBRARIES})
