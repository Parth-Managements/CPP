//0---------------------------------------1. Program-------------------------------------------

// #include <iostream>
// using namespace std;

// int main ()
// {
//     char a[10];

//     cout << "Enter your string:";
//     gets(a);

//     cout << "Your String is:";
//     puts(a);
// }

//0---------------------------------------2. Program-------------------------------------------


// #include <iostream>
// #include <string.h>
// using namespace std;

// int main ()
// {
//     char a[10];

//     cout << "Enter your string:";
//     gets(a);

//     cout << "Length of the string is :" << strlen(a);
// }


//---------------------------------------3. Program-------------------------------------------


// #include <iostream>
// #include <string.h>
// using namespace std;

// int main ()
// {
//     char a[10];

//     cout << "Enter your string:";
//     gets(a);

//     cout << "Capital String:" << strupr(a);
//     return 0;
// }

//---------------------------------------4. Program-------------------------------------------


// #include <iostream>
// #include <string.h>
// using namespace std;

// int main ()
// {
//     char a[10];

//     cout << "Enter your string:";
//     gets(a);

//     cout << "Lower String:" << strlwr(a);
//     return 0;
// }

//---------------------------------------5. Program-------------------------------------------
// #include <iostream>
// #include <string.h>
// using namespace std;

// int main ()
// {
//     char a[10],b[10];

//     cout << "Enter first string:";
//     gets(a);

//     cout << "Enter second string:";
//     gets(b);

//     cout << "Concated String::" << strcat(a,b);
//     return 0;
// }

//---------------------------------------6. Program-------------------------------------------


// #include <iostream>
// #include <string.h>
// using namespace std;

// int main ()
// {
//     char a[10];

//     cout << "Enter your string:";
//     gets(a);

//     cout << "Reverse String:" << strrev(a);
//     return 0;
// }

//---------------------------------------7. Program-------------------------------------------
// #include <iostream>
// #include <string.h>
// using namespace std;

// int main ()
// {
//     char a[10],b[10];
//     int chk;

//     cout << "Enter first string:";
//     gets(a);

//     cout << "Enter second string:";
//     gets(b);

//     chk = strcmp(a,b);

//     if(chk == 0) cout << "Both strings are equal";
//     else cout << "Both strings are not equal";
//     return 0;
// }


//---------------------------------------8. Program-------------------------------------------

#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
    char a[10];

    cout << "Enter your string:";
    gets(a);

    for(int i=0;i<='\0';i++)
    {
        if(a[i] != a[strlen(a)-i-1])
        {
            cout << "Not a Palindrome";
        }
        else
        {
            cout << "Palindrome";
        }
    }

    return 0;
}
