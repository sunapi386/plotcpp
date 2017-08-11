cmake_minimum_required(VERSION 2.8)

project( plotcpp )
find_package( OpenCV REQUIRED )
find_package(PythonLibs 2.7)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable( plotcpp main.cc )
target_link_libraries( plotcpp ${OpenCV_LIBS} )
target_link_libraries(plotcpp ${PYTHON_LIBRARIES})

add_executable( plot_rook plot_rook.cc )
target_link_libraries( plot_rook ${OpenCV_LIBS} )