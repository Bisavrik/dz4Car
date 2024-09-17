#include <iostream>
#include <cstring>
#include "Car.h"
#pragma warning(disable : 4996)

using namespace std;

Car::Car()
{
    strcpy(brand, "Unknown");
    strcpy(model, "Unknown");
    year = 0;
    engineCapacity = 0.0;
}

Car::Car(const char* brand, const char* model, int year, double engineCapacity)
{
    strcpy(this->brand, brand);
    strcpy(this->model, model);
    this->year = year;
    this->engineCapacity = engineCapacity;
}

Car::~Car() 
{
    cout << "Car " << brand << " " << model << " destroyed." << endl;
}

const char* Car::getBrand()  
{
    return brand;
}

const char* Car::getModel() 
{
    return model;
}

int Car::getYear() 
{
    return year;
}

double Car::getEngineCapacity()
{
    return engineCapacity;
}

void Car::setBrand(const char* brand)
{
    strcpy(this->brand, brand);
}

void Car::setModel(const char* model)

{
    strcpy(this->model, model);
}

void Car::setYear(int year)
{
    this->year = year;
}

void Car::setEngineCapacity(double engineCapacity)
{
    this->engineCapacity = engineCapacity;
}

void Car::printInfo() 
{
    cout << "Brand: " << brand << "\nModel: " << model
        << "\nYear: " << year << "\nEngine Capacity: " << engineCapacity << " L\n";
}