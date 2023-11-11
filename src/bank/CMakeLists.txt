
add_library(bank_library STATIC Bank.cpp Bank.Hpp)

target_include_directories(bank_library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
