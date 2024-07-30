#include <iostream>
#include <string.h>
using namespace std;

class Student
{
    
public:
    char name[40];
    int roll_no;
    int phone;
    char address[40];
};




int main ()
{
    Student s1,s2;
    strcpy(s1.name,"John");
    s1.roll_no = 2;
    s1.phone = 1111;
    strcpy(s1.address,"64A- WallStreet");


    strcpy(s2.name,"Sam");
    s2.roll_no = 3;
    s2.phone = 2222;
    strcpy(s2.address,"64C- WallStreet");

    cout << "\n" << s1.name << "\t" << s1.roll_no << "\t" << s1.phone << "\t" << s1.address << "\n" << s2.name << "\t" << s2.roll_no << "\t" << s2.phone << "\t" << s2.address;
}