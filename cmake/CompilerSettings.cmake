if (NOT MSVC)
  set(CMAKE_CXX_FLAGS_DEBUG -g)
  set(CMAKE_CXX_FLAGS_RELEASE "\
    -O3 \
    -Wall \
    -Wextra \
    -Wshadow \
    -Wnon-virtual-dtor \
    -Wold-style-cast \
    -Wcast-align \
    -Wunused \
    -Woverloaded-virtual \
    -Wpedantic \
    -Wconversion \
    -Wsign-conversion \
    -Wnull-dereference \
    -Wdouble-promotion \
    -Wformat=2 \
    -Wimplicit-fallthrough \
    -Werror \
  ")
endif()
