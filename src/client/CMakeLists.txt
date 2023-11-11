add_library(client_library STATIC Client.hpp ClientPremium.cpp ClientPremium.hpp)

target_include_directories(client_library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
