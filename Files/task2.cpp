#include <iostream>
using namespace std;

class LanderVehicle
{
public:
    void driver()
    {
        cout << "driver method is called\n";
    }
};

class WaterVehicle
{
    public:
        void sail()
        {
            cout << "sail method is called\n";
        }
};

class AmphibiousVehicle : public WaterVehicle , public LanderVehicle
{
    public:
        void switchMode()
        {
            sail();
            driver();
            cout << "Switch Mode Successfull";
        }
};

int main()
{
    AmphibiousVehicle a1;
    a1.switchMode();
}
