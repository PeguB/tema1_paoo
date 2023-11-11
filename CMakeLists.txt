cmake_minimum_required(VERSION 3.0)


project(MyProject VERSION 1.0)

if(CMAKE_VERSION GREATER "3.1.2") 
    set(CMAKE_CXX_STANDARD 14)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)
    set(CMAKE_CXX_EXTENSIONS OFF)
else()
    if(CMAKE_COMPILER_IS_GNUCXX)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
    endif()    
endif() 
add_subdirectory(./src/bank)
add_subdirectory(./src/client)

add_executable(my_program 
            ./src/main.cpp)
target_link_libraries(my_program client_library bank_library)