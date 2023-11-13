
add_library(account_library STATIC Account.cpp)

target_include_directories(account_library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})