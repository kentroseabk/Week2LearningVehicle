// Week2LearningVehicle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Airplane.h"
#include "Boat.h";

using namespace std;

int main()
{
    Vehicle vehicle;
    Car car;
    Airplane airplane;
    Boat boat;

    vehicle.Drive();
    car.Drive();
    airplane.Drive();
    boat.Drive();

    // Playing around w/ pointers
    Vehicle* vehCarPtr = &car;
    vehCarPtr->Drive();

    Boat boat2;
    Boat* boat2Ptr = &boat2;
    boat2.Drive();
    boat2Ptr->Drive();

    Vehicle* vehArray[4]{ &vehicle, &car, &airplane, &boat };

    for (int i = 0; i < 4; i++)
    {
        vehArray[i]->Drive();
    }
}