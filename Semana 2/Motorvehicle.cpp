#include <iostream>
#include <string>
#include "MotorVehicle.h"

int main() {
    std::string make, fuelType, color;
    int yearOfManufacture, engineCapacity;

    // Get input from user for each data member
    std::cout << "Enter make: ";
    std::cin >> make;

    std::cout << "Enter fuel type: ";
    std::cin >> fuelType;

    std::cout << "Enter year of manufacture: ";
    std::cin >> yearOfManufacture;

    std::cout << "Enter color: ";
    std::cin >> color;

    std::cout << "Enter engine capacity: ";
    std::cin >> engineCapacity;

    // Create a MotorVehicle object using the input values
    MotorVehicle myCar(make, fuelType, yearOfManufacture, color, engineCapacity);

    // Use the get functions to display individual data members
    std::cout << "\nMake: " << myCar.getMake() << std::endl;
    std::cout << "Fuel type: " << myCar.getFuelType() << std::endl;
    std::cout << "Year of manufacture: " << myCar.getYearOfManufacture() << std::endl;
    std::cout << "Color: " << myCar.getColor() << std::endl;
    std::cout << "Engine capacity: " << myCar.getEngineCapacity() << std::endl;

    return 0;
}