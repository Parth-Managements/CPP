// Print the average of three numbers entered by the user by creating a class named 'Average' having a function to calculate and print the average without creating any object of the Average class.

#include <iostream>
using namespace std;

class Average{
    public:
        Average(int a , int b , int c){
            getaverage(a,b,c);
        }
        void getaverage(int a , int b , int c)
        {
            cout << "The average of three number is " << (a+b+c)/3;
        }          
};

int main ()
{
    int a,b,c;
    cout << "Enter three number:";
    cin >> a >> b >> c;
    Average(a,b,c);
    
}