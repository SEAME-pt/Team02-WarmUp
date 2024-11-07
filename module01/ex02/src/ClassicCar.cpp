#include "../include/ClassicCar.hpp"

ClassicCar::ClassicCar() : Car()
{
    this->_rarity = 0;
    LOG("ClassicCar constructed!")
}

ClassicCar::ClassicCar(const std::string& make, const std::string& model, unsigned int year) : Car(make, model, year)
{
    this->_rarity = 0;
    LOG("ClassicCar constructed!")
}

ClassicCar::~ClassicCar()
{
    LOG("ClassicCar destructed!")
}


ClassicCar::ClassicCar(const ClassicCar& originalClassicCar) : Car(originalClassicCar)
{
    this->_rarity = originalClassicCar._rarity;
    LOG("ClassicCar copy constructed!")
}

ClassicCar& ClassicCar::operator=(const ClassicCar& originalClassicCar)
{
    LOG("ClassicCar copied!")
    if (this != &originalClassicCar)
    {
        *this = originalClassicCar;
        this->_rarity = originalClassicCar._rarity;
    }
    return *this;
}

unsigned int ClassicCar::getRarity(void) const
{
    return this->_rarity;
}

void ClassicCar::setRarity(unsigned int rarity)
{
    this->_rarity = rarity;
}

void ClassicCar::drive(void) const
{
    std::cout << "Driving " << this->getMake() << " model " << this->getModel() << " from year " << this->getYear() << " with rarity " << this->getRarity() << std::endl;
}