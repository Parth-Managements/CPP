#include <iostream>
#include <stdlib.h>
using namespace std;

class RbiBank
{
public:
    virtual void getROI()
    {
        cout << "In ROI";
    }
};

class SbiBank : public RbiBank
{
public:
    void getROI()
    {
        cout << "6%";
    }
};

class AxisBank : public RbiBank
{
public:
    void getROI()
    {
        cout << "10%";
    }
};
class KotakBank : public RbiBank
{
public:
    void getROI()
    {
        cout << "12%";
    }
};

int main()
{
    int choice;
    RbiBank *rptr;
    while (1)
    {

        cout << "\nEnter below choice : " << "\n1) For SBI \n2) For Axis \n3) For Kotak\n4) Exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            SbiBank s;
            rptr = &s;
            rptr->getROI();
            break;
        }

        case 2:
        {
            AxisBank a;
            rptr = &a;
            rptr->getROI();

            break;
        }

        case 3:
        {
            KotakBank k;
            rptr = &k;
            rptr->getROI();

            break;
        }

        case 4:
        {
            exit(0);
            break;
        }

        default:
            break;
        }
    }
}