#include <iostream>
using namespace std;

// Create a Vehicle class with some attributes
class Vehicle
{
public:
    string type;
    string model;
    string brand;
    int year;
};

int main()
{
    // Create an object of the Vehicle class
    Vehicle VehicleObj1;
    VehicleObj1.type = "car";
    VehicleObj1.model = "Landcruser";
    VehicleObj1.brand = "TX";
    VehicleObj1.year = 2014;

    // Create another object of Vehicle class
    Vehicle VehicleObj2;
    VehicleObj2.type = "Lorry";
    VehicleObj2.brand = "Isuzu";
    VehicleObj2.model = "Cat";
    VehicleObj2.year = 2002;

    // Print attribute values
    cout << VehicleObj1.brand << " " << VehicleObj1.model << " " << VehicleObj1.model << " " << VehicleObj1.year << "\n";
    cout << VehicleObj2.brand << " " << VehicleObj2.model << " " << VehicleObj1.model << " " << VehicleObj2.year << "\n";
    return 0;
}
