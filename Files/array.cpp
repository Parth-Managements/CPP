// #include <iostream>
// using namespace std;

// int main()
// {

//     int a[5], i, sum = 0;

//     for (i = 0; i < 5; i++)
//     {
//         cout << "\na[" << i << "] : ";
//         cin >> a[i];
//     }

//     for (i = 0; i < 5; i++)
//     {
//         cout << "\na[" << i << "] : " << a[i];
//         sum += a[i];
//     }

//     cout << endl
//          << "Sum : " << sum;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int a[10], i, sum = 0,j,cnt;

//     for (i = 0; i < 10; i++)
//     {
//         cout << "\na[" << i << "] : ";
//         cin >> a[i];
//     }

//     for (i = 0; i < 10; i++)
//     {
//         cout << "\na[" << i << "] : " << a[i];
//     }

//     cout << endl << "Prime numbers are :";

//     i = a[0];
//     while (i <= a[9])
//     {
//         j = 1;
//         cnt = 0;
//         while (j <= i)
//         {
//             if (i % j == 0)
//             {
//                 cnt++;
//             }
//             j++;
//         }
//         if (cnt == 2)
//         {
//             cout << "\t"
//                  << i;

//         }
//         i++;
//     }

// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int a[10], i, j , temp;

//     for (i = 0; i < 10; i++)
//     {
//         cout << "\na[" << i << "] : ";
//         cin >> a[i];
//     }

//     for (i = 0; i < 10; i++)
//     {
//         cout << "\na[" << i << "] : " << a[i];
//     }

//     for (i = 0; i < 10; i++)
//     {
//         for (j = i + 1; j < 10; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }

//     cout << endl << "Ascending order:";

//     for (i = 0; i < 10; i++)
//     {
//         cout << " " << a[i];
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int a[10], i, j , temp;

//     for (i = 0; i < 10; i++)
//     {
//         cout << "\na[" << i << "] : ";
//         cin >> a[i];
//     }

//     for (i = 0; i < 10; i++)
//     {
//         cout << "\na[" << i << "] : " << a[i];
//     }

//     for (i = 0; i < 10; i++)
//     {
//         for (j = i + 1; j < 10; j++)
//         {
//             if (a[i] < a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }

//     cout << endl << "Descending order:";

//     for (i = 0; i < 10; i++)
//     {
//         cout << " " << a[i];
//     }
// }

//-------------------------------------1. Homework------------------------------------------------------

// #include <iostream>
// using namespace std;
// #define value 50

// int main()
// {
//     int i, p, a[value], sum, cnt = 0;
//     p=2;
//     while(cnt < value)
//     {
//         sum=0;
//         for(i=1;i<=p;i++)
//         {
//             if(p%i==0)
//             {
//                 sum++;
//             }
//         }

//         if(sum==2)
//         {
//             a[cnt]=p;
//             cnt++;

//         }
//         p++;
//     }



//     for (i = 0; i < value; i++)
//     {
//         cout << "\na[" << i << "] : " << a[i];
//     }
// }


//-------------------------------------2. Homework------------------------------------------------------


// #include <iostream>
// using namespace std;

// int main()
// {

//     int a[10], i, j , temp,n1,n2;

//     for (i = 0; i < 10; i++)
//     {
//         cout << "\na[" << i << "] : ";
//         cin >> a[i];
//     }

//     for (i = 0; i < 10; i++)
//     {
//         cout << "\na[" << i << "] : " << a[i];
//     }

//     cout << "Enter the index 1:" << endl;
//     cin >> n1;
//     cout << "Enter the index 2:" << endl;
//     cin >> n2;

//     for (i = n1; i < n2; i++)
//     {
//         for (j = i + 1; j < n2; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }

//     cout << endl << "Ascending order:";

//     for (i = 0; i < 10; i++)
//     {
//         cout << " " << a[i];
//     }
// }
