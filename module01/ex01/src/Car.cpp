#include "../include/Car.hpp"

Car::Car() : _make("unknown"), _model("test"), _year(0000)
{
    LOG("Car constructed!");
}

Car::Car(const std::string& make, const std::string& model, const unsigned int year) : _make(make), _model(model), _year(year)
{
    LOG("Car constructed!");
}

Car::~Car()
{
    LOG("Car destructed!");
}

Car::Car(const Car& originalCar) : _make(originalCar._make), _model(originalCar._model), _year(originalCar._year)
{
    LOG("Car copy constructed!");
}

Car& Car::operator=(const Car& originalCar)
{
    LOG("Car copied!");
    return *this;
}

const std::string& Car::getMake(void) const
{
    return this->_make;
}

const std::string& Car::getModel(void) const
{
    return this->_model;
}

const unsigned int Car::getYear(void) const
{
    return this->_year;
}


void Car::drive(void) const
{
    std::cout << "Driving " << this->getMake() << " model " << this->getModel() << " from year " << this->getYear() << std::endl;
}