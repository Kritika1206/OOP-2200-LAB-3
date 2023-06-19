// Author: Kritika Singh
// Created on July 6, 2022
// Version: 1.0
// Purpose: using and writing classes
#pragma once

class room_class{

    double height;
    double width;
    double depth;

public:
    //default Constructor
    room_class();

    //Overloaded Constructor
    room_class(double myHeight, double myWidth,  double myDepth);

    //setters or modifiers
    void setHeight(double myHeight);
    void setWidth(double myWidth);
    void setDepth(double myDepth);
    void setResize(double myHeight, double myWidth, double myDepth);

    //getter or query
    double getHeight() const;
    double getWidth() const;
    double getDepth() const;

    //helper or support
    double Area() const;
    void print() const;
};
