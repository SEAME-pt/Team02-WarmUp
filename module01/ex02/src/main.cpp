#include "../include/SportsCar.hpp"
#include "../include/ClassicCar.hpp"

int main(void)
{
    Car* cars[2];
    cars[0] = new SportsCar("BMW", "m3", 2018);
    cars[1] = new ClassicCar("Fiat", "spider", 1980);

    SportsCar *sportsPtr = dynamic_cast<SportsCar*>(cars[0]);
    ClassicCar *classicPtr = dynamic_cast<ClassicCar*>(cars[1]);
    sportsPtr->setTopSpeed(200);
    classicPtr->setRarity(10);
    cars[0]->drive();
    cars[1]->drive();
    delete cars[0];
    delete cars[1];
}