#ifndef FLATFIGURES_H
#define	FLATFIGURES_H

#include <iostream>

class Circle {
public:
    Circle();
    Circle(double x, double y, double r = 1);
    Circle(const Circle& orig);
    ~Circle();
    Circle& operator=(const Circle &rv);
    void move(double dx, double dy);
    void moveTo(double x, double y);
    void setRadius(double r);
    
    friend std::ostream& operator<<(std::ostream& out, const Circle& obj);  
    friend std::istream& operator>>(std::istream& in, Circle& obj);  
private:
    double x, y; // координаты центра
    double r; // радиус
};

class Square {
public:
    Square();
    Square(double x, double y, double a = 1, double angle = 0);
    Square(const Square& orig);
    ~Square();
    Square& operator=(const Square &rv);
    void move(double dx, double dy);
    void moveTo(double x, double y);
    
    void setSide(double a);
    void setAngle(double a);
    void rotate(double da);
    
    friend std::ostream& operator<<(std::ostream& out, const Square& obj);  
    friend std::istream& operator>>(std::istream& in, Square& obj);  
private:
    double x, y; // координаты центра
    double a; // сторона
    double angle; // угол наклона
};

class Rectangle {
public:
    Rectangle();
    Rectangle(double x, double y, double a = 1, double b = 1, double angle = 0);
    Rectangle(const Rectangle& orig);
    ~Rectangle();
    Rectangle& operator=(const Rectangle &rv);
    void move(double dx, double dy);
    void moveTo(double x, double y);
    
    void setSides(double a, double b);
    void setAngle(double a);
    void rotate(double da);
    
    friend std::ostream& operator<<(std::ostream& out, const Rectangle& obj);  
    friend std::istream& operator>>(std::istream& in, Rectangle& obj);  
private:
    double x, y; // координаты центра
    double a, b; // стороны
    double angle; // угол наклона
};

#endif	/* FLATFIGURES_H */

