// Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class named 'Triangle' with the constructor having the three sides as its parameters.

#include <iostream>
#include <string.h>
using namespace std;

class Triangle
{
public:
    Triangle(int a,int b,int c)
    {
        int area = 0.5*a*c;
        int peri = a+b+c;
        cout << "The area of triangle is " << area << endl;
        cout << "The perimeter of the triangle is " << peri;

    }
    
};



int main ()
{
    Triangle t(3,4,5);

}