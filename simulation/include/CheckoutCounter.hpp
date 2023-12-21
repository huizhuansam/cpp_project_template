#pragma once

#include <iostream>

class CheckoutCounter {
 private:
  static inline int lastId{0};
  const int id{};
  bool available{true};

 public:
  CheckoutCounter();

  bool isAvailable() const;

  void makeAvailable();

  void makeUnavailable();

  friend std::ostream& operator<<(std::ostream& out,
                                  const CheckoutCounter& checkoutCounter);
};
