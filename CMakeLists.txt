cmake_minimum_required(VERSION 3.21)
project(tanki_lesta LANGUAGES CXX)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 2.6.x)
FetchContent_MakeAvailable(SFML)

add_executable(game src/tanki.cpp src/Background.cpp src/Bullet.cpp src/Enemy.cpp src/loadIMG.cpp src/movement.cpp src/object.cpp src/shoot.cpp src/Tank.cpp)
target_link_libraries(game PRIVATE sfml-graphics)
target_compile_features(game PRIVATE cxx_std_17)
if (WIN32 AND BUILD_SHARED_LIBS)
    add_custom_command(TARGET game POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_RUNTIME_DLLS:game> $<TARGET_FILE_DIR:game> COMMAND_EXPAND_LISTS)
endif()

install(TARGETS game)
