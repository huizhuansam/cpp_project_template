#include "unsafe/stupidHello.h"
#include <cstring>
#include <iostream>

namespace unsafe {
void stupidHello() {
  // Allocate memory for the "Hello, World!" string
  char* hello = new char[13];
  std::strcpy(hello, "Hello, World!");

  // Print the string
  std::cout << hello << std::endl;

  // Free the allocated memory
  delete[] hello;

  // Access the freed memory (memory bug)
  std::cout << hello
            << std::endl;  // This line will likely cause a segmentation fault
}
}  // namespace unsafe
