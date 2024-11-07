#include "../include/Car.hpp"

Car::Car()
{
    this->_speed = 0;
}

Car::Car(const std::string& name)
{
    this->_name = name;
    this->_speed = 0;
}

Car::~Car()
{
}

Car::Car(const Car& originalCar)
{
    this->_name = originalCar._name;
    this->_speed = originalCar._speed;
}

Car& Car::operator=(const Car& originalCar)
{
    if (this != &originalCar)
    {
        this->_name = originalCar._name;
        this->_speed = originalCar._speed;
    }
    return *this;
}

const std::string& Car::getName(void)
{
    return this->_name;
}

unsigned int Car::getSpeed(void)
{
    return this->_speed;
}

void Car::setName(const std::string &name)
{
    this->_name = name;
}

void Car::setSpeed(unsigned int speed)
{
    this->_speed = speed;
}