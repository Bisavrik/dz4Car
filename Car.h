#ifndef CAR_H
#define CAR_H

class Car 
{
private:
    char brand[50];
    char model[50];
    int year;
    double engineCapacity;

public:
    Car();
    Car(const char* brand, const char* model, int year, double engineCapacity);

    ~Car();

    const char* getBrand();
    const char* getModel() ;
    int getYear();
    double getEngineCapacity();

    void setBrand(const char* brand);
    void setModel(const char* model);
    void setYear(int year);
    void setEngineCapacity(double engineCapacity);

    void printInfo() ;
};

#endif