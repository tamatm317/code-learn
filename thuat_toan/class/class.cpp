#include <iostream>
// #include "Circle.cpp"
// ' #include "Circle.cpp"
// ' #include "Circle.cpp"
using namespace std;
class Circle
{
private:
    double radius;

public:
    Circle(double radius)
    {
        this->radius = radius;
    }
    double getArea(double radius)
    {
        return radius * 3.14 * radius;
    }
    double getCircumference(double radius)
    {
        return radius * 2 * 3.14;
    }
};
int main()
{
    double radius;
    cin >> radius;
    Circle c(radius);
    cout << "Area: " << c.getArea() << endl;
    cout << "Circumference: " << c.getCircumference() << endl;
}