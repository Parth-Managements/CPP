// Write a program to print the area of a rectangle by creating a class named 'Area' taking the values of its length and breadth as parameters of its constructor and having a function named 'returnArea' which returns the area of the rectangle. Length and breadth of the rectangle are entered through keyboard.

#include <iostream>
using namespace std;

class Area{
    private:
        int length;
        int breadth;
    
    public:
        Area(int a , int b)
        {
            length = a;
            breadth = b;
        }

        int returnArea()
        {
            return length * breadth;
        }
};

int main ()
{
    int a,b;
    cout << "Enter length of the rectangle:";
    cin >> a;
    cout << "Enter breadth of the rectangle:";
    cin >> b;

    Area a1(a,b);

    cout << "Area of the rectangle is :" << a1.returnArea(); 
 

}