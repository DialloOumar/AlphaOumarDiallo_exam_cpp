#include "coffeemachine.h"


CoffeeMachine::CoffeeMachine(){
  setWater_level(0);
  setCoffee_level(0);
}

CoffeeMachine::CoffeeMachine(double water_lvl, double coffee_lvl)
{
  setWater_level(water_lvl);
  setCoffee_level(coffee_lvl);

}



double CoffeeMachine::getWater_level() const
{
  return water_level;
}

void CoffeeMachine::setWater_level(double value)
{
  if (value <= CoffeeMachine().MAX_WATER_LEVEL){
    water_level = value;

  }else {
      std::cout<<"Sorry The water level Provided is greater than the allowed "
                 "value should be between 0-10, so we have initilized it to 0"<<std::endl;
      water_level = 0;
    }
}

double CoffeeMachine::getCoffee_level() const
{
  return coffee_level;
}

void CoffeeMachine::setCoffee_level(double value)
{
  if(value <= CoffeeMachine().MAX_COFFEE_LEVEL and value < 0){
      coffee_level = value;
  }else {
    std::cout<<"Sorry The Coffee level Provided is greater or less than the allowed level, value should be less between 0-10."
               "so we have initilized to the default value of 0";
    coffee_level =0;
  }

}

void CoffeeMachine::increase_water_level(){
  if (getWater_level()+1 < CoffeeMachine().MAX_WATER_LEVEL){
    water_level++;
  }else {
    std::cout<<"Cannot Increase the water level it has reached it maximum limit"<<std::endl;
  }
}

void CoffeeMachine::increase_coffee_level(){

  if (getCoffee_level() +1 < CoffeeMachine().MAX_COFFEE_LEVEL){
        coffee_level++;
    }else {
      std::cout<<"Cannot Increase The coffee level, it has reached it maximum limit"<<std::endl;
    }
}








