[![codecov](https://codecov.io/github/huizhuansam/cpp_project_template/graph/badge.svg?token=98JDIDCD7A)](https://codecov.io/github/huizhuansam/cpp_project_template)

# C++ Project Template

## Getting Started

### Requirements

To build and work with this C++ project, ensure you have the following software installed. While CMake is essential for project compilation, other tools are optional but highly recommended for static analysis, source code formatting, and documentation.

#### Build tool

- [CMake](https://cmake.org/download/)

#### Static analyzers (highly recommended)

- [Cppcheck](https://cppcheck.sourceforge.io/#download)
- Clang-Tidy (LLVM Extra Clang Tools)

#### Source code formatting

- ClangFormat (LLVM Clang Tools)

#### Documentation

- [Doxygen](https://www.doxygen.nl/download.html)
- [Graphviz](https://graphviz.org/download/)

### Build Steps

Follow these steps to build the project:

1. Navigate to the project root directory: `cd [project root]`
2. Create a build directory: `mkdir build`
3. Change into the build directory: `cd build`
4. Configure CMake and generate build files: `cmake ..`
5. Compile the project libraries and executable: `make`

After completing the above steps, you'll find the executable at `[project root]/build/simulation/main`.

**Tips:**

- Combine steps 4 and 5 using the `&&` operator: `cmake .. && make`.
- Speed up compilation with `make -j4`.

### Running Tests

The tests cases are built alongside the project by default.

From the `build` directory, run `./simulation/tests/test -s`.

### Generating Documentation

The project's documentation website is hosted on [GitHub Pages](https://huizhuansam.github.io/cpp_project_template/). The website updates automatically when commits are pushed onto the `master` branch via GitHub Actions. To generate a local preview of the documentation:

1. Navigate to the project's documentation directory: `cd docs`
2. Run `doxygen Doxyfile.in` to create a `_build` subdirectory.
3. Open the generated HTML documentation: `[project root]/docs/_build/html/index.html` using your preferred browser.

## Acknowledgements

The source code is a C++ translation of NUS CS2030S Lab 1 (AY21/22 Semester 2), originally written in Java by Assoc Prof Ooi Wei Tsang.
