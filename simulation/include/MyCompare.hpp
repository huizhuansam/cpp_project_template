#pragma once

#include <memory>

class MyCompare {
 public:
  template <typename T>
  bool operator()(const std::shared_ptr<T> a,
                  const std::shared_ptr<T> b) const {
    return (*a) < (*b);
  }
};
