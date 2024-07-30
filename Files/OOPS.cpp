// #include <iostream>
// using namespace std;

// class Student
// {

// public:
//     int rno;
//     char name[50];
//     int std;
// };

// int main()
// {

//     Student s1;

//     cout << "Enter the roll no:";
//     cin >> s1.rno;

//     cout << "Enter name:";
//     cin >> s1.name;

//     cout << "Enter std:";
//     cin >> s1.std;

//     cout << "\n"
//          << s1.rno << "\t" << s1.name << "\t" << s1.std;

//     s1.rno = 12;

//     cout << "\n"
//          << s1.rno << "\t" << s1.name << "\t" << s1.std;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// class Student
// {

// private:
//     int rno;
//     char name[50];
//     int std;

// public:
//     void scandata()
//     {
//         cout << "Enter the roll no:";
//         cin >> rno;

//         cout << "Enter name:";
//         cin >> name;

//         cout << "Enter std:";
//         cin >> std;
//     }

//     void dispdata()
//     {
//         cout << "\n"
//              << rno << "\t" << name << "\t" << std;
//     }
// };

// int main()
// {
//     Student s1,s2,s3,s4,s5;

//     s1.scandata();
//     s2.scandata();
//     s3.scandata();
//     s4.scandata();
//     s5.scandata();

//     s1.dispdata();
//     s2.dispdata();
//     s3.dispdata();
//     s4.dispdata();
//     s5.dispdata();

// }

// #include <iostream>
// using namespace std;

// class Employee
// {
// // id name salary dsgn
// private:
//     int id;
//     char name[50];
//     int salary;
//     char desg[50];
//     char ogs[50];

// public:
//     void scandata()
//     {
//         cout << "Enter the id:";
//         cin >> id;

//         cout << "Enter name:";
//         cin >> name;

//         cout << "Enter salary:";
//         cin >> salary;

//         cout << "Enter designation:";
//         cin >> desg;

//         cout << "Enter organisation name:";
//         cin >> ogs;
//     }

//     void dispdata()
//     {

//         cout << "\n"
//              << id << "\t" << name << "\t" << salary << "\t" << desg << "\t" << ogs;
//     }
// };

// int main()
// {
//     Employee e1,e2,e3,e4,e5;

//     e1.scandata();
//     e2.scandata();
//     e3.scandata();
//     e4.scandata();
//     e5.scandata();

//     e1.dispdata();
//     e2.dispdata();
//     e3.dispdata();
//     e4.dispdata();
//     e5.dispdata();

// }

// ---------------------------------2 Day---------------------------------------------

// #include <iostream>
// #include <string.h>
// using namespace std;

// class Student{

//     private:
//         int rno;
//         char name[50];
//         int std;

//     public:
//         void scanData()
//         {
//             cout << "Enter your roll no:";
//             cin >> rno;
//             cout << "Enter your name:";
//             cin >> name;
//             cout << "Enter your std:";
//             cin >> std;
//         }

//         void setData(int rno,char name[],int std)
//         {
//             this->rno= rno;
//             strcpy(this->name,name);
//             this->std = std;
//             this->rno = rno;

//         }

//         void dispData()
//         {
//             cout << endl << rno << "\t" << name << "\t" << std;
//         }
// };

// int main ()
// {

//     Student s[5];

//     for(int i=0;i<5;i++)
//     {
//         s[i].scanData();
//     }

//         for(int i=0;i<5;i++)
//     {
//         s[i].dispData();
//     }
//     Student s1;

//     s1.setData(1,"Virat",5);
//     s1.dispData();
// }

// ------------------------------------------------Inline--------------------------------------------------

// // ---------------------------------2 Day---------------------------------------------

// #include <iostream>
// #include <string.h>
// using namespace std;

// class Student{

//     private:
//         int rno;
//         char name[50];
//         int std;

//     public:
//         void scanData()
//         {
//             cout << "Enter your roll no:";
//             cin >> rno;
//             cout << "Enter your name:";
//             cin >> name;
//             cout << "Enter your std:";
//             cin >> std;
//         }

//         void setData(int rno,char name[],int std)
//         {
//             this->rno= rno;
//             strcpy(this->name,name);
//             this->std = std;
//         }

//         void dispData()
//         {
//             cout << endl << rno << "\t" << name << "\t" << std;
//         }
// };

// int main ()
// {

//     // Student s[5];

//     // for(int i=0;i<5;i++)
//     // {
//     //     s[i].scanData();
//     // }

//     //     for(int i=0;i<5;i++)
//     // {
//     //     s[i].dispData();
//     // }
//     Student s1;

//     s1.setData(1,"Virat",5);
//     s1.dispData();
// }

// ---------------------------------3 Day---------------------------------------------

//--------------------------------------Constructor-------------------------------------------

// ---------------------------------------------------- Default Constructor-----------------------------------------------------

// #include <iostream>
// #include <string.h>

// using namespace std;

// class Student
// {
// private:
//     int rno;
//     char name[50];
//     int std;

// public:
//     Student()
//     {
//         cout << endl
//              << " Start Default Constructor:" << this;
//         rno = 1;
//         strcpy(name, "Virat");
//         std = 12;
//         cout << endl
//              << "End Default Constructor:" << this;
//     }

//     void dispdata()
//     {
//         cout << endl
//              << rno << "\t" << name << "\t" << std;
//     }
// };

// int main()
// {
//     Student s1,s2,s3;

//     s1.dispdata();
//     s2.dispdata();
//     s3.dispdata();
// }

// ---------------------       Default,Parameterised,Copy Constructor ------------------
// #include <iostream>
// #include <string.h>

// using namespace std;

// class Student
// {
// private:
//     int rno;
//     char name[50];
//     int std;

// public:
//     Student()
//     {
//         cout << endl
//              << " Start Default Constructor:" << this;
//         rno = 1;
//         strcpy(name, "Virat");
//         std = 12;
//         cout << endl
//              << "End Default Constructor:" << this;
//     }
//     Student(int r, char n[], int s)
//     {
//         cout << endl
//              << " Start Default Constructor:" << this;
//         rno = r;
//         strcpy(name, n);
//         std = s;
//         cout << endl
//              << "End Default Constructor:" << this;
//     }

//     void dispdata()
//     {
//         cout << endl
//              << rno << "\t" << name << "\t" << std;
//     }
// };

// int main()
// {
//     Student s1, s2(2, "Rohit", 13), s3(3, "Rahul", 14);

//     s1.dispdata();
//     s2.dispdata();
//     s3.dispdata();
// }

// ---------------------------------4 Day---------------------------------------------
// ---------------------------------Destructor---------------------------------------------

// #include <iostream>
// #include <string.h>

// using namespace std;

// class Student
// {
// private:
//     int rno;
//     char name[50];
//     int std;

// public:
//     Student()
//     {
//         rno = 1;
//         strcpy(name, "Virat");
//         std = 12;
//     }
//     Student(int rno, char name[], int std)
//     {
//         this->rno = rno;
//         strcpy(this->name, name);
//         this->std = std;

//     }

//     Student(Student &s)
//     {
//         this->rno = s.rno;
//         strcpy(this->name, s.name);
//         this->std = s.std;
//     }

//     ~Student(){
//         cout << "\nDestructor Called::" << this;

//     }

//     void dispdata()
//     {
//         cout << endl
//              << rno << "\t" << name << "\t" << std << "--------" << this;
//     }
// };

// int main()
// {
//     Student s1, s2(2, "Rohit", 13), s3(s2);

//     s1.dispdata();
//     s2.dispdata();
//     s3.dispdata();
// }

// -------------------------Friend function -----------------------

// #include <iostream>
// using namespace std;

// class Calc{
// private:
//     int n1;
//     int n2;
// public:
//     Calc()
//     {

//     }
//     Calc(int n1,int n2)
//     {
//         this->n1 = n1;
//         this->n2=n2;
//     }

//     void dispdata()
//     {
//         cout << "No1 = " << n1 << "\tNo2 = " << n2;
//     }

//     friend void swapfun(Calc &c);

// };

// void swapfun(Calc &c)
// {
//     int temp = c.n1;
//     c.n1=c.n2;
//     c.n2=temp;
// }

// int main ()
// {
//     Calc c1(1,8);
//     c1.dispdata();
//     swapfun(c1);
//     cout << "\n After swap function calling:\n";
//     c1.dispdata();
// }

// -------------------------Friend function with multiple classes -----------------------

// #include <iostream>
// using namespace std;

// class Calc2;
// class Calc1
// {
// private:
//     int n1;

// public:
//     Calc1()
//     {
//     }
//     Calc1(int n1)
//     {
//         this->n1 = n1;
//     }

//     void dispdata()
//     {
//         cout << "No1 = " << n1;
//     }

//     friend void swapfun(Calc1 &c1, Calc2 &c2);
// };

// class Calc2
// {
// private:
//     int n2;

// public:
//     Calc2()
//     {
//     }
//     Calc2(int n2)
//     {
//         this->n2 = n2;
//     }

//     void dispdata()
//     {
//         cout << "No2 = " << n2;
//     }

//     friend void swapfun(Calc1 &c1, Calc2 &c2);
// };

// void swapfun(Calc1 &c1, Calc2 &c2)
// {
//     int temp = c1.n1;
//     c1.n1 = c2.n2;
//     c2.n2 = temp;
// }

// int main()
// {
//     Calc1 c1(1);
//     Calc2 c2(8);
//     c1.dispdata();
//     c2.dispdata();
//     swapfun(c1, c2);
//     cout << "\n After swap function calling:\n";
//     c1.dispdata();
//     c2.dispdata();
// }

// ---------------------------------4 Day---------------------------------------------
// -------------------------------Operator Overloading--------------------------------
// -------------------------------Unary Opeartor--------------------------------------

// #include <iostream>
// using namespace std;

// class Calc{
// private:
//     int no1,no2,no3;
// public:

//     Calc(int no1,int no2,int no3)
//     {
//         this->no1 = no1;
//         this->no2 = no2;
//         this->no3 = no3;

//     }
//     void operator -()
//     {
//         no1 = -no1;
//         no2 = -no2;
//         no3 = -no3;
//     }
//     void dispdata()
//     {
//         cout << endl << "No1 : " << no1;
//         cout << endl << "No2 : " << no2;
//         cout << endl << "No3 : " << no3;

//     }

// };

// int main ()
// {
//     Calc c(1,2,3);
//     c.dispdata();
//     -c;
//     cout << endl << "After changing";
//     c.dispdata();

// }

// #include <iostream>
// using namespace std;

// class Calc{
// private:
//     int no1,no2,no3;
// public:

//     Calc(int no1,int no2,int no3)
//     {
//         this->no1 = no1;
//         this->no2 = no2;
//         this->no3 = no3;

//     }

//     void dispdata()
//     {
//         cout << endl << "No1 : " << no1;
//         cout << endl << "No2 : " << no2;
//         cout << endl << "No3 : " << no3;

//     }

//     friend void operator -(Calc &c);

// };
//     void operator -(Calc &c)
//     {
//         c.no1 = -c.no1;
//         c.no2 = -c.no2;
//         c.no3 = -c.no3;
//     }

// int main ()
// {
//     Calc c(1,2,3);
//     c.dispdata();
//     -c;
//     cout << endl << "After changing";
//     c.dispdata();

// }

// ---------------------------------4 Day---------------------------------------------
// -------------------------------- Binary Operator ----------------------------------

// #include<iostream>
// using namespace std;

// class Calc
// {

// public:
//     int n1,n2;

//     Calc()
//     {

//     }

//     Calc(int n1,int n2)
//     {
//         this->n1 = n1;
//         this->n2 = n2;

//     }
//     void dispdata()
//     {
//         cout << endl << "No1 : " << n1 << "\tNo2 : " << n2 << "---------------" << this;
//     }

//     Calc operator + (Calc &c2)
//     {
//         Calc temp;

//         temp.n1 = n1 + c2.n1;
//         temp.n2 = n2 + c2.n2;
//         return temp;
//     }

// };

// int main ()
// {
//     Calc c1(10,20),c2(40,80),c3(0,0);

//     c1.dispdata();
//     c2.dispdata();
//     c3.dispdata();

//     c3 = c1+c2;

//     c3.dispdata();

// }

// ---------------------------------- Global friend --------------------------

// #include<iostream>
// using namespace std;

// class Calc
// {
//     int n1,n2;

// public:

//     Calc()
//     {

//     }

//     Calc(int n1,int n2)
//     {
//         this->n1 = n1;
//         this->n2 = n2;

//     }
//     void dispdata()
//     {
//         cout << endl << "No1 : " << n1 << "\tNo2 : " << n2 << "---------------" << this;
//     }

//     friend Calc operator + (Calc &c1 , Calc &c2);
// };

//     Calc operator + (Calc &c1 , Calc &c2)
//     {
//         Calc temp;

//         temp.n1 = c1.n1 + c2.n1;
//         temp.n2 = c1.n2 + c2.n2;
//         return temp;
//     }

// int main ()
// {
//     Calc c1(10,20),c2(40,80),c3(0,0);

//     c1.dispdata();
//     c2.dispdata();
//     c3.dispdata();

//     c3 = c1+c2;

//     c3.dispdata();

// }

// ------------------------------- Encapsulation-----------------------------
// ------------------------------- Pure Encapsulation------------------------
// #include <iostream>
// using namespace std;

// class Employee{
// private:
//     int salary;
//     char name[50];
//     int id;
// public:
//     void scandata()
//     {
//         cout << "Enter id:\n";
//         cin >> id;
//         cout << "Enter name:\n";
//         cin >> name;
//         cout << "Enter salary\n";
//         cin >> salary;
//     }
//     void dispdata()
//     {
//         cout << endl << "ID" << "\t" << "Name" << "\t" << "Salary";
//         cout << endl << id << "\t" << name << "\t" << salary;
//     }
// };

// int main ()
// {
//     Employee e1;
//     e1.scandata();
//     e1.dispdata();

// }

//------------------------------------Inheritance---------------------------
//------------------------------------Single--------------------------------
// #include <iostream>
// #include <string.h>
// using namespace std;

// class Person{
//     private:
//         char name[50];
//     public:
//         Person()
//         {

//         }
//         Person(char name[])
//         {
//             strcpy(this->name,name);
//         }
//         char* getname()
//         {
//             char *p;
//             p = &name[0];

//             return p;
//         }
// };

// class Employee : private Person
// {
//     private:
//         int id;
//         int salary;

//     public:
//         Employee()
//         {}
//         Employee(int id , char name[] , int salary) : Person(name)
//         {
//             this->id = id;
//             this->salary = salary;
//         }
//         void dispdata()
//         {
//             cout << endl << id << "\t" << getname() << "\t" << salary;
//         }

// };

// int main ()
// {
//     Employee e1(1,"Virat",2000);
//     e1.dispdata();
// }

//------------------------------Multiple Inheritance-------------------------
// #include <iostream>
// using namespace std;

// class Person
// {
//     protected:
//         int age;
//         char name[50];

// };

// class Employee : protected Person
// {
//     protected:
//         int eid;
//         char department[50];

// };

// class Professor : private Employee
// {
//     private:
//         char course[50];
//         char publication[50];

//     public:
//         void scandata()
//         {
//             cout << "Enter eid:";
//             cin >> eid;
//             cout << "Enter name:";
//             cin >> name;
//             cout << "Enter age:";
//             cin >> age;
//             cout << "Enter course:";
//             cin >> course;
//             cout << "Enter publications:";
//             cin >> publication;
//             cout << "Enter departnent:";
//             cin >> department;
//         }

//         void dispdata()
//         {
//             cout << endl << "\t" << eid << "\t" << name << "\t" << age << "\t" << course << "\t" << publication << "\t" << department;
//         }
// };

// int main ()
// {
//     Professor p1;
//     p1.scandata();
//     p1.dispdata();

// }

//----------- Hiearchical inheritance----------------------

// #include <iostream>
// using namespace std;

// class Employee
// {
//     protected:
//         char name[50];
//         int id;
// };

// class Manager : protected Employee
// {
//     protected:
//         int numberofteams;

//     public:
//         void scandata()
//         {
//             cout << "Enter id:";
//             cin >> id;
//             cout << "Enter name:";
//             cin >> name;
//             cout << "Enter number of teams:";
//             cin >> numberofteams;
//         }
//         void dispdata()
//         {
//             cout << endl << id << "\t" << name << "\t" << numberofteams;
//         }

// };

// class Developer : protected Employee
// {
//     protected:
//         char programminlanguage[50];

//         public:
//         void scandata()
//         {
//             cout << "Enter id:";
//             cin >> id;
//             cout << "Enter name:";
//             cin >> name;
//             cout << "Enter programminlanguage:";
//             cin >> programminlanguage;
//         }
//         void dispdata()
//         {
//             cout << endl << id << "\t" << name << "\t" << programminlanguage;
//         }

// };
// int main ()
// {
//     Manager m1;
//     Developer d1;
//     int choice;
//     cout << "1. Manager \t 2.Developer\n";
//     cin >> choice;

//     switch (choice)
//     {
//         case 1:
//             m1.scandata();
//             m1.dispdata();
//             break;

//         case 2:
//             d1.scandata();
//             d1.dispdata();
//             break;

//     default:
//         break;
//     }

// }

// --------------------------Multiple inheritance---------------------------

// #include <iostream>
// using namespace std;

// class LightController
// {
//     public:
//         void controlLights()
//         {
//             cout << "control light methos is called\n";
//         }
// };

// class TemperatureController
// {
//     public:
//         void controlTemperature()
//         {
//             cout << "Control temperature is called\n";
//         }
// };

// class SecuritySystem
// {
//     public:

//         void manageSecurity()
//         {
//             cout << "Manage Security is called\n";
//         }

// };

// class SmartHomeHub : public SecuritySystem , public TemperatureController , public LightController
// {
//     public:

//         void monitorHome()
//         {
//             cout << "monitor home is called\n";
//         }
// };

// int main ()
// {
//     SmartHomeHub s1;
//     s1.monitorHome();
//     s1.manageSecurity();
//     s1.controlTemperature();
//     s1.controlLights();
// }

//-----------------------------Hybrid Inheritance---------------------------
// #include <iostream>
// using namespace std;

// class Media
// {
//     public:
//     char title[40];
// };

// class Audio : public Media
// {
//     public:
//     int duration;
// };

// class Video : public Media
// {
//     public:
//     int resolution;
// };

// class Mediaplayer : public Audio , public Video
// {
//     public:

//     void scanMediaPlayerInfo()
//     {
//         cout << "Enter title:";
//         cin >> Video::title;
//         cout << "Enter duration:";
//         cin>> duration;
//         cout << "Enter resolution:";
//         cin >> resolution;

//     }
//     void displayeMediaPlayerInfo()
//     {
//         cout << endl << Video::title << "\t" << duration << "\t" << resolution;
//     }
// };

// int main ()
// {
//     Mediaplayer m1;
//     m1.scanMediaPlayerInfo();
//     m1.displayeMediaPlayerInfo();
// }

// #include <iostream>
// using namespace std;

// class User
// {
//     public:
//     char username[50];
//     char email[50];
//         void displayUserinfo()
//         {
//             cout << "\n" << username << "\t" << email;
//         }

// };

// class Customer: public User
// {
//     public:
//     int customerid = 1;
//     void displayCustomerinfo()
//     {
//         cout << "Enter customer name:";
//         cin >> username;
//         cout << "Enter your email:";
//         cin >> email;
//         cout << endl << "--------------Customer Info-----------------" << endl;
//         cout << "\n" << customerid << "\t" << username << "\t" << email<<endl;
//     }
// };

// class Vendor: public User
// {
//     public:
//     int vendorid = 2;
//     void displayvendorinfo()
//     {
//         cout << "Enter Vendor name:";
//         cin >> username;
//         cout << "Enter your email:";
//         cin >> email;
//         cout << endl << "--------------Vendor Info-----------------" << endl;
//         cout << "\n" << vendorid << "\t" << username << "\t" << email << endl;
//     }
// };

// class Admin : public Customer , public Vendor
// {
//     public:
//         void displayinfo()
//         {
//             displayCustomerinfo();
//             displayvendorinfo();
//         }
// };

// int main ()
// {
//     Admin a1;
//     a1.displayinfo();
// }

//--------------------------Virtual base class OR Dead Diamond problem---------------------------
// #include <iostream>
// using namespace std;

// class A
// {
//     public:
//         int no1;
// };
// class B : virtual public A
// {
//     public:
//         int no2;
// };
// class C : virtual public A
// {
//     public:
//         int no3;
// };
// class D : public B , public C
// {
//     public:
//         int no4;
// };

// int main ()
// {
//     D d1;

//     d1.no1 = 18;
//     cout << "D1 no1:" << d1.no1;

// }

// #include <iostream>
// #include<string.h>
// using namespace std;

// class Employee{

//     public:
//     int salary;
//     char name[50];
//         Employee()
//         {

//         }
//         void display()
//         {
//             cout << endl << "Name:" << name << ",Salary:" << salary;
//         }
// };

// class Manager : virtual public Employee
// {
//     private:
//     public:
//         int level;
//         Manager()
//         {

//         }
//         void display()
//         {
//             Employee::display();
//             cout <<  "Level:" << level;
//         }
// };

// class Executive : virtual public Employee
// {
//     private:
//     public:
//         char stockOptions[50];
//         Executive()
//         {}

//         void display()
//         {
//             Employee::display();
//             cout << "Stock Options:" << stockOptions;
//         }
// };

// class ManagerExecutiveDisplay : public Manager , public Executive
// {
//     public:

//         ManagerExecutiveDisplay()
//         {

//         }
//         ManagerExecutiveDisplay(int salary , int level , char stockOptions[],char name[])
//         {
//             this->level = level;
//             this->salary = salary;
//             strcpy(this->name,name);
//             strcpy(this->stockOptions,stockOptions);

//         }

//         void display()
//         {
//             Employee::display();
//             cout << endl << "Level:" << level << ",Stock Options:" << stockOptions;

//         }
// };

// int main ()
// {
//     ManagerExecutiveDisplay obj(2000,10,"xyz","Virat");
//     obj.display();
// }

//-------------------------------------------Polymorphism----------------------------------
//------------------Method overloading-----------------------------
// #include <iostream>
// using namespace std;

// class Calc{
//     public:
//         void addnum(){
//             int n1,n2;
//             cout << "Enter no1:";
//             cin >> n1;
//             cout << "Enter no2:";
//             cin >> n2;
//             int ans = n1+n2;
//             cout << "no1 + no2 = " << ans << "\t" << "Zero argument method";
//         }
//         void addnum(int n1,int n2)
//         {
//             int ans = n1+n2;
//             cout << endl << "no1 + no2 = " << ans << "\t" << "two argument method";
//         }
//         void addnum(int n1,int n2,int n3)
//         {
//             int ans = n1+n2+n3;
//             cout << endl << "no1 + no2 + no3 = " << ans << "\t" << "three argument method";
//         }
//         void addnum(int n1,int n2,int n3,int n4)
//         {
//             int ans = n1+n2+n3+n4;
//             cout << endl << "no1 + no2 + no3 + no4 = " << ans << "\t" << "Four argument method";
//         }
// };

// int main ()
// {
//     Calc c1;
//     c1.addnum();
//     c1.addnum(10,20);
//     c1.addnum(10,20,30);
//     c1.addnum(10,20,30,40);
// }

//-------------------Pointer with object-------------------------------

// #include <iostream>
// using namespace std;

// class Student{
//     private:
//         int std;
//         int roll;
//         char name[50];
//     public:
//         void scandata()
//         {
//             cout << "Enter std:";
//             cin >> std;
//             cout << "Enter roll:";
//             cin >> roll;
//             cout << "Enter name:";
//             cin >> name;
//         }
//         void dispdata()
//         {
//             cout << endl << std << "\t" << name << "\t" << roll;
//         }

// };

// int main ()
// {
//     Student s1,*p;
//     p->scandata();
//     p->dispdata();

// }

//-------------------------------------------------------------------------
// #include <iostream>
// using namespace std;

// class Student{
//     private:
//         int std;
//         int roll;
//         char name[50];
//     public:
//         void scandata()
//         {
//             cout << "Enter std:";
//             cin >> std;
//             cout << "Enter roll:";
//             cin >> roll;
//             cout << "Enter name:";
//             cin >> name;
//         }
//         void dispdata()
//         {
//             cout << endl << std << "\t" << name << "\t" << roll;
//         }

// };

// int main ()
// {
//     Student s[5] , *ptr;
//     int i;
//     ptr = &s[0];

//     for(i=1;i<=5;i++)
//     {
//         ptr->scandata();
//         ptr++;
//     }

//     ptr = &s[0];

//     for(i=1;i<=5;i++)
//     {
//         ptr->dispdata();
//         ptr++;
//     }

// }

//-----------------------------------------------------------------------------------
// #include <iostream>
// using namespace std;

// class Product
// {
// private:
//     char name[50];
//     int price;

// public:
//     void scandata()
//     {
//         cout << "Enter product name:";
//         cin >> name;
//         cout << "Enter product price:";
//         cin >> price;
//     }

//     void dispdata()
//     {
//         cout << endl
//              << name << "\t" << price;
//     }
// };

// int main()
// {
//     Product p[5], *ptr;
//     int i;

//     ptr = &p[0];
//     for (i = 0; i <5; i++)
//     {
//         ptr->scandata();
//         ptr++;
//     }

//     ptr = &p[0];

//     for (i = 0; i < 5; i++)
//     {
//         ptr->dispdata();
//         ptr++;
//     }
// }

// ------------------------------------------------------------------------------------
// #include <iostream>
// using namespace std;

// class Vehicle
// {
//     public:
//         virtual void getspec()
//         {
//             cout << "\nVehicle :: getSpec()";
//         }
// };

// class TwVehicle : public Vehicle
// {
//     public:
//         void getspec()
//         {
//             cout << "\nTwVehicle :: getspec()";
//         }
// };

// class LmvVehicle : public Vehicle
// {
//     public:
//         void getspec()
//         {
//             cout << "\nLmvVehicle :: getspec()";
//         }
// };

// class HmvVehicle : public Vehicle
// {
//     public:
//         void getspec()
//         {
//             cout << "\nHmvVehicle :: getspec()";
//         }
// };

// int main ()
// {
//     int choice;
//     Vehicle* vptr;
//     cout << "\nEnter below choice : " << "\n1) For Twvehicel \n2) For LmvVehicle \n3) For HmvVehicle";
//     cin >> choice;
//     switch (choice)
//     {
//     case 1: {TwVehicle tw;
//             vptr = &tw;
//             vptr->getspec();
//         break;}
//     case 2: {LmvVehicle lmv;
//             vptr = &lmv;
//             vptr->getspec();
//         break;}
//     case 3: {HmvVehicle hmv;
//             vptr = &hmv;
//             vptr->getspec();
//         break;}
//     default:
//         break;
//     }

// }

// ----------------------------------------Abstraction-----------------------
// #include <iostream>
// using namespace std;

// class Vehicle
// {
// public:
//     virtual void getspec() = 0;
// };

// class TwVehicle : public Vehicle
// {
// public:
//     void getspec()
//     {
//         cout << "\nTwVehicle :: getspec()";
//     }
// };

// class LmvVehicle : public Vehicle
// {
// public:
//     void getspec()
//     {
//         cout << "\nLmvVehicle :: getspec()";
//     }
// };

// class HmvVehicle : public Vehicle
// {
// public:
//     void getspec()
//     {
//         cout << "\nHmvVehicle :: getspec()";
//     }
// };

// int main()
// {
//     int choice;
//     Vehicle *vptr;
//     while (1)
//     {
//         cout << "\nEnter below choice : " << "\n1) For Twvehicel \n2) For LmvVehicle \n3) For HmvVehicle\n4) Exit\n";
//         cin >> choice;
//         switch (choice)
//         {
//         case 1:
//         {
//             TwVehicle tw;
//             vptr = &tw;
//             vptr->getspec();
//             break;
//         }
//         case 2:
//         {
//             LmvVehicle lmv;
//             vptr = &lmv;
//             vptr->getspec();
//             break;
//         }
//         case 3:
//         {
//             HmvVehicle hmv;
//             vptr = &hmv;
//             vptr->getspec();
//             break;
//         }
//         case 4:
//             exit(0);
//             break;
//         default:
//             break;
//         }
//     }
// }