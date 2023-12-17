find_program(CLANGTIDY clang-tidy)
if (NOT CLANGTIDY)
  message(${WARNING_MESSAGE} "clang-tidy requested but executable not found")
else()
  set(CLANG_TIDY_OPTIONS
    ${CLANGTIDY}
    -extra-arg=-Wno-unknown-warning-option
    -extra-arg=-Wno-ignored-optimization-argument
    -extra-arg=-Wno-unused-command-line-argument
    -extra-arg=-std=c++${CMAKE_CXX_STANDARD}
    -warnings-as-errors=*)
  message("Also setting clang-tidy globally")
  set(CMAKE_CXX_CLANG_TIDY ${CLANG_TIDY_OPTIONS})
endif()
