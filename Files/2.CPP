#include <iostream>
using namespace std;

int main()
{

    int n1, n2, i, cnt, j, total = 0;
    cout << "Enter number n1:";
    cin >> n1;
    cout << endl
         << "Enter number n2:";
    cin >> n2;

    i = n1;
    while (i <= n2)
    {
        j = 1;
        cnt = 0;
        while (j <= i)
        {
            if (i % j == 0)
            {
                cnt++;
            }
            j++;
        }
        if (cnt == 2)
        {
            cout << "\n"
                 << i;
            total++;
        }
        i++;
    }

    cout << endl
         << "Total prime numbers:" << total;
}