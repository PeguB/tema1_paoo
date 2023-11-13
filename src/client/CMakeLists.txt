add_library(client_library STATIC ClientPremium.cpp)

target_include_directories(client_library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
add_dependencies(client_library account_library)

target_link_libraries(client_library account_library)
