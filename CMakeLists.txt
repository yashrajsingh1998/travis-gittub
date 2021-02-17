
cmake_minimum_required(VERSION 3.5.1)
include("./cmake/HunterGate.cmake")

HunterGate(
    URL "https://github.com/cpp-pm/hunter/archive/v0.23.294.tar.gz"
    SHA1 "0dd1ee8723d54a15822519c17a877c1f281fce39"
)


project(Sample LANGUAGES CXX)

hunter_add_package(Boost COMPONENTS system thread chrono)
find_package(Boost CONFIG REQUIRED system thread chrono)
add_executable(test1 
  main.cpp
) 



target_link_libraries(test1
    Boost::chrono
    Boost::system
    Boost::thread
    
)   
