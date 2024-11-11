/*1) Function overloading: implement function to calculate volume of Cube,
Box and cylinder using Function overloading*/
#include <iostream>
#include <cmath>
using namespace std;
class VolumeCalculator
{
public:
    double volume(double side)
    {
        return pow(side, 3);
    }
    double volume(double length, double width, double height)
    {
        return length * width * height;
    }
    double volume(double radius, double height)
    {
        return 3.14 * pow(radius, 2) * height;
    }
};
int main()
{
    VolumeCalculator calculator;
    double side = 3.0;
    cout << "Volume of Cube: " << calculator.volume(side) << " cubic units"
         << endl;
    double length = 4.0, width = 5.0, height = 6.0;

    cout << "Volume of Box: " << calculator.volume(length, width, height)
         << " cubic units" << endl;
    double radius = 2.0, cyl_height = 7.0;
    cout << "Volume of Cylinder: " << calculator.volume(radius, cyl_height)
         << " cubic units" << endl;
    return 0;
}