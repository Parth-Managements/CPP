#include <iostream>
#include <string.h>
using namespace std;

class Student
{
    
public:
    char name[50];
    int roll_no;
};




int main ()
{
    Student s1;
    strcpy(s1.name,"John");
    s1.roll_no = 2;

    cout << "\n" << s1.name << "\t" << s1.roll_no;

}