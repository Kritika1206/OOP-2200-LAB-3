/*
Author: Kritika Singh & Kingsly Bude
Filename: Conference.h
Created on July 6, 2022
Purpose: Lab 3
Class: OOP I - 202242.33298-OOP-2200-06
*/
#pragma once
#include "room_class.h"

class Conference: public room_class
{
private:
	int outlets;

public:
	Conference();
	Conference(int outlets, double h, double w, double d);

	int getOutlets() const;

	void setOutlets(int numberOfOutlets);

	void conferenceString();
};

