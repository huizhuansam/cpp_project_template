#pragma once

#include <iostream>

template <typename T>
class Parser {
 public:
  static T parse() {
    T value{};
    std::cin >> value;
    return value;
  }
};

// Note: template class methods should be defined within its own header file
