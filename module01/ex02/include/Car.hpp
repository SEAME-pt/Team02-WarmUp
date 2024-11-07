#pragma once

#include <iostream>

#define LOG(x) std::cout << x << std::endl;

class Car
{
protected:
    const std::string _make;
    const std::string _model;
    const unsigned int      _year;
public:
    Car();
    Car(const std::string &make, const std::string &model, const unsigned int year);
    virtual ~Car();
    Car(const Car& originalCar);
    Car& operator=(const Car& originalCar);

    const std::string& getMake(void) const;
    const std::string& getModel(void) const;
    const unsigned int getYear(void) const;

    virtual void drive(void) const = 0;
};