#include "expressomachine.h"


ExpressoMachine::ExpressoMachine()
{
  setPressure_level(0);
}

ExpressoMachine::ExpressoMachine(int pressure_lvl){
  setPressure_level(pressure_lvl);
}

ExpressoMachine::ExpressoMachine(double water_lvl, double coffee_lvl, int pressure_lvl)
  :CoffeeMachine (water_lvl,coffee_lvl) // initializing CoffeeMachine
{
  setPressure_level(pressure_lvl);
}

int ExpressoMachine::getPressure_level() const
{
  return pressure_level;
}

void ExpressoMachine::setPressure_level(int value)
{
  // Let prevent customers from adding negative pressure values.
  if ( value > 0){
      pressure_level = value;
    }else {
      pressure_level = 0;
    }

}

double ExpressoMachine::get_coffee(double value){

  double current_coffee_level = this->getCoffee_level();
  double current_water_level = this->getWater_level();

  if (current_water_level != 0.0 and current_coffee_level != 0.0 and pressure_level == ExpressoMachine().MAX_PRESSURE_LEVEL){

      this->setWater_level(current_water_level - value); // decrease base class water level
      this->setCoffee_level(current_coffee_level - value); // decrease base class coffee level
      this->setPressure_level(0); // set pressure level to 0

    }

  return value;
}

void ExpressoMachine::init_pressure(){
  setPressure_level(ExpressoMachine().MAX_PRESSURE_LEVEL);
}
