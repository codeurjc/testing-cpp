# CMake generated Testfile for 
# Source directory: /home/mica/Data/elastest-code/testing-cpp/2_Test_Ejem1_CMake/tests
# Build directory: /home/mica/Data/elastest-code/testing-cpp/2_Test_Ejem1_CMake/build/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test "/home/mica/Data/elastest-code/testing-cpp/2_Test_Ejem1_CMake/build/tests/Tests")
add_test(complexTest "/home/mica/Data/elastest-code/testing-cpp/2_Test_Ejem1_CMake/build/tests/complexTest")
subdirs(../googletest-build)
