#include "../include/Car.hpp"

int main(void)
{
    Car bmw("BMW");
    Car ford("FORD");

    std::cout << bmw.getName() << " speed is: " << bmw.getSpeed() << std::endl;
    std::cout << ford.getName() << " speed is: " << ford.getSpeed() << std::endl;
    bmw.setSpeed(10);
    ford.setSpeed(29);
    std::cout << bmw.getName() << " speed is: " << bmw.getSpeed() << std::endl;
    std::cout << ford.getName() << " speed is: " << ford.getSpeed() << std::endl;
}