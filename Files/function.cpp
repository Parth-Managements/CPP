// --------------------------------------------------- 1. Program --------------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// void gettabel()
// {
//     int n;
//     cout << "Enter the number:";
//     cin >> n;

//     for(int i=1;i<10;i++)
//     {
//          cout << n << "x" << i << "=" << n*i << endl;
//     }

// }

// int main ()
// {

//     gettabel();

//     return 0;
// }

// --------------------------------------------------- 2. Program --------------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// void add(int a, int b)
// {
//     cout << "Addition of a and b is:" << a + b;
// }

// void sub(int a, int b)
// {
//     cout << "Subraction of a and b is:" << a - b;
// }

// void mul(int a, int b)
// {
//     cout << "Multiplication of a and b is:" << a * b;
// }

// void division(int a, int b)
// {
//     cout << "Division of a and b is:" << a / b;
// }

// int main()
// {
//     int n, a, b;
//     cout << "Enter a:";
//     cin >> a;
//     cout << endl << "Enter b:";
//     cin >> b;
//     cout << "1.Addition \n2.Subraction \n3.Multiplication \n4.Division\n";
//     cout << "Enter your choice:";
//     cin >> n;

//     switch (n)
//     {
//     case 1:

//         add(a, b);
//         break;

//     case 2:

//         sub(a, b);
//         break;
//     case 3:

//         mul(a, b);
//         break;
//     case 4:

//         division(a, b);
//         break;

//     default:
//         break;
//     }

//     return 0;
// }

// --------------------------------------------------- 3. Program --------------------------------------------------------------------------

#include <iostream>
using namespace std;

int isPrime(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum++;
        }
    }

    if (sum == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    int n, flag;
    cout << "Enter you number:";
    cin >> n;

    flag = isPrime(n);
    if (flag)
    {
        cout << n << " is prime number";
    }
    else
    {
        cout << n << " is not prime number";
    }

    return 0;
}