cmake_minimum_required(VERSION 3.8)
project(PolymorphismTest)
set(CMAKE_CXX_STANDARD 17)
set(SOURCE_FILES
        main.cpp
        Normal.cpp
        VirturalBase.cpp
        VirturalConstBase.cpp
        ParameterPassing.cpp
        )
add_executable(PolymorphismTest ${SOURCE_FILES} )