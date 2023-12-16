#include <iostream>
#include <string>
using namespace std;


class Company {
public:
    string name;

    Company() : name("Default Company") {}
    Company(string n) : name(n) {}

    string getName() const { return name; }
};

class Employee {
public:
    string name;
    int age;
    string position;
    double salary;
    bool married;
    int children;


    Employee() : name("Default Employee"), age(0), position("None"), salary(0.0), married(false), children(0) {}
    Employee(string n, int a, string p, double s, bool m, int c) : name(n), age(a), position(p), salary(s), married(m), children(c) {}

    string getName() const { return name; }
    int getAge() const { return age; }
};

class Vehicle {
public:

    string brand;
    string model;

    Vehicle() : brand("Default Brand"), model("Default Model") {}
    Vehicle(string b, string m) : brand(b), model(m) {}

    string getBrand() const { return brand; }
    string getModel() const { return model; }
};

class Truck : public Vehicle {
public:
    int cargoCapacity;
    string fuelType;


    Truck() : cargoCapacity(0), fuelType("Diesel") {}
    Truck(int cc, string ft) : cargoCapacity(cc), fuelType(ft) {}
    Truck(string b, string m, int cc, string ft) : Vehicle(b, m), cargoCapacity(cc), fuelType(ft) {}

    int getCargoCapacity() const { return cargoCapacity; }
};

class Car : public Vehicle {
public:
    int numSeats;
    string fuelType;

    Car() : numSeats(4), fuelType("Gasoline") {}
    Car(int ns, string ft) : numSeats(ns), fuelType(ft) {}
    Car(string b, std::string m, int ns, string ft) : Vehicle(b, m), numSeats(ns), fuelType(ft) {}

    int getNumSeats() const { return numSeats; }
};

int main() {
    Employee emp1("Bob Marley", 30, "Manager", 50000.0, true, 2);
    cout << "Employee Name: " << emp1.getName() << ", Age: " << emp1.getAge() << std::endl;

    Car car1("Subaru", "Legacy", 5, "Gasoline");
    cout << "Car Brand: " << car1.getBrand() << ", Model: " << car1.getModel() << ", Num Seats: " << car1.getNumSeats() << std::endl;

    return 0;
}