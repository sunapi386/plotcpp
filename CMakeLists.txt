cmake_minimum_required(VERSION 2.8)
project( plotcpp )
find_package( OpenCV REQUIRED )
add_executable( plotcpp main.cc )
target_link_libraries( plotcpp ${OpenCV_LIBS} )

