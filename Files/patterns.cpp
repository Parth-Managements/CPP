// ------------------------------------ 1 Pattern ----------------------------------------------
// #include <iostream>
// using namespace std;

// int main ()
// {

//     int i,j,n,k;
//     cout << "Enter the rows:";
//     cin >> n;
//     for (i=1;i<=n;i++)
//     {
//         k=1;
//         for(int j=1;j<=(2*n)-1;j++)
//         {
//             if(j>=(n+1)-i && j<= (n-1)+i)
//             {
//                 cout << k;
//                 j<n?k++:k--;
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }


// ------------------------------------ 2 Pattern ----------------------------------------------

// #include <iostream>
// using namespace std;

// int main ()
// {

//     int i,j,n,k=0;
//     cout << "Enter the rows:";
//     cin >> n;

//     for (i=1;i<=n;i++)
//     {
//         i<=(n+1)/2?k++:k--;
//         for(int j=1;j<=n;j++)
//         {
            
//             if(j>=k && j <= (n+1)-k)
//             {
//                 cout << "*";

//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

// ------------------------------------ 3 Pattern ----------------------------------------------
// #include <iostream>
// using namespace std;

// int main ()
// {

//     int i,j,n,k,m;
//     k=4;
//     for (i=1;i<=4;i++)
//     {
//         m = k-1;
//         for(int j=1;j<=4;j++)
//         {
            
            
//             if(j<=5-i)
//             {
//                 if(j==1)
//                 {
//                     cout << k;
//                 }
//                 else
//                 {
//                     cout << m;
//                     m--;
//                 }
                
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
        

        
       
        
//     }

//     return 0;
// }


// ------------------------------------ 4 Pattern ----------------------------------------------

#include <iostream>
using namespace std;

int main ()
{

    int i,j,n,k;
    // cout << "Enter the rows:";
    // cin >> n;
    for (i=1;i<=9;i++)
    {
        k=1;
        for(int j=1;j<=9;j++)
        {
            if(j<=6-k || j>=4+i)
            {
                cout << "*";
                
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
