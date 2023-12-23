#pragma once

#include <iostream>
#include <memory>
#include <vector>

class Event {
 private:
  const double time{};

 public:
  explicit Event(const double time);

  double getTime() const;

  virtual std::vector<std::shared_ptr<Event> > simulate() = 0;

  friend bool operator<(const Event& e1, const Event& e2);

  friend std::ostream& operator<<(std::ostream& out, const Event& event);

  virtual std::ostream& print(std::ostream& out) const;
};
