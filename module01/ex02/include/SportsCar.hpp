#pragma once 

#include "Car.hpp"

#define LOG(x) std::cout << x << std::endl;

class SportsCar : public Car 
{
private:
    unsigned int _TopSpeed;
public:
    SportsCar();
    SportsCar(const std::string& make, const std::string& model, const unsigned int year);
    ~SportsCar();
    SportsCar(const SportsCar& originalSportsCar);
    SportsCar& operator=(const SportsCar& originalSportsCar);

    unsigned int getTopSpeed(void) const;
    void setTopSpeed(unsigned int topSpeed);
    void drive() const;
};