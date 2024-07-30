// Write a program that would print the information (name, year of joining, salary, address) of three employees by creating a class named 'Employee'. The output should be as follows:
// Name        Year of joining        Address
// Robert        1994        64C- WallsStreat
// Sam        2000        68D- WallsStreat
// John        1999        26B- WallsStreat

#include <iostream>
using namespace std;

class Employee
{

private:
    int year;
    int salary;
    char name[50];
    string Address;

public:
    Employee(int a)
    {
        cout << endl << "Name" << "\t" << "Year of joining" << "\t\t" << "Address";
        cout << endl << "Robert" << "\t" << "1994" << "\t\t\t" << "64C- WallsStreat";
        cout << endl << "Sam" << "\t" << "2000" << "\t\t\t" << "68D- WallsStreat";
        cout << endl << "John" << "\t" << "1999" << "\t\t\t" << "26B- WallsStreat";
        

    }
};

int main()
{
   Employee(1); 
}