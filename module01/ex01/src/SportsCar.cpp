#include "../include/SportsCar.hpp"

SportsCar::SportsCar() : Car()
{
    this->_TopSpeed = 0;
    LOG("SportsCar constructed!")
}

SportsCar::SportsCar(const std::string& make, const std::string& model, unsigned int year) : Car(make, model, year)
{
    this->_TopSpeed = 0;
    LOG("SportsCar constructed!")
}

SportsCar::~SportsCar()
{
    LOG("SportsCar destructed!")
}


SportsCar::SportsCar(const SportsCar& originalSportsCar) : Car(originalSportsCar)
{
    this->_TopSpeed = originalSportsCar._TopSpeed;
    LOG("SportsCar copy constructed!")
}

SportsCar& SportsCar::operator=(const SportsCar& originalSportsCar)
{
    LOG("SportsCar copied!")
    if (this != &originalSportsCar)
    {
        *this = originalSportsCar;
        this->_TopSpeed = originalSportsCar._TopSpeed;
    }
    return *this;
}

unsigned int SportsCar::getTopSpeed(void) const
{
    return this->_TopSpeed;
}

void SportsCar::setTopSpeed(unsigned int topSpeed)
{
    this->_TopSpeed = topSpeed;
}

void SportsCar::drive(void) const
{
    std::cout << "Driving " << this->getMake() << " model " << this->getModel() << " from year " << this->getYear() << " with top speed " << this->getTopSpeed() << std::endl;
}