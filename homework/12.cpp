// Add two distances in inch-feet by creating a class named 'AddDistance'.

#include <iostream>
using namespace std;

class AddDistance{
    private:
        int inch1 , feet1;
        int feet2 , inch2;
    public:
        void getdata()
        {
            int a,b;
            cout << "Enter first distance feet:";
            cin >> feet1;
            cout << "Enter first distance inch:";
            cin >> inch1;
            cout << "Enter second distance feet:";
            cin >> feet2;
            cout << "Enter second distance inch:";
            cin >> inch2;
        }

        void sumdata()
        {
            int a,b;
            a= feet1 + feet2;
            b= inch1 + inch2;

            if(b >= 12)
            {
                b-=12;
                a++;
            }

            cout << "Sum of Distances:" << a << " Feet " << b << " inch";  
        }
};

int main ()
{
    AddDistance d1;
    d1.getdata();
    d1.sumdata();
}