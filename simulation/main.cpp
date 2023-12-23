#include <iostream>
#include "ShopSimulation.hpp"
#include "Simulator.hpp"

int main() {
  Simulator simulator = Simulator::factory(ShopSimulation::factory());
  simulator.run();
  return 0;
}
