cmake_minimum_required(VERSION 3.12)

SET( CONFIG_FILEPATH ${CMAKE_SOURCE_DIR}/cmake/config.cmake)

include("./cmake/HunterGate.cmake")
HunterGate(
	URL "https://github.com/saichaitanyaeruvaram/hunter/archive/opencv-4.5.0.tar.gz"
        SHA1 "1258e48a1c06ce027b6d3aa141c7f9661ff0d843"
	FILEPATH ${CONFIG_FILEPATH}
  )
project(Sample LANGUAGES CXX)


hunter_add_package(Boost COMPONENTS system thread chrono)
find_package(Boost CONFIG REQUIRED system thread chrono)

hunter_add_package(OpenCV)
find_package(OpenCV)


add_executable(test 

  resize.cpp
  
)

target_link_libraries(test
    Boost::filesystem
    ${OpenCV_LIBS}
)   
