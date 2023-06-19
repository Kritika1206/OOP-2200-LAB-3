//
// Author: Kritika Singh
// Created on July 6, 2022
// Version: 1.0
// Purpose: using and writing classes
//

#include <iostream>
#include "room_class.h"

using namespace std;

room_class::room_class()
{
    height = 1.0;
    width = 1.0;
    depth = 1.0;
}

room_class::room_class(double myHeight, double myWidth, double myDepth)
{
    setHeight(myHeight);
    setWidth(myWidth);
    setDepth(myDepth);
}

void room_class::setHeight(double myHeight)
{
    if(myHeight < 1)
    {
        cout << "Invalid height. Setting height to 1.\n";
        height = 1;
    }
    else
    {
        height = myHeight;
    }
}

void room_class::setWidth(double myWidth)
{
    if (myWidth < 1)
    {
        cout << "Invalid width. Setting width to 1.\n";
        width = 1;
    }

    else
    {
        width = myWidth;
    }
}

void room_class::setDepth(double myDepth)
{
    if (myDepth < 1)
    {
        cout << "Invalid depth. Setting depth to 1.\n";
        depth = 1;
    }

    else
    {
        depth = myDepth;
    }
}
void room_class::setResize(double myHeight, double myWidth, double myDepth) {
    setHeight(myHeight);
    setWidth(myWidth);
    setDepth(myDepth);
}


double room_class::getHeight() const
{
    return height;
}

double room_class::getWidth() const
{
    return width;
}

double room_class::getDepth() const
{
    return depth;
}

double room_class::Area() const
{
    return depth*width;
}

void room_class::print() const
{
    cout << "The dimensions of the room are as follows:" << endl;
    cout << "Height: " << getHeight() << endl;
    cout << "Width: " << getWidth() << endl;
    cout << "Depth: " << getDepth() << endl;
}
