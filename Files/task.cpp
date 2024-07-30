

//---------------------------Multiple Inheritance-------------------------------------------------

#include <iostream>
using namespace std;

class LightController
{
    public:
        void controlLights()
        {
            cout << "control light method is called\n";
        }
};

class TemperatureController
{
    public:
        void controlTemperature()
        {
            cout << "Control temperature is called\n";
        }
};

class SecuritySystem
{
    public:

        void manageSecurity()
        {
            cout << "Manage Security is called\n";
        }

};

class SmartHomeHub : public SecuritySystem , public TemperatureController , public LightController
{
    public:

        void monitorHome()
        {
            cout << "monitor home is called\n";
        }
};

int main ()
{
    SmartHomeHub s1;
    s1.monitorHome();
    s1.manageSecurity();
    s1.controlTemperature();
    s1.controlLights();
}

// ----------------------2. Example-------------
// #include <iostream>
// using namespace std;

// class LanderVehicle
// {
// public:
//     void driver()
//     {
//         cout << "driver method is called\n";
//     }
// };

// class WaterVehicle
// {
//     public:
//         void sail()
//         {
//             cout << "sail method is called\n";
//         }
// };

// class AmphibiousVehicle : public WaterVehicle , public LanderVehicle
// {
//     public:
//         void switchMode()
//         {
//             sail();
//             driver();
//             cout << "Switch Mode Successfull";
//         }
// };

// int main()
// {
//     AmphibiousVehicle a1;
//     a1.switchMode();
// }


//------------------------3.Example------------------------
// #include <iostream>
// using namespace std;

// class AudioPlayer
// {
//     public:
//         void playAudio()
//         {
//             cout << "Audio play method is called\n";
//         }
// };

// class VideoPlayer
// {
//     public:
//         void playVideo()
//         {
//             cout << "Video play method is called\n";
//         }
// };

// class Recorder
// {
// public:
//     void record()
//     {
//         cout << "Record method is called\n";
//     }
// };

// class MultimediaPlayer : public AudioPlayer , public VideoPlayer , public Recorder
// {
//     public:
//         void playAll()
//         {
//             playAudio();
//             playVideo();
//             record();
//         }

// };

// int main ()
// {
//     MultimediaPlayer m1;
//     m1.playAll();
// }

