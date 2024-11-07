#include "../include/SportsCar.hpp"

int main(void)
{
    SportsCar bmw("BMW", "m3", 2014);
    SportsCar ford("FORD", "mondeo", 2004);

    bmw.setTopSpeed(250);
    ford.setTopSpeed(180);

    bmw.drive();
    ford.drive();
}