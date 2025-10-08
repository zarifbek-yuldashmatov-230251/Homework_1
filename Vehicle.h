#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
using namespace std;

class Vehicle {
private:
    string brand;
    int year;
    static int totalVehicles;

public:
   
    Vehicle(string b, int y) {
        brand = b;
        year = y;
        totalVehicles += 1;
    }

    
    virtual void displayInfo() {
        cout << "Brand: " << brand << "\n";
        cout << "Year: " << year << "\n";
    }

   
    void getTotal() {
        cout << totalVehicles << "\n";
    }

    
    virtual ~Vehicle() {
        cout << "Vehicle is destroyed\n";
    }
};

// Static member definition
int Vehicle::totalVehicles = 0;

#endif

