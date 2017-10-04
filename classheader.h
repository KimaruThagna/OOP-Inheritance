#ifndef CLASSHEADER_H_INCLUDED
#define CLASSHEADER_H_INCLUDED
#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;
class vehicle
{
protected:
    int ViD,Vplate,engineCapacity,YrOfMan,value,OwnerPIN,KRARevenue;
    string manufacturer;
	string bodytype;
    int blacklist[100];

public:
    vehicle();
    bool vehicleSearch(int V);
    void computeKRARevenue();
    void DataInput();
    void Transfer();
    void computeKRARevenue(double importduty); //overloading
    void generateInvoice(); //calculate and display
    void display();
    void blacklistVehicle();
    void Searchblacklist(int plate);

};

//derived class from vehicle
class ordinary: public vehicle
{
private:
    string vehicleType;
    double taxrate;

public:
    ordinary(){};
    void DataInput();
    void display(); //polymorphism of display will be showing logbook
};


//derived class from vehicle
class motorbike: public vehicle
{
private:
    double taxrate;

public:
   motorbike() {
   };
   void computeKRARevenue();//override default function by using flat rate calculation
   void DataInput();
    void computeKRARevenue(double importduty); //overload
    void display();  //polymorphism of display will be showing logbook
};


//derived class from vehicle
class truck: public vehicle
 {
private:
    int axleNum,TrailerPlate;
    double taxrate;

public:
     truck(){};
     void computeKRARevenue();//override default function by using flat rate calculation
   void DataInput();
    void computeKRARevenue(double importduty);
    void display(); //polymorphism of display will be showing logbook
};


#endif // CLASSHEADER_H_INCLUDED

