#include <iostream>
#define PI 3.1416
using namespace std;
// Abstract base class
class area {
protected:
    double dim1, dim2; // dimensions of figure
public:
    void setarea(double d1, double d2 = 0) { // d2 is optional (for circle)
        dim1 = d1;
        dim2 = d2;
    }
    void getdim(double &d1, double &d2) {
        d1 = dim1;
        d2 = dim2;
    }
    virtual double getarea() = 0; // pure virtual function
};
// Rectangle class
class rectangle : public area {
public:
    double getarea() override {
        double d1, d2;
        getdim(d1, d2);
        return d1 * d2;
    }
};
// Triangle class
class triangle : public area {
public:
    double getarea() override {
        double d1, d2;
        getdim(d1, d2);
        return 0.5 * d1 * d2;
    }
};
//Circle class
class circle : public area {
public:
    double getarea() override {
        double radius, dummy;
        getdim(radius, dummy);
        return PI * radius * radius;
    }
};
int main() {
    area *p;
    rectangle r;
    triangle t;
    circle c;
    r.setarea(3.3, 4.5);
    t.setarea(4.0, 5.0);
    c.setarea(3.0); // Only radius for circle
    p = &r;
    cout << "Rectangle has area: " << p->getarea() << endl;
    p = &t;
    cout << "Triangle has area: " << p->getarea() << endl;
    p = &c;
    cout << "Circle has area: " << p->getarea() << endl;
    return 0;
}