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
- [Sphinx](https://www.sphinx-doc.org/en/master/usage/installation.html)
- [Read the Docs Sphinx Theme](https://sphinx-rtd-theme.readthedocs.io/en/stable/installing.html)
- [Breathe](https://breathe.readthedocs.io/en/latest/index.html#download)
- [Sphinx Sitemap](https://sphinx-sitemap.readthedocs.io/en/latest/getting-started.html#installation)
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

### Generating Documentation

The project's documentation website is hosted on [GitHub Pages](https://huizhuansam.github.io/cpp_project_template/). The website updates automatically when commits are pushed onto the `master` branch via GitHub Actions. To generate a local preview of the documentation:

1. Navigate to the project's documentation directory: `cd docs_sphinx`
2. Run `make html` to create a `_build` subdirectory.
3. Open the generated HTML documentation: `[project root]/docs_sphinx/_build/html/index.html` using your preferred browser.

## Acknowledgements

The source code is a C++ translation of NUS CS2030S Lab 1 (AY21/22 Semester 2), originally written in Java by Assoc Prof Ooi Wei Tsang.
