include(CTest)

set(UPDATE_DISCONNECTED_IF_AVAILABLE "UPDATE_DISCONNECTED 1")

include(DownloadProject.cmake)
download_project(PROJ                googletest
                 GIT_REPOSITORY      https://github.com/google/googletest.git
                 GIT_TAG             master
                 ${UPDATE_DISCONNECTED_IF_AVAILABLE}
)

# Prevent GoogleTest from overriding our compiler/linker options
# when building with Visual Studio
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})

include_directories("${gtest_SOURCE_DIR}/include"
                    "${gmock_SOURCE_DIR}/include")

# Trivial example using gtest and gmock
# add_executable(Tests example.cpp)

#target_link_libraries(Tests LINK_PUBLIC gtest gmock_main)
#add_test(NAME test COMMAND Tests)

include_directories ("${PROJECT_SOURCE_DIR}/src")

add_executable(chatTest ChatTest.cpp)
target_link_libraries(chatTest LINK_PUBLIC gtest gmock_main chat)
add_test(NAME chatTest COMMAND chatTest)

set(TESTS_NAMES chatTest)
add_custom_target(compile_and_test COMMAND ${CMAKE_CTEST_COMMAND}
                  DEPENDS ${TESTS_NAMES})
