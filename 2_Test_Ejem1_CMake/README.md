# 2_Test_Ejem1_CMake

Sample project for C++ projects using CMake, google-test and goole-mock.

This project adds tests using google-test and google-mock.
The google-test and google-mock dependency is downloaded automatically from git.

## Prepare the build directory

```
mkdir build
cd build
cmake ../
```

## Compile

```
cmake --build . --target all
```
This compiles everything in the project, tests included.

## Compile and launch tests

```
cmake --build . --target compile_and_test
```
If only the tests are interesting for you, a target that compiles and launch them is added to the project.

## Launch tests

```
ctest
```
It is possible to launch the tests using the cmake **ctest**

The obtained output is different from the one expected for google-tests tests.

## Tests binaries

There are 2 tests binaries (under the build directory):
* *<build_dir>/tests/Tests*
* *<build_dir>/tests/complexTest*

Both can be executed and the typical google-test output is obtained.

## Project binary

The project includes a hello world executable that is compiled at:
* *<build_dir>/ejercicio1*

## Edit on Eclipse

Install [cmake4eclipse](https://github.com/15knots/cmake4eclipse) plugin in Eclipse CDT. Then import the project as it is already configured to work with the plugin.
