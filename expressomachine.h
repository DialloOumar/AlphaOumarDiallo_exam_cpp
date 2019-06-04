#ifndef EXPRESSOMACHINE_H
#define EXPRESSOMACHINE_H

#include "coffeemachine.h"

class ExpressoMachine: public CoffeeMachine
{
public:
  // constructor declaration
  ExpressoMachine();
  ExpressoMachine(int pressure_lvl);
  // The constructor can also be used to initialize values of the base class
  ExpressoMachine(double water_lvl, double coffee_lvl, int pressure_lvl );

  //static members
  static const int MAX_PRESSURE_LEVEL = 10;


  int getPressure_level() const;
  void setPressure_level(int value);
  void init_pressure();
  double get_coffee(double amount);

private:
  int pressure_level;

};

#endif // EXPRESSOMACHINE_H
