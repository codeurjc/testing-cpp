# cmake-google-test-skeleton

Skeleton for C++ projects using CMake and google-test.

This project adds tests using google-test and google-mock.
The google-test and google-mock dependency is downloaded automatically from git.

## Prepare the build directory

```
mkdir build
cd build
cmake ../
```
StackEdit stores your files in your browser, which means all your files are automatically saved locally and are accessible **offline!**

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
