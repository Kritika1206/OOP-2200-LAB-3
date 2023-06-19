/*
Author: Kritika Singh & Kingsly Bude
Filename: main.cpp
Created on July 6, 2022
Purpose: Lab 3
Class: OOP I - 202242.33298-OOP-2200-06
*/
#include <iostream>
#include "Conference.h"
#include "room_class.h"

using namespace std;

int main() {

    room_class r1;
    room_class r2(-1,-1,-1);
    room_class r3(3, 3, 4);
    Conference conferenceRoomOne(5,3,3,4);

    cout << "\nThe area of room one: " << r1.Area() << " squared." << endl;
    cout << "The area of room two: " << r2.Area() << " squared." << endl;
    cout << "The area of room three: " << r3.Area() << " squared." << endl << endl;

    conferenceRoomOne.setResize(5, 5, 5);
    cout << "Information for conference room one:" << endl;
    conferenceRoomOne.conferenceString();


    return 0;
}
