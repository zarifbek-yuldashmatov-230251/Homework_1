#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H

#include "Car.h"

class ElectricCar : public Car {
private:
    int batteryRange;

public:
    
    ElectricCar(string b, int y, int d, int bR) : Car(b, y, d) {
        batteryRange = bR;
    }

    void displayInfo() override {
        Car::displayInfo();
        cout << "Battery Range: " << batteryRange << " km\n";
    }

    
    ~ElectricCar() override {
        cout << "Electric car is destroyed\n";
    }
};

#endif
