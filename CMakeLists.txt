cmake_minimum_required(VERSION 3.12)
project(project-foobar)

set_property(GLOBAL PROPERTY CXX_STANDARD 17)

set_property(GLOBAL PROPERTY GLOBAL_DEPENDS_NO_CYCLES ON)

add_executable(foobar main.cpp)
target_link_libraries(foobar PUBLIC a b c)

add_library(a a.h a.cpp)
add_library(b b.h b.cpp)
add_library(c c.h c.cpp)
target_link_libraries(a PUBLIC c)
target_link_libraries(b PUBLIC a)
target_link_libraries(c PUBLIC a b)
