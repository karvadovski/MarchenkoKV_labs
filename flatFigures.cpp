#include "flatFigures.h"
#include "math.h"

Circle::Circle() {
    x=0;
    y=0;
    r=0;
}

Circle::Circle(double x, double y, double r) {
    this->x=x;
    this->y=y;
    this->r=r;
}

Circle::Circle(const Circle& orig) {
    this->x=orig.x;
    this->y=orig.y;
    this->r=orig.r; 
}

Circle::~Circle() {
}

Circle& Circle::operator=(const Circle &rv) {
    this->x=rv.x;
    this->y=rv.y;
    this->r=rv.r;
    return *this;
}
void Circle::move(double dx, double dy){
    this->x+=dx;
    this->y+=dy;
}
void Circle::moveTo(double x, double y){
    this->x=x;
    this->y=y;
}
void Circle::setRadius(double r){
    this->r=r;
}

Square::Square() {
    x=0;
    y=0;
    a=0;
    angle=0;
}

Square::Square(double x, double y, double a, double angle) {
    this->x=x;
    this->y=y;
    this->a=a;
    this->angle=angle;
}

Square::Square(const Square& orig) {
    this->x=orig.x;
    this->y=orig.y;
    this->a=orig.a; 
    this->angle=orig.angle; 
}

Square::~Square() {
}

Square& Square::operator=(const Square &rv) {
    this->x=rv.x;
    this->y=rv.y;
    this->a=rv.a;
    this->angle=rv.angle; 
    return *this;
}
void Square::move(double dx, double dy){
    this->x+=dx;
    this->y+=dy;
}
void Square::moveTo(double x, double y){
    this->x=x;
    this->y=y;
}

void Square::setSide(double a) {
    this->a=a;
}
void Square::setAngle(double a){
    if (a<0 && a>360)
        this->angle=a;    
}
void Square::rotate(double da){
    this->angle+=da;        
    if (this->angle > 360)
        this->angle = fmod(this->angle, 360);
}

Rectangle::Rectangle() {
    x=0;
    y=0;
    a=0;
    b=0;
    angle=0;
}

Rectangle::Rectangle(double x, double y, double a, double b, double angle) {
    this->x=x;
    this->y=y;
    this->a=a;
    this->b=b;
    this->angle=angle;
}

Rectangle::Rectangle(const Rectangle& orig) {
    this->x=orig.x;
    this->y=orig.y;
    this->a=orig.a; 
    this->b=orig.b;
    this->angle=orig.angle;
}

Rectangle::~Rectangle() {
}

Rectangle& Rectangle::operator=(const Rectangle &rv) {
    this->x=rv.x;
    this->y=rv.y;
    this->a=rv.a;
    this->b=rv.b;
    this->angle=rv.angle;
    return *this;
}
void Rectangle::move(double dx, double dy){
    this->x+=dx;
    this->y+=dy;
}
void Rectangle::moveTo(double x, double y){
    this->x=x;
    this->y=y;
}

void Rectangle::setSides(double a, double b) {
    this->a=a;
    this->b=b;
}
void Rectangle::setAngle(double a){
    if (a<0 && a>360)
        this->angle=a;    
}
void Rectangle::rotate(double da){
    this->angle+=da;        
    if (this->angle > 360)
        this->angle = fmod(this->angle, 360);
}