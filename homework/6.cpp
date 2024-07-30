// Write a program to print the area of a rectangle by creating a class named 'Area' having two functions. First function named as 'setDim' takes the length and breadth of the rectangle as parameters and the second function named as 'getArea' returns the area of the rectangle. Length and breadth of the rectangle are entered through keyboard.

#include <iostream>
using namespace std;

class Area{
    private:
    int length;
    int breadth;

    public:
        void setDim(int a , int b)
        {
            length = a;
            breadth = b;
        }

        int getArea()
        {
            return length * breadth;
        }


};

int main ()
{

    Area a1;
    int a,b;

    cout << "Enter length of the rectangle:";
    cin >> a;
    cout << "Enter breadth of the rectangle:";
    cin >> b;

    a1.setDim(a,b);
    cout << "Area of the rectangle is :" << a1.getArea();
}
