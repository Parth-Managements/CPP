
#include <iostream>
#include <string.h>
using namespace std;

class Triangle
{
private:
    float area = 0.5 * 3*5;
    int perimeter = 3+4+5;
    
public:
    void dispdata()
    {
        cout << endl << "Perimeter = " << perimeter << endl << "Area = " << area;
    }
};




int main ()
{
    Triangle t1;
    t1.dispdata();

}