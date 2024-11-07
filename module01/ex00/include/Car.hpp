#pragma once

#include <iostream>

class Car
{
private:
    std::string _name;
    unsigned int _speed;
public:
    Car();
    Car(const std::string &name);
    ~Car();
    Car(const Car& originalCar);
    Car& operator=(const Car& originalCar);

    void setName(const std::string &name);
    void setSpeed(unsigned int speed);
    const std::string& getName(void);
    unsigned int getSpeed(void);
};