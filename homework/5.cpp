// Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a class named 'Rectangle' with a function named 'Area' which returns the area. Length and breadth are passed as parameters to its constructor.
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int len, int brd)
    {
        length = len;
        breadth = brd;
    }
    int Area()
    {
        return length * breadth;
    }
};

int main()
{

    Rectangle r1(4, 5);
    Rectangle r2(5, 8);

    cout << endl
         << "Area of rectangle 1 :" << r1.Area();
    cout << endl
         << "Area of rectangle 2 :" << r2.Area();
}
