// Print the sum, difference and product of two complex numbers by creating a class named 'Complex' with separate functions for each operation whose real and imaginary parts are entered by the user.

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class Complex
{
    private:
        int real1 , real2;
        int img1 , img2;
        int add_real, add_img;
        int sub_real , sub_img;
        int mul_real , mul_img;
        int div_real , div_img;
    public:
        void getdata()
        {
            cout<<"enter the complex no 1\n";
            cout<<"enter real part \n";
            cin>>real1;
            cout<<"enter img part 2\n";
            cin>>img1;
            cout<<"enter teh complex no 2\n";
            cout<<"enter real part \n";
            cin>>real2;
            cout<<"enter img part 2\n";
            cin>>img2;
        }
        void sum()
        {
            add_real = real1 + real2;
            add_img = img1+img2;
            if(add_real >= 0){
                cout<<add_real<<"+"<<add_img<<"i";
            }
            else{
                cout<<add_real<<"-"<<add_img<<"i";
            }
        }
        void sub()
        {
            sub_real = real1 - real2;
            sub_img = img1 - img2;
            if(sub_real >= 0){
                cout<<sub_real<<"+"<<sub_img<<"i";
            }
            else{
                cout<<sub_real<<"-"<<sub_img<<"i";
            }
        }
        void mul()
        {
            mul_real = real1 * real2;
            mul_img = img1 * img2;
            if(mul_img >= 0){
                cout<<mul_real<<"+"<<mul_img<<"i";
            }
            else{
                cout<<mul_real<<"-"<<mul_img<<"i";
            }
        }

};
int main()
{
    Complex r1;
    r1.getdata();
    cout << "The sum of the complex number is:";
    r1.sum();
    cout << endl << "The difference of the complex number is:";
    r1.sub();
    cout << endl << "The Product of the complex number is:";
    r1.mul();
}