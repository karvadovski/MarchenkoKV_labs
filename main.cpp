#include <cstdlib>
#include "flatFigures.h"

using namespace std;

ostream& operator<<(ostream& out, const Circle& obj) {
    out << "(" << obj.x << "," << obj.y << "), R=" << obj.r;
    return out;
}

istream& operator>>(istream& in, Circle& obj) {
    in >> obj.x >> obj.y >> obj.r;
    return in;
}

ostream& operator<<(ostream& out, const Square& obj) {
    out << "(" << obj.x << "," << obj.y << "), A=" << obj.a << ", angle=" << obj.angle;
    return out;
}

istream& operator>>(istream& in, Square& obj) {
    in >> obj.x >> obj.y >> obj.a >> obj.angle;
    return in;
}

ostream& operator<<(ostream& out, const Rectangle& obj) {
    out << "(" << obj.x << "," << obj.y << "), A=" << obj.a << "), B=" << obj.b <<
            ", angle=" << obj.angle;
    return out;
}

istream& operator>>(istream& in, Rectangle& obj) {
    in >> obj.x >> obj.y >> obj.a >> obj.b >> obj.angle;
    return in;
}

int main(int argc, char** argv) {
    Circle c[5];
    Square s[5];
    Rectangle r[5];
    
    cout << "Vvedite centry okruznostej i ih radius:" << endl;
    for (int i=0; i<5; i++) {
        cin >> c[i];
    }
    for (int i=0; i<5; i++) {
        c[i].setRadius(i);
        cout << c[i] << endl;
    }
    
    system("pause");
    return 0;
}

