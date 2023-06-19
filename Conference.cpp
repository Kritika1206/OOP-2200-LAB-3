/*
Author: Kritika Singh & Kingsly Bude
Filename: Conference.cpp
Created on July 6, 2022
Purpose: Lab 3
Class: OOP I - 202242.33298-OOP-2200-06
*/

#include "Conference.h"
#include <iostream>
#include <stdexcept>

using namespace std;

//Conference::Conference() : outlets(1) {}
Conference::Conference() {
	setWidth(1.0);
	setHeight(1.0);
	setDepth(1.0);
	setOutlets(1);
}
Conference::Conference(int numberOfOutlets, double h, double w, double d) {
	 ;
	setWidth(w);
	setDepth(d);
	setOutlets(numberOfOutlets);
}

int Conference::getOutlets() const {
	return outlets;
}


void Conference::setOutlets(int numberOfOutlets) {
	int MINIMU_SOCKETS = 1;

	try {
		numberOfOutlets >= MINIMU_SOCKETS ? outlets = numberOfOutlets : throw std::invalid_argument("");
	}
	catch (invalid_argument e) {
		cout << "Invalid argument for number of outlets. setting outlets to 1";
		outlets = 1;
	}
	return;
}

void Conference::conferenceString() {
	cout << "Width: " << getWidth()
		<< "\nHeight: " << getHeight()
		<< "\nDepth: " << getDepth()
		<< "\nNumber of sockets: " << getOutlets() << endl;
	return;
}
