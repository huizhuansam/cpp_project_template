#pragma once

#include <memory>
#include <vector>

#include "Event.hpp"
#include "Shop.hpp"
#include "Simulation.hpp"

/// @brief This class implements a shop simulation.
class ShopSimulation : public Simulation {
 private:
  const std::shared_ptr<Shop> shop;

  /// @brief The list of customer arrival events to populate the simulation
  /// with.
  std::vector<std::shared_ptr<Event>> initEvents;

  ShopSimulation(const std::shared_ptr<Shop> shop,
                 std::vector<std::shared_ptr<Event>> initEvents);

 public:
  /// @brief Factory for a shop simulation.
  /// @return A ShopSimulation.
  static ShopSimulation factory();

  /// @brief Retrieve a vector of events to populate the simulator with.
  /// @return A vector of events for the simulator.
  std::vector<std::shared_ptr<Event>> getInitialEvents() const override;
};
