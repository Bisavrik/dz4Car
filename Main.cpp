#include <iostream>
#include "Car.h"
#pragma warning(disable : 4996)

using namespace std;

int main() 
{

    Car car1;
    Car car2("Toyota", "Corolla", 2020, 1.8);


    car1.printInfo();
    cout << endl;
    car2.printInfo();


    car1.setBrand("Honda");
    car1.setModel("Civic");
    car1.setYear(2018);
    car1.setEngineCapacity(1.5);

    cout << "\nUpdated car1 information:\n";
    car1.printInfo();

    return 0;
}