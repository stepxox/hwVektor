add_library(Point Point.cpp)

target_include_directories(Point PUBLIC include)

target_link_libraries(Point Vector)