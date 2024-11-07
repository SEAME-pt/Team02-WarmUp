#pragma once 

#include "Car.hpp"

#define LOG(x) std::cout << x << std::endl;

class ClassicCar : public Car 
{
private:
    unsigned int _rarity;
public:
    ClassicCar();
    ClassicCar(const std::string& make, const std::string& model, const unsigned int year);
    ~ClassicCar();
    ClassicCar(const ClassicCar& originalClassicCar);
    ClassicCar& operator=(const ClassicCar& originalClassicCar);

    unsigned int getRarity(void) const;
    void setRarity(unsigned int rarity);
    void drive() const;
};