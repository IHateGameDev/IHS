#include <IHSystem/States.hpp>
#include <iostream>


static const uint8 ExampleState3 = 1 << 2;

int main()
{
  ih::States8 states(0b01111111);

  states.setStateVO(0, false);
  std::cout << states.getStateVO(0) << " "
            << states.getState(ExampleState3) << " "
            << states.getState(0b10000000) << std::endl;

  states.setState(0b10000001, true);
  std::cout << states.getState(0b1) << " "
            << states.getStateVO(7) << std::endl;
  
  return 0;
}
