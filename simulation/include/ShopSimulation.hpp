#pragma once

#include <memory>
#include <vector>
#include "Event.hpp"
#include "Shop.hpp"
#include "Simulation.hpp"

class ShopSimulation : public Simulation {
 private:
  const Shop shop;
  std::vector<std::shared_ptr<Event>> initEvents;
  ShopSimulation(const Shop shop,
                 std::vector<std::shared_ptr<Event>> initEvents);

 public:
  static ShopSimulation factory();

  std::vector<std::shared_ptr<Event>> getInitialEvents() const override;
};
