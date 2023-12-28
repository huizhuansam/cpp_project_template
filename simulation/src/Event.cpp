#include "Event.hpp"
#include <iomanip>

Event::Event(const double time) : time(time){};

double Event::getTime() const {
  return this->time;
}

bool operator<(const Event& e1, const Event& e2) {
  return e1.time > e2.time;
}

std::ostream& operator<<(std::ostream& out, const Event& event) {
  return event.print(out);
}

std::ostream& Event::print(std::ostream& out) const {
  out << std::fixed << std::setprecision(3) << this->time;
  return out;
}
