
add_library(bank_library STATIC Bank.cpp)

target_include_directories(bank_library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(bank_library client_library)