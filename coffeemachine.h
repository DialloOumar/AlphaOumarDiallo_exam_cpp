#ifndef COFFEEMACHINE_H
#define COFFEEMACHINE_H

#include <iostream>

class CoffeeMachine
{
public:

  //constructor declaration
  CoffeeMachine();
  CoffeeMachine(double water_lvl, double coffee_lvl);


  //static members Let make this static variable available through directly from the class not the objects
  static int const MAX_WATER_LEVEL = 10;
  static int const MAX_COFFEE_LEVEL = 10;


  // Member function
  double getWater_level() const;
  void setWater_level(double value);

  double getCoffee_level() const;
  void setCoffee_level(double value);

  void increase_coffee_level();
  void increase_water_level();

private:
  double water_level;
  double coffee_level;

};

#endif // COFFEEMACHINE_H
