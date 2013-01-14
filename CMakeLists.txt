 
cmake_minimum_required (VERSION 2.8) 

project(blockbau)

include_directories (${blockbau_SOURCE_DIR}/src)


link_directories (${blockbau_SOURCE_DIR}/src)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall ")


find_package(SDL REQUIRED)
find_package(SDL_ttf REQUIRED)
find_package(SDL_image REQUIRED)
find_package(OpenGL REQUIRED)
find_package(LibXml2 REQUIRED)
find_package(Boost REQUIRED)

add_subdirectory (src) 

add_executable(blockbau src/blockbaumain.cpp)
target_link_libraries(blockbau blockbauobj xml2 SDL SDL_ttf GL GLU stdc++ assimp SDL_image)

