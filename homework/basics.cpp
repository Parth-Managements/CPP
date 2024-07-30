// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Welcome to the world of C++" << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "\n\n My bio-data";
//     cout << "\n\n NAME:- ANANYA .A. KOLKARI";
//     cout << "\n\n DATE OF BIRTH :- DATE-MONTH-YEAR";
//     cout << "\n\n ADDRESS :- AHMEDABAD-380050";
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     cout << "\n Name \t : \t ANANYA A. KOTHARI";
//     cout << "\n Address \t : \t \"DevKutir\" Bungalows, Navrangpura";
//     cout << "\n Education \t : \t B.Com, PGDCA";
//     cout << "\n Computers \t : \t \"C\" language, C++, PHP";
//     cout << "\n\t\t\t : \t MySQL , Oracle";
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     char c;
//     int i;
//     float f;

//     cout << "\nEnter a character: ";
//     cin >> c;

//     cout << "\nEnter Integer: ";
//     cin >> i;

//     cout << "\nEnter Real number / Decimal number: ";
//     cin >> f;

//     cout << "\n\tCharacter = " << c << endl;
//     cout << "\n\tInteger = " << i << endl;
//     cout << "\n\tReal number / Decimal number = " << f << endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int no1, no2, no3;
//     float sum = 0, avg;

//     no1 = 10;
//     no2 = 10;
//     no3 = 10;

//     sum = no1 + no2 + no3;
//     avg = sum / 3.0;  // Using 3.0 to ensure floating-point division

//     cout << "\nSum of numbers : " << fixed << sum;
//     cout << "\nAvg of numbers : " << fixed << avg;

//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main() {
//     double radius, circum, breath, height, area;

//     cout << "Enter radius: ";
//     cin >> radius;
//     area = 3.14 * radius * radius;
//     cout << "Area = " << area << endl;

//     cout << "\nEnter breath and height: ";
//     cin >> breath >> height;
//     area = 0.5 * breath * height;
//     cout << "Area = " << area << endl;

//     circum = 2 * 3.14 * radius;
//     cout << "Circumference = " << circum << endl;

//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main() {
//     int sec = 0, min = 0, hour = 0, remsec = 0;

//     cout << "Enter seconds: ";
//     cin >> sec;

//     hour = sec / 3600;
//     min = (sec % 3600) / 60;
//     remsec = (sec % 3600) % 60;

//     cout << "\nHour is " << hour;
//     cout << "\nMin is " << min;
//     cout << "\nSec is " << remsec << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int d, days, m;

//     cout << "\nEnter no. of days: ";
//     cin >> d;

//     m = d / 30;
//     days = d % 30;

//     cout << "\nNo. of months: " << m;
//     cout << "\nNo. of days: " << days << endl;

//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main() {
//     float p, r, n;
//     float SI;

//     cout << "\nEnter principle amount: ";
//     cin >> p;

//     cout << "\nEnter Rate of Interest: ";
//     cin >> r;

//     cout << "\nEnter No. of years: ";
//     cin >> n;

//     SI = (p * r * n) / 100.0;

//     cout << "\nSimple Interest is: " << SI << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int a, b, c;

//     cout << "Enter the value of a: ";
//     cin >> a;

//     cout << "Enter the value of b: ";
//     cin >> b;

//     c = a;
//     a = b;
//     b = c;

//     cout << "\nAfter swap the value of a is: " << a;
//     cout << "\nAfter swap the value of b is: " << b << endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     float basic, da, hra, gp, pf, np;

//     cout << "\nEnter the basic salary: ";
//     cin >> basic;

//     da = (basic * 4) / 100;
//     hra = (basic * 10) / 100;

//     cout << "\nDA is " << da;
//     cout << "\nHRA is " << hra;

//     gp = basic + da + hra;
//     pf = (basic * 9) / 100;
//     np = gp - pf;

//     cout << "\nNet Pay is " << np;
//     cout << "\nGross Pay is " << gp << endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int number;

//     cout << "\nEnter a number: ";
//     cin >> number;

//     if (number % 2 == 1)
//         cout << "Odd";
//     else
//         cout << "Even";

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int number;

//     cout << "\nEnter a number: ";
//     cin >> number;

//     if (number > 0)
//         cout << "Positive";
//     else if (number < 0)
//         cout << "Negative";
//     else
//         cout << "Zero";

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;

//     cout << "\nEnter two numbers: ";
//     cin >> a >> b;

//     if (a > b)
//         cout << "a is max";
//     else if (b > a)
//         cout << "b is max";
//     else
//         cout << "both are same";

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int m1, m2, m3, total = 0;
//     float avg = 0;

//     cout << "\nEnter m1, m2, m3 between 1 to 100: ";
//     cin >> m1 >> m2 >> m3;

//     total = m1 + m2 + m3;
//     cout << "\nTotal is " << total;

//     avg = static_cast<float>(total) / 3;
//     cout << "\nAverage is " << avg;

//     cout << "\nGrade is : ";
//     if (avg >= 70)
//         cout << "\tA grade";
//     else if (avg >= 60)
//         cout << "\tB grade";
//     else if (avg >= 50)
//         cout << "\tC grade";
//     else
//         cout << "\tFail";

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int a, b, c;

//     cout << "Enter a, b, c: ";
//     cin >> a >> b >> c;

//     if (a > b) {
//         if (a > c) {
//             cout << "a is biggest";
//         } else {
//             cout << "c is biggest";
//         }
//     } else {
//         if (b > c) {
//             cout << "b is biggest";
//         } else {
//             cout << "c is biggest";
//         }
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int m1, m2, m3, total = 0;
//     float avg = 0;

//     cout << "\nEnter m1, m2, m3 between 1 to 100: ";
//     cin >> m1 >> m2 >> m3;

//     total = m1 + m2 + m3;
//     avg = static_cast<float>(total) / 3;

//     cout << "\nTotal \t\t : " << total;
//     cout << "\nAverage \t : " << avg;

//     if (m1 >= 35 && m2 >= 35 && m3 >= 35) {
//         cout << "\nStatus = Pass";

//         if (avg >= 70)
//             cout << "\nGrade = A";
//         else if (avg >= 60)
//             cout << "\nGrade = B";
//         else if (avg >= 50)
//             cout << "\nGrade = C";
//         else
//             cout << "\nGrade = D";
//     } else {
//         cout << "\nStatus = Fail \nGrade = NA";
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n1, n2, max;
    
//     cout << "Enter the two values: ";
//     cin >> n1 >> n2;
    
//     max = (n1 > n2) ? n1 : n2;
    
//     cout << "Maximum from " << n1 << " and " << n2 << " is " << max << endl;
    
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n1, n2, n3, max;
    
//     cout << "Enter the 3 values: ";
//     cin >> n1 >> n2 >> n3;
    
//     max = (n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3);
    
//     cout << "Maximum value from " << n1 << ", " << n2 << " and " << n3 << " is " << max << endl;
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     char ch;
    
//     cout << "\nEnter any character: ";
//     ch = getchar(); 
    
//     if (ch >= '0' && ch <= '9') {
//         cout << "\nCh is Digit";
//     } else {
//         cout << "\nCh is Not Digit";
//     }
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     char ch;
    
//     cout << "\nEnter any character: ";
//     ch = getchar();
    
//     if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
//         cout << "\nCh is Alphabet";
//     } else {
//         cout << "\nNot Alphabet";
//     }
    
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     char ch, ch1;
    
//     cout << "\nEnter any character: ";
//     ch = getchar(); 
    
//     if (ch >= 'a' && ch <= 'z') {
//         cout << "\nCh is lower case";
//     } else {
//         cout << "\nNot lower case";
//     }
    
//     if (ch >= 'A' && ch <= 'Z') {
//         ch1 = ch + 32;
//         cout << "\nChar " << ch1 << " is in lower case";
//     }
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     char ch;
    
//     cout << "\nEnter any character: ";
//     ch = getchar(); 
    
//     if (ch >= 'A' && ch <= 'Z') {
//         cout << "\nCh is UPPER case";
//         char ch_lower = ch + ('a' - 'A'); 
//         cout << "\nCh " << ch_lower << " is in lower case";
//     } else if (ch >= 'a' && ch <= 'z') {
//         cout << "\nCh is lower case";
//     } else {
//         cout << "\nNot an alphabet character";
//     }
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     char letter;
    
//     cout << "\nEnter any character: ";
//     cin >> letter;
    
//     if (letter =='a' || letter=='e' || letter=='i' || letter =='o' || letter =='u') {
//         cout << "Letter is vowel";
//     } else {
//         cout << "Letter is Consonant";
//     }
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     char letter;
    
//     cout << "\nEnter any character: ";
//     cin >> letter;
    
//     switch (tolower(letter)) {
//         case 'a':
//         case 'e':
//         case 'i':
//         case 'o':
//         case 'u':
//             cout << "Letter is vowel";
//             break;
//         default:
//             cout << "Letter is consonant";
//             break;
//     }
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int option, n1, n2;
    
//     cout << "1. Add" << endl;
//     cout << "2. Subtract" << endl;
//     cout << "3. Multiply" << endl;
//     cout << "4. Divide" << endl;
//     cout << "Enter option from menu 1 - 4: ";
//     cin >> option;
    
//     cout << "Enter two numbers: ";
//     cin >> n1 >> n2;
    
//     switch (option) {
//         case 1:
//             cout << "Answer is " << (n1 + n2);
//             break;
//         case 2:
//             cout << "Answer is " << (n1 - n2);
//             break;
//         case 3:
//             cout << "Answer is " << (n1 * n2);
//             break;
//         case 4:
//             if (n2 != 0) {
//                 cout << "Answer is " << (n1 / n2);
//             } else {
//                 cout << "Division by zero error!";
//             }
//             break;
//         default:
//             cout << "Invalid option!";
//             break;
//     }
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int number;
    
//     cout << "\nEnter any number: ";
//     cin >> number;
    
//     switch (number) {
//         case 1:
//         case 2:
//         case 3:
//         case 4:
//         case 5:
//             cout << "Between 1 - 5";
//             break;
//         case 6:
//         case 7:
//         case 8:
//         case 9:
//         case 10:
//             cout << "Between 6 - 10";
//             break;
//         default:
//             cout << "Greater than 10";
//             break;
//     }
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int no;
    
//     cout << "Enter a number between 1 to 5: ";
//     cin >> no;
    
//     switch (no) {
//         case 1:
//             cout << "One";
//             break;
//         case 2:
//             cout << "Two";
//             break;
//         case 3:
//             cout << "Three";
//             break;
//         case 4:
//             cout << "Four";
//             break;
//         case 5:
//             cout << "Five";
//             break;
//         default:
//             cout << "Out Of Range";
//             break;
//     }
    
//     return 0;
// }



//---------------------------------Loops---------------------------------------------

// #include <iostream>
// using namespace std;

// int main() {
//     int i = 1;
    
//     while (i <= 10) {
//         cout << i << "\t"; 
//         i++; 
//     }
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int i = 1;
//     int sum = 0;
    
//     while (i <= 10) {
//         cout << i << "\t";
//         sum = sum + i;
//         i++;
//     }
    
//     cout << endl << sum;
    
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int e, b, m = 1, i;

//     cout << "Enter number & Power: ";
//     cin >> b >> e;

//     i = 1;
//     while (i <= e) {
//         m = m * b;
//         i++;
//     }

//     cout << "Result of power is: " << m << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int no, f = 1, i;

//     cout << "Enter the number: ";
//     cin >> no;

//     i = 1;
//     while (i <= no) {
//         f = f * i;
//         i++;
//     }

//     cout << "The factorial is: " << f << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int no, i, sum = 0, k;

//     cout << "Enter one number: ";
//     cin >> no;
//     k = no;

//     while (no > 0) {
//         i = no % 10;
//         sum = sum + (i * i * i);
//         no = no / 10;
//     }

//     if (sum == k)
//         cout << "It is an Armstrong number." << endl;
//     else
//         cout << "It is not an Armstrong number." << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int no, no1, sum = 0;
//     int i;

//     cout << "Enter a number: ";
//     cin >> no;
//     no1 = no;

//     while (no > 0) {
//         i = no % 10;
//         sum = (sum * 10) + i;
//         no = no / 10;
//     }

//     if (sum == no1)
//         cout << "Palindrome number." << endl;
//     else
//         cout << "Not a palindrome number." << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int no, m = 1, sum = 0;
//     int i;

//     cout << "Enter a number: ";
//     cin >> no;

//     int originalNo = no; 

//     while (no > 0) {
//         i = no % 10;
//         sum = sum + i;
//         m = m * i;
//         no = no / 10;
//     }

//     if (sum == m)
//         cout << "Twin number." << endl;
//     else
//         cout << "Not a twin number." << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int i, p = 0, n = 1, a;

//     cout << p << "," << n << ","; 

//     i = 1;
//     while (i <= 15) {
//         a = p + n;
//         cout << a << ","; 
//         p = n;
//         n = a;
//         i++;
//     }


//     return 0;

// }

// #include <iostream>
// using namespace std;

// int main() {
//     int no, no1;
//     int i;

//     cout << "Enter a number: ";
//     cin >> no;
//     no1 = no;

//     while (no > 0) {
//         i = no % 10;
//         cout << i; 
//         no = no / 10;
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int no, no1, sum = 0;
//     int i;

//     cout << "Enter a number: ";
//     cin >> no;
//     no1 = no;

//     while (no > 0) {
//         i = no % 10;
//         sum = (sum * 10) + i; 
//         no = no / 10;
//     }

//     cout << "Reverse Number: " << sum << endl;


//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     int i = 0;
    
//     cout << "Enter the digit: ";
//     cin >> num;
    
//     while (num != 0) {
//         num = num / 10;
//         ++i;
//     }
    
//     cout << "Length = " << i << endl;
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int no, sum = 0, rem = 0;
    
//     cout << "\nEnter a Number: ";
//     cin >> no;
    
//     while (no > 0) {
//         rem = no % 10;
//         sum = sum + rem;
//         no = no / 10;
//     }
    
//     cout << "\nSum of digits of a number: " << sum << endl;
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int no, sum = 0, rem = 0;
    
//     cout << "\nEnter a Number: ";
//     cin >> no;
    
//     while (no > 0) {
//         rem = no % 10;
//         if (rem % 2 != 0) {
//             sum = sum + rem;
//         }
//         no = no / 10;
//     }
    
//     cout << "\nSum of Odd digits of a number: " << sum << endl;
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int e, b, m = 1, i;
//     cout << "Enter number & Power: ";
//     cin >> b >> e;
//     i = 1;
//     do {
//         m = m * b;
//         i++;
//     } while (i <= e);
//     cout << "Result of power is: " << m << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int no, f = 1, i;
//     cout << "Enter the number: ";
//     cin >> no;
//     i = 1;
//     do {
//         f = f * i;
//         i++;
//     } while (i <= no);
//     cout << "The factorial is " << f << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int no, m = 1, sum = 0;
//     int i;
//     cout << "Enter a number: ";
//     cin >> no;
//     int originalNo = no; // Store the original number for comparison later

//     do {
//         i = no % 10;
//         sum = sum + i;
//         m = m * i;
//         no = no / 10;
//     } while (no > 0);

//     if (sum == m && originalNo != 0) {
//         cout << "Twin number." << endl;
//     } else {
//         cout << "Not a Twin number." << endl;
//     }

//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main() {
//     int no, no1, sum = 0;
//     int i;
//     cout << "Enter a number: ";
//     cin >> no;
//     no1 = no; // Store the original number for comparison later

//     do {
//         i = no % 10;
//         sum = (sum * 10) + i;
//         no = no / 10;
//     } while (no > 0);

//     if (sum == no1) {
//         cout << "Palindrome number." << endl;
//     } else {
//         cout << "Not a palindrome number." << endl;
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     cout << "The numbers between 1 to 100" << endl;
//     for (int i = 1; i <= 100; i++) {
//         cout << i << " ";
//     }
    
//     cout << "\nThe numbers between 100 to 1" << endl;
//     for (int i = 100; i >= 1; i--) {
//         cout << i << " ";
//     }
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int no, f = 1, i;

//     cout << "Enter the number: ";
//     cin >> no;

//     for (i = 1; i <= no; i++) {
//         f = f * i;
//     }

//     cout << "The factorial is " << f << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int no, i = 1, res = 0;

//     cout << "Enter the number: ";
//     cin >> no;

//     while (no > 0) {
//         i = no % 10;
//         res = (res * 10) + i;
//         no = no / 10;
//     }

//     cout << "The reverse number is " << res << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int i, no1, no2;

//     cout << "Enter the first number: ";
//     cin >> no1;

//     cout << "Enter the second number: ";
//     cin >> no2;

//     for (i = no1; i <= no2; i++) {
//         cout << i << " ";
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int i, no1, no2;

//     cout << "\nEnter the first number: ";
//     cin >> no1;

//     cout << "\nEnter the second number: ";
//     cin >> no2;

//     for (i = no1; i <= no2; i++) {
//         if (i % 2 == 0) {
//             cout << i << " ";
//         }
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int i, no;

//     cout << "\nEnter a number: ";
//     cin >> no;

//     for (i = 1; i <= 10; i++) {
//         cout << "\n" << no << " * " << i << " = " << (no * i);
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int no, i, f = 1;

//     cout << "Enter a number: ";
//     cin >> no;

//     for (i = 2; i < no; i++) {
//         if (no % i == 0) {
//             f = 0;
//             break;
//         }
//     }

//     if (f == 1)
//         cout << "Number is a prime number." << endl;
//     else
//         cout << "Number is not a prime number." << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int t, i, x, n, sum = 1;

//     cout << "Enter value of x and n: ";
//     cin >> x >> n;

//     for (i = 1; i <= n; i++) {
//         t = 1;
//         for (int j = 1; j <= i; j++) {
//             t *= x;
//         }
//         sum += t;
//     }

//     cout << "Sum is " << sum << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n, i, f = 0, sum = 0;

//     cout << "Enter one value: ";
//     cin >> n;

//     for (i = 1; i <= n; i += 2) {
//         if (f == 1) {
//             sum += i;
//             f = 0;
//         } else {
//             sum -= i;
//             f = 1;
//         }
//     }

//     cout << "Sum of series is " << sum << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int i, j, m = 1, n = 5, sum = 0;

//     for (i = 1; i <= n; i++) {
//         m = 1;
//         for (j = 1; j <= i; j++) {
//             m *= j;
//         }
//         sum += m;
//     }

//     cout << "Sum of all factorials is " << sum << endl;

//     return 0;
// }


//------------------Patterns-------------------------------------
// #include <iostream>
// using namespace std;

// int main() {
//     int i, j, n;

//     cout << "Enter a Number to Generate a Series: ";
//     cin >> n;
//     cout << endl;

//     for (i = 1; i <= n; i++) {
//         for (j = 1; j <= i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int i, j, n;

//     cout << "Enter a number to generate Series: ";
//     cin >> n;

//     for (i = 1; i <= n; i++) {
//         for (j = 1; j <= i; j++) {
//             cout << j;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int i, j, n;

//     cout << "Enter a number to generate Series: ";
//     cin >> n;

//     for (i = 1; i <= n; i++) {
//         for (j = 1; j <= i; j++) {
//             cout << i;
//         }
//         cout << endl;
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int i, j, k = 1, n;

//     cout << "Enter a number to generate series: ";
//     cin >> n;

//     for (i = 1; i <= n; i++) {
//         for (j = 1; j <= i; j++) {
//             cout << k << " ";
//             k++;
//         }
//         cout << endl;
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int i, j, n;

//     cout << "Enter a Number to Generate a Series: ";
//     cin >> n;

//     for (i = 1; i <= n; i++) {
//         cout << endl;
//         for (j = n; j >= i; j--) {
//             cout << "*";
//         }
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int i, j, n;

//     cout << "Enter a Number to Generate Series: ";
//     cin >> n;

//     for (i = n; i >= 1; i--) {
//         for (j = 1; j <= i; j++) {
//             cout << j;
//         }
//         cout << endl;
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int i, j, n;

//     cout << "Enter a Number to Generate a Series: ";
//     cin >> n;

//     for (i = 1; i <= n; i++) {
//         for (j = i; j <= n; j++) {
//             cout << j;
//         }
//         cout << endl;
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int i, j, n;

//     cout << "Enter a Number to Generate a Series: ";
//     cin >> n;

//     for (i = n; i >= 1; i--) {
//         for (j = i; j >= 1; j--) {
//             cout << j;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int i, j, n;

//     cout << "Enter a number to generate a Series: ";
//     cin >> n;

//     for (i = 1; i <= n; i++) {
//         for (j = n; j >= i; j--) {
//             cout << j;
//         }
//         cout << endl;
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int i, j, n;

//     cout << "Enter a Number to generate a Series: ";
//     cin >> n;

//     for (i = n; i >= 1; i--) {
//         for (j = n; j >= i; j--) {
//             cout << j;
//         }
//         cout << endl;
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int i, j, n;

//     cout << "Enter a Number to Generate a Series: ";
//     cin >> n;

//     for (i = n; i >= 1; i--) {
//         cout << endl;
//         for (j = i; j <= n; j++) {
//             cout << j;
//         }
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int i, j, n;

//     cout << "Enter a Number to Generate a Series: ";
//     cin >> n;

//     for (i = 1; i <= n; i++) {
//         cout << endl;
//         for (j = i; j >= 1; j--) {
//             cout << j;
//         }
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int i, j, n, k = 1;

//     cout << "Enter a Number to Generate a Series: ";
//     cin >> n;

//     for (i = 1; i <= n; i++) {
//         cout << endl;
//         for (j = 1; j <= i; j++) {
//             cout << k % 2;
//             k++;
//         }
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int i, j, n;

//     cout << "Enter a Number to Generate a Series: ";
//     cin >> n;

//     for (i = n; i >= 1; i--) {
//         cout << endl;
//         for (j = n; j > i; j--) {
//             cout << " ";
//         }
//         for (j = 1; j <= i; j++) {
//             cout << j << " ";
//         }
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int i, j, n;

//     cout << "Enter a number to generate a Series: ";
//     cin >> n;

//     for (i = 1; i <= n; i++) {
//         cout << endl;
//         for (j = n; j > i; j--) {
//             cout << " ";
//         }
//         for (j = 1; j <= i; j++) {
//             cout << j << " ";
//         }
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int i, j, n;

//     cout << "Enter a number to Generate a series: ";
//     cin >> n;

//     for (i = 1; i <= n; i++) {
//         cout << endl;
//         for (j = n; j > i; j--) {
//             cout << " ";
//         }
//         for (j = 1; j <= i; j++) {
//             cout << "* ";
//         }
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int i, j, n;
    
//     cout << "Enter a Number to Generate a Series: ";
//     cin >> n;

//     for (i = 1; i <= n; i++) {
//         cout << endl;
        
 
//         for (j = n; j > i; j--) {
//             cout << " ";
//         }
        
  
//         for (j = 1; j <= i; j++) {
//             cout << "* ";
//         }
//     }

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int i, j, k = 1, n;

//     cout << "Enter a number to Generate series: ";
//     cin >> n;

//     for (i = 1; i <= n; i++) {
//         for (j = i; j >= 1; j--) {
//             cout << j % 2 << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int i, j, n;

//     cout << "Enter a Number to generate a Series: ";
//     cin >> n;

//     for (i = 1; i <= n; i++) {

//         for (j = n; j > i; j--) {
//             cout << " ";
//         }


//         for (j = i; j >= 1; j--) {
//             cout << j << " ";
//         }

//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     for (int i = 65; i <= 69; i++) {
//         for (int j = 65; j <= i; j++) {
//             cout << (char)j;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     for (int i = 69; i >= 65; i--) {
//         for (int j = 65; j <= i; j++) {
//             cout << static_cast<char>(j);
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a Number to generate a Series: ";
//     cin >> n;

//     for (int i = 69; i > 65; i--) {
//         for (int j = 65; j <= i; j++) {
//             cout << static_cast<char>(j);
//         }
//         cout << endl;
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a Number to generate a Series: ";
//     cin >> n;

//     bool flag = false;

//     for (int i = 1; ; ) {
//         cout << endl;
//         for (int j = n; j > i; j--) {
//             cout << " ";
//         }
//         for (int j = 1; j <= i; j++) {
//             cout << j << " ";
//         }

//         if (i == n) {
//             flag = true;
//         }

//         if (!flag) {
//             i++;
//         } else {
//             i--;
//         }

//         if (i <= 0) {
//             break;
//         }
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a Number to generate a Series: ";
//     cin >> n;

//     for (int i = n; ; ) {
//         cout << endl;
//         bool flag1 = false;
//         for (int j = 1; ; ) {
//             if (j < i || i == n) {
//                 cout << j;
//             } else {
//                 cout << " ";
//             }

//             if (j == n) {
//                 flag1 = true;
//             }

//             if (!flag1) {
//                 j++;
//             } else {
//                 j--;
//             }

//             if (j <= 0) {
//                 break;
//             }
//         }

//         if (i == 2) {
//             i--;
//         } else {
//             i++;
//         }

//         if (i > n) {
//             break;
//         }
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a Number to generate a Series: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         cout << endl;
//         int flag1 = 0;


//         for (int j = 1; j <= (n - i); j++) {
//             cout << " ";
//         }


//         for (int j = 1; ; ) {
//             cout << j;

//             if (j == i) {
//                 flag1 = 1;
//             }

//             if (flag1 == 0) {
//                 j++;
//             } else {
//                 j--;
//             }

//             if (j <= 0) {
//                 break;
//             }
//         }
//     }

//     return 0;
// }

//--------------------------------------Array--------------------------------------------------------
// #include <iostream>
// using namespace std;

// int main() {
//     int a[5] = {2, 10, 7, 9, 11};

//     cout << "Values of array are: ";
//     for (int i = 0; i < 5; ++i) {
//         cout << a[i];
//         if (i != 4) {
//             cout << ", ";
//         }
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int a[5];

//     cout << "Enter 5 Array values: ";
//     cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];

//     cout << "Entered values of array are: ";
//     for (int i = 0; i < 5; ++i) {
//         cout << a[i];
//         if (i != 4) {
//             cout << ", ";
//         }
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     const int MAX_SIZE = 20;
//     int arr[MAX_SIZE], no;

//     cout << "Enter number of elements you want (max 20): ";
//     cin >> no;

//     if (no > MAX_SIZE || no <= 0) {
//         cout << "Invalid input. Number of elements must be between 1 and 20." << endl;

//     }

//     cout << "Enter " << no << " values: ";
//     for (int i = 0; i < no; i++) {
//         cin >> arr[i];
//     }

//     cout << "\nYour reverse array is:";
//     for (int i = no - 1; i >= 0; i--) {
//         cout << " " << arr[i];
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int a[5], i, sum = 0;

//     cout << "Enter five values: ";
//     for (i = 0; i < 5; i++) {
//         cin >> a[i];
//     }

//     cout << "Here are the values of the array: ";
//     for (i = 0; i < 5; i++) {
//         cout << a[i] << ",";
//         sum += a[i];
//     }

//     cout << "\nSum is " << sum << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int a[5], b[5], i;

//     cout << "Enter five values: ";
//     for (i = 0; i < 5; i++) {
//         cin >> a[i];
//     }

//     cout << "Copy array a to array b" << endl;
//     for (i = 0; i < 5; i++) {
//         b[i] = a[i];
//     }

//     cout << "Content of array b is: ";
//     for (i = 0; i < 5; i++) {
//         cout << b[i] << endl;
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int a[5], i, j, temp;

//     cout << "Enter 5 integers: ";
//     for (i = 0; i < 5; i++)
//         cin >> a[i];


//     for (i = 0; i < 5; i++) {
//         for (j = i + 1; j < 5; j++) {
//             if (a[i] > a[j]) {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }

//     cout << "Ascending order: ";
//     for (i = 0; i < 5; i++)
//         cout << a[i] << " ";

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int a[5], i, j, temp;

//     cout << "Enter 5 integers: ";
//     for (i = 0; i < 5; i++)
//         cin >> a[i];


//     for (i = 0; i < 5; i++) {
//         for (j = i + 1; j < 5; j++) {
//             if (a[i] < a[j]) {  
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }

//     cout << "Descending order: ";
//     for (i = 0; i < 5; i++)
//         cout << a[i] << " ";

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int a[5], max_val, i;

//     cout << "Enter 5 values: ";
//     for (i = 0; i < 5; i++) {
//         cin >> a[i];
//     }

//     max_val = a[0];
//     for (i = 1; i < 5; i++) {
//         if (max_val < a[i]) {
//             max_val = a[i];
//         }
//     }

//     cout << "Max is " << max_val << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int a[5], min_val, i;

//     cout << "Enter 5 values: ";
//     for (i = 0; i < 5; i++) {
//         cin >> a[i];
//     }

//     min_val = a[0];
//     for (i = 1; i < 5; i++) {
//         if (min_val > a[i]) {
//             min_val = a[i];
//         }
//     }

//     cout << "Min is " << min_val << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int a[5], i, j, temp;

//     cout << "Enter 5 values: ";
//     for (i = 0; i < 5; i++) {
//         cin >> a[i];
//     }

//     for (i = 0, j = 4; i < 5 / 2; i++, j--) {
//         temp = a[i];
//         a[i] = a[j];
//         a[j] = temp;
//     }

//     cout << "Reversed array: ";
//     for (i = 0; i < 5; i++) {
//         cout << a[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int i, n, m, no[50], flag = 0;

//     cout << "How many elements do you want to enter: ";
//     cin >> n;

//     cout << "Enter " << n << " values: ";
//     for (i = 0; i < n; i++)
//         cin >> no[i];

//     cout << "Enter the number you want to search: ";
//     cin >> m;

//     for (i = 0; i < n; i++) {
//         if (no[i] == m) {
//             cout << "Found " << m << " at position " << i + 1 << endl;
//             flag = 1;  
//             break;
//         }
//     }

//     if (flag == 0)
//         cout << "Not Found" << endl;

//     return 0;
// }


//-------------------------------2D-Array-----------------------------------
// #include <iostream>
// using namespace std;

// int main() {
//     int a[3][2] = { {1, 2}, {5, 7}, {7, 8} };

//     cout << "Value of two-dimensional array:" << endl;
//     cout << a[0][0] << "\t" << a[0][1] << endl;
//     cout << a[1][0] << "\t" << a[1][1] << endl;
//     cout << a[2][0] << "\t" << a[2][1] << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int a[3][3];
//     int i, j;

//     cout << "Enter nine values:" << endl;
//     for (i = 0; i <= 2; i++) {
//         for (j = 0; j <= 2; j++) {
//             cin >> a[i][j];
//         }
//     }

//     cout << "\nYour matrix is here:\n";
//     for (i = 0; i <= 2; i++) {
//         for (j = 0; j <= 2; j++) {
//             cout << a[i][j] << "\t";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int a[3][4];
//     int i, j, sum = 0, total_sum = 0;

//     cout << "Enter 12 values:" << endl;
//     for (i = 0; i < 3; i++) {
//         for (j = 0; j < 4; j++) {
//             cin >> a[i][j];
//         }
//     }

//     cout << "\nYour matrix is here:\n";
//     for (i = 0; i < 3; i++) {
//         sum = 0;
//         for (j = 0; j < 4; j++) {
//             cout << a[i][j] << "\t";
//             sum += a[i][j];
//         }
//         cout << " = " << sum << endl;
//         total_sum += sum;
//         cout << endl;
//     }

//     cout << "\t\t\t\t = " << total_sum << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int a[2][2], b[2][2], c[2][2];
//     int i, j;

//     cout << "Enter array a:\n";
//     for (i = 0; i <= 1; i++) {
//         for (j = 0; j <= 1; j++) {
//             cin >> a[i][j];
//         }
//     }

//     cout << "Enter array b:\n";
//     for (i = 0; i <= 1; i++) {
//         for (j = 0; j <= 1; j++) {
//             cin >> b[i][j];
//         }
//     }

//     cout << "\nSum of 2 arrays:\n";
//     for (i = 0; i <= 1; i++) {
//         for (j = 0; j <= 1; j++) {
//             c[i][j] = a[i][j] + b[i][j];
//             cout << c[i][j] << "\t";
//         }
//         cout << "\n";
//     }


//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int a[3][4];
//     int i, j, sum = 0, gt = 0;

//     cout << "Enter 12 values:\n";
//     for (i = 0; i <= 2; i++) {
//         for (j = 0; j <= 3; j++) {
//             cin >> a[i][j];
//         }
//     }

//     cout << "\nYour matrix is here:\n";
//     for (i = 0; i <= 2; i++) {
//         sum = 0;
//         for (j = 0; j <= 3; j++) {
//             cout << a[i][j] << "\t";
//             sum = sum + a[i][j];
//         }
//         cout << " = " << sum << "\n\n";
//         gt = gt + sum;
//         cout << "\n";
//     }

//     cout << "--------------------------------------------------------\n";
//     for (i = 0; i <= 3; i++) {
//         sum = 0;
//         for (j = 0; j <= 2; j++) {
//             sum = sum + a[j][i];
//         }
//         cout << " = " << sum << "\t";
//     }
//     cout << "\t\t\t\t = " << gt;



//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int a[2][2], b[2][2], c[2][2];
//     int i, j, k;

//     cout << "Enter array a:\n";
//     for (i = 0; i <= 1; i++) {
//         for (j = 0; j <= 1; j++) {
//             cin >> a[i][j];
//         }
//     }

//     cout << "Enter array b:\n";
//     for (i = 0; i <= 1; i++) {
//         for (j = 0; j <= 1; j++) {
//             cin >> b[i][j];
//         }
//     }

//     cout << "\nMultiplication of 2 arrays:\n";
//     for (i = 0; i <= 1; i++) {
//         for (j = 0; j <= 1; j++) {
//             c[i][j] = 0;
//             for (k = 0; k <= 1; k++) {
//                 c[i][j] += a[i][k] * b[k][j];
//             }
//             cout << c[i][j] << "\t";
//         }
//         cout << "\n";
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int a[3][3], b[3][3], i, j;

//     cout << "Enter array a:\n";
//     for (i = 0; i < 3; i++) {
//         for (j = 0; j < 3; j++) {
//             cin >> a[i][j];
//         }
//     }

//     cout << "Transpose Matrix:\n";
//     for (i = 0; i < 3; i++) {
//         for (j = 0; j < 3; j++) {
//             b[i][j] = a[j][i];
//         }
//     }

//     cout << "Printing Transposed Matrix:\n";
//     for (i = 0; i < 3; i++) {
//         for (j = 0; j < 3; j++) {
//             cout << b[i][j] << "\t";
//         }
//         cout << "\n";
//     }

//     return 0;
// }


//-------------------------------String-------------------------------------------------

// #include <iostream>
// #include <string.h>
// using namespace std;

// int main() {
//     char a[10] = {'h', 'e', 'l', 'l', 'o', '\0'}; // declare and initialize the string

//     cout << "Your String is : " << a << endl; // output the string using cout



//     return 0;
// }

// #include <iostream>
// #include <string.h> 
// using namespace std;

// int main() {
//     char a[10];

//     cout << "Enter first string : ";
//     cin >> a; 
    
//     cout << "Entered String is : " << a << endl; 

//     return 0;
// }

// #include <iostream>
// #include <string.h> 

// using namespace std;

// int main() {
//     char a[10];

//     cout << "Enter first string: ";
//     gets(a); 

//     cout << "Entered String is: ";
//     puts(a);

//     return 0;
// }

// #include <iostream>
// #include <string.h> 

// using namespace std;

// int main() {
//     char s[20];
//     int count = 0;

//     cout << "\nEnter one String\t";
//     cin >> s;

//     for(int i = 0; s[i] != '\0'; i++) {
//         count++;
//     }

//     cout << "\nLength = " << count << endl;

//     return 0;
// }

// #include <iostream>
// #include <string.h> 
// using namespace std;

// int main() {
//     char s[20];

//     cout << "\nEnter one String in lowercase: ";
//     cin>>s; 

//     for (int i = 0; s[i] != '\0'; i++) {
//         if (s[i] >= 'a' && s[i] <= 'z') { 
//             s[i] = toupper(s[i]);
//         }
//     }

//     cout << "\nYour string is here: " << s << endl;

//     return 0;
// }

// #include <iostream>
// #include <string.h> 
// using namespace std;

// int main() {
//     char s[20];

//     cout << "\nEnter one String in uppercase: ";
//     cin>>s; 

//     for (int i = 0; s[i] != '\0'; i++) {
//         if (s[i] >= 'A' && s[i] <= 'Z') { 
//             s[i] = tolower(s[i]);
//         }
//     }

//     cout << "\nYour string is here: " << s << endl;

//     return 0;
// }

// #include <iostream>
// #include <string.h> 

// using namespace std;

// int main() {
//     char a[10], b[10];
//     int i;

//     cout << "\nEnter string: ";
//     cin>>a; 

//     for (i = 0; a[i] != '\0'; i++) {
//         b[i] = a[i];
//     }
//     b[i] = '\0'; 

//     cout << "Copied string: " << b << endl;

//     return 0;
// }

// #include <iostream>
// #include <string.h>

// using namespace std;

// int main() {
//     char a[10], b[10], c[20];
//     int i = 0, j = 0;

//     cout << "Enter string a: ";
//     cin >> a;

//     cout << "Enter string b: ";
//     cin>> b;


//     for (i = 0; a[i] != '\0'; i++) {
//         c[i] = a[i];
//     }

//     c[i] = ' ';
//     i++;

//     for (j = 0; b[j] != '\0'; j++, i++) {
//         c[i] = b[j];
//     }
//     c[i] = '\0'; 

//     cout << "\nAnswer = " << c << endl;

//     return 0;
// }

// #include <iostream>
// #include <string.h> 

// using namespace std;

// int main() {
//     char a[10];
//     int i, j, len = 0;
//     char temp;

//     cout << "\nEnter one String : ";
//     cin>>a; 

//     len = strlen(a); 

//     j = len - 1;
//     for (i = 0; i < len / 2; i++, j--) {
//         temp = a[i];
//         a[i] = a[j];
//         a[j] = temp;
//     }

//     cout << "\nReverse a is = " << a << endl;

//     return 0;
// }

// #include <iostream>
// #include <string.h> 

// using namespace std;

// int main() {
//     char a[10], b[10];
//     int i;

//     cout << "\nEnter string a: ";
//     cin>>a;

//     cout << "Enter string b: ";
//     cin>>b;

//     i = strcmp(a, b); 

//     if (i == 0) {
//         cout << "\nBoth strings are equal" << endl;
//     } else {
//         cout << "\nBoth strings are not equal" << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <string.h> 
// using namespace std;

// int main() {
//     char a[10], b[10], c[20]; 
//     int len;

//     cout << "Enter first string: ";
//     cin>>a;

//     cout << "Enter second string: ";
//     cin >>b;

//     len = strlen(a);
//     cout << "\nLength of a = " << len;

//     strupr(a); 
//     cout << "\nUpper case a = " << a;

//     strlwr(b); 
//     cout << "\nLower case b = " << b;

//     strrev(a);
//     cout << "\nReverse a = " << a;

//     strcpy(c, a); 
//     cout << "\n" << c << " is in c";

//     strcat(c, b); 
//     cout << "\nConcatenated string = " << c;

    

//     int i = strcmp(a, b);
//     if (i == 0)
//         cout << "\nBoth strings are equal";
//     else
//         cout << "\nBoth strings are not equal";
    

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     char s[20];
//     int i;

//     cout << "\nEnter one String : ";
//     cin >> s;

//     for (i = 0; s[i] != '\0'; i++) {
//         if (s[i] >= 'A' && s[i] <= 'Z')
//             s[i] = s[i] + 32;
//         else if (s[i] >= 'a' && s[i] <= 'z')
//             s[i] = s[i] - 32;
//     }

//     cout << "\nYour modified string is: " << s << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     char s[50];
//     int upper = 0, lower = 0, space = 0, digit = 0, special = 0;
//     int i;

//     cout << "\nEnter a String : ";
//     cin>>s; 

//     for (i = 0; s[i] != '\0'; i++) {
//         if (s[i] >= 'A' && s[i] <= 'Z')
//             upper++;
//         else if (s[i] >= 'a' && s[i] <= 'z')
//             lower++;
//         else if (s[i] >= '0' && s[i] <= '9')
//             digit++;
//         else if (s[i] == ' ')
//             space++;
//         else
//             special++;
//     }

//     int word = space + 1;

//     cout << "\nYour string is: " << s;
//     cout << "\nTotal Digits : " << digit;
//     cout << "\nTotal Uppercase letters : " << upper;
//     cout << "\nTotal Lowercase letters : " << lower;
//     cout << "\nTotal Spaces : " << space;
//     cout << "\nTotal Special Characters : " << special;
//     cout << "\nTotal Words : " << word;

//     return 0;
// }


//----------------------------Functions--------------------------------------------

// #include <iostream>
// using namespace std;

// void sum(); 

// int main() {
//     sum(); 
//     return 0;
// }

// void sum() {
//     int a, b, c;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;
//     c = a + b;
//     cout << "Sum is " << c << endl;
// }


// #include <iostream>
// using namespace std;

// void fact(); 

// int main() {
//     fact(); 
//     return 0;
// }

// void fact() {
//     int no, fact = 1, i;
//     cout << "Enter a number: ";
//     cin >> no;
    
//     for(i = 1; i <= no; i++) {
//         fact = fact * i;
//     }
    
//     cout << "Factorial is " << fact << endl;
// }

// #include <iostream>
// using namespace std;

// void power(); // Function declaration

// int main() {
//     power(); // Calling function Power
//     return 0;
// }

// void power() {
//     int i, power, no, ans;
//     ans = 1;
//     cout << "Enter a Base number: ";
//     cin >> no;
//     cout << "Enter a Power: ";
//     cin >> power;
    
//     for(i = 1; i <= power; i++) {
//         ans = ans * no;
//     }
    
//     cout << "Power is " << ans << endl;
// }


// #include <iostream>
// using namespace std;

// void sum(int, int); 

// int main() {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;
//     sum(a, b);
//     return 0;
// }

// void sum(int x, int y) {
//     int c = x + y;
//     cout << "Sum is " << c << endl;
// }


// #include <iostream>
// using namespace std;

// void power(int, int);

// int main() {
//     int e, b;
//     cout << "\nEnter b & e: ";
//     cin >> b >> e;
//     power(b, e);
//     return 0;
// }

// void power(int b, int e) {
//     int m = 1;
//     int i = 1;
//     while (i <= e) {
//         m = m * b;
//         i++;
//     }
//     cout << m;
// }

// #include <iostream>
// using namespace std;

// int sum(int, int); 

// int main() {
//     int a, b, c;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;
//     c = sum(a, b);
//     cout << "Sum of two numbers: " << c;
//     return 0;
// }

// int sum(int x, int y) {
//     int c = x + y;
//     return c;
// }

// #include <iostream>
// using namespace std;

// float avg(int, int); 

// int main() {
//     int a, b;
//     float c;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;
//     c = avg(a, b);
//     cout << "Average of two numbers: " << c;
//     return 0;
// }

// float avg(int x, int y) {
//     float c = (x + y) / 2.0f; 
//     return c;
// }


// #include <iostream>
// using namespace std;

// void interest(float, float, float); // Function declaration

// int main() {
//     float p, r, n;
//     cout << "Enter p: ";
//     cin >> p;
//     cout << "Enter r: ";
//     cin >> r;
//     cout << "Enter no. of years: ";
//     cin >> n;
//     interest(p, r, n);
//     return 0;
// }

// void interest(float p, float r, float n) {
//     float ans;
//     ans = (p * r * n) / 100.0f;
//     cout << "The ans is: " << ans << endl;
// }


// #include <iostream>
// using namespace std;

// void reverse(int); 

// int main() {
//     int no;
//     cout << "Enter the number: ";
//     cin >> no;
//     reverse(no);
//     return 0;
// }

// void reverse(int no) {
//     int i = 1, rev = 0;
    
//     do {
//         i = no % 10;
//         rev = (rev * 10) + i;
//         no = no / 10;
//     } while (no > 0);
    
//     cout << "The reverse number is " << rev << endl;
// }

// #include <iostream>
// using namespace std;

// void sumall(int); 

// int main() {
//     int no;
//     cout << "Enter the number: ";
//     cin >> no;
//     sumall(no);
//     return 0;
// }

// void sumall(int no) {
//     int i = 1, sum = 0;
    
//     do {
//         i = no % 10;
//         sum = sum + i;
//         no = no / 10;
//     } while (no > 0);
    
//     cout << "The sum of digits is " << sum << endl;
// }


// #include <iostream>
// using namespace std;

// void fun1();
// void fun2();

// int main() {
//     cout << "In Main function" << endl;
//     fun1();
//     return 0;
// }

// void fun1() {
//     cout << "In function fun1" << endl;
//     fun2();
// }

// void fun2() {
//     cout << "In Function fun2" << endl;
// }


// #include <iostream>
// using namespace std;

// int find(int, int);
// float sum(int, int, int);

// int main() {
//     int a, b, c;
//     float a1;
    
//     cout << "Enter 3 numbers: ";
//     cin >> a >> b >> c;
    
//     a1 = sum(a, b, c);
    
//     if (a1 == 0)
//         cout << "Not Possible" << endl;
//     else
//         cout << a1 << endl;
    
//     return 0;
// }

// float sum(int x, int y, int z) {
//     float p;
//     int ans = find(y, z);
    
//     if (ans == 0)
//         return 0;
//     else
//         p = x / (y - z); 
    
//     return p;
// }

// int find(int p, int q) {
//     if (p == q)
//         return 0;
//     else
//         return 1;
// }


// #include <iostream>
// using namespace std;

// void max(int [], int);

// int main() {
//     const int n = 5; 
//     int a[n]; 
    

//     cout << "Enter " << n << " numbers:" << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
    

//     max(a, n);
    
//     return 0;
// }

// void max(int x[], int n) { 
//     int max1 = x[0]; 
    
  
//     for (int i = 1; i < n; i++) {
//         if (max1 < x[i]) {
//             max1 = x[i];
//         }
//     }
    
 
//     cout << "Maximum element: " << max1 << endl;
// }



// #include <iostream>
// using namespace std; 


// void recursiveFunction(int);

// int main() {
//     int i = 1;
//     recursiveFunction(i); 
//     return 0;
// }


// void recursiveFunction(int i) {
//     if (i <= 5) {
//         cout << i << endl; 
//         i++; 
//         recursiveFunction(i); 
//     }
// }





// #include <iostream>
// using namespace std;

// int fact(int);

// int main() {
//     int no, ans;
//     cout << "Enter a number: ";
//     cin >> no;
//     ans = fact(no);
//     cout << ans << endl;
//     return 0;
// }

// int fact(int n) {
//     if (n == 1 || n == 0)
//         return 1;
//     else
//         return n * fact(n - 1);
// }






// #include <iostream>
// using namespace std;

// void readnum(int[]);
// int findbiggest(int[]);
// int findsmallest(int[]);

// int main() {
//     int num[10], big, small;
    
//     cout << "Enter 10 numbers: ";
//     readnum(num);
    
//     big = findbiggest(num);
//     small = findsmallest(num);
    
//     cout << "Biggest number: " << big << endl;
//     cout << "Smallest number: " << small << endl;
    
//     return 0;
// }

// void readnum(int temp[]) {
//     for (int j = 0; j < 10; j++) {
//         cin >> temp[j];
//     }
// }

// int findbiggest(int no[]) {
//     int bigtemp = no[0];
//     for (int k = 1; k < 10; k++) {
//         if (no[k] > bigtemp) {
//             bigtemp = no[k];
//         }
//     }
//     return bigtemp;
// }

// int findsmallest(int no[]) {
//     int smalltemp = no[0];
//     for (int k = 1; k < 10; k++) {
//         if (no[k] < smalltemp) {
//             smalltemp = no[k];
//         }
//     }
//     return smalltemp;
// }








// #include <iostream>
// using namespace std;

// int upper, lower, number, special;

// void readtext(char[]);
// void counttext(char[]);

// int main() {
//     char a[100];
    
//     cout << "Enter your text & press $ for output:";
//     readtext(a);
    
//     counttext(a);
    
//     cout << "upper: " << upper << endl;
//     cout << "lower: " << lower << endl;
//     cout << "number: " << number << endl;
//     cout << "special: " << special << endl;
    
//     return 0;
// }

// void readtext(char b[]) {
//     int i;
//     for (i = 0; (b[i] = getchar()) != '$'; i++);
//     b[i] = '\0';
// }

// void counttext(char b[]) {
//     int i;
//     upper = lower = number = special = 0;
    
//     for (i = 0; b[i]; i++) {
//         if (b[i] >= 'A' && b[i] <= 'Z')
//             upper++;
//         else if (b[i] >= 'a' && b[i] <= 'z')
//             lower++;
//         else if (b[i] >= '0' && b[i] <= '9')
//             number++;
//         else
//             special++;
//     }
// }


//---------------------------------Structure---------------------------------------

// #include <iostream>
// #include <string.h> 
// using namespace std;

// struct stu
// {
//     int id;
//     char name[10];
// };

// int main()
// {
//     struct stu s;
//     s.id = 1;
//     strcpy(s.name, "Manav");

//     cout << "Id  Name" << endl;
//     cout << s.id << "   " << s.name << endl;

//     return 0;
// }


// #include <iostream>
// #include <string.h> 
// using namespace std;

// struct stu
// {
//     int id;
//     char name[10];
// };

// int main()
// {
//     struct stu s = {12, "Punit"}; 

//     cout << "Id  Name" << endl;
//     cout << s.id << "   " << s.name << endl;

//     return 0;
// }


// #include <iostream>
// #include <string.h> 
// using namespace std;

// struct stu
// {
//     int id;
//     char name[10];
// };

// int main()
// {
//     struct stu s;

//     cout << "Enter name and number: ";
//     cin >> s.name >> s.id;

//     cout << "\nId  Name\n";
//     cout << s.id << "   " << s.name << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// struct stu
// {
//     int no, total, m[5];
//     char name[10];
// };

// int main()
// {
//     struct stu s;
//     s.total = 0;
    
//     cout << "Enter No. and Name: ";
//     cin >> s.no >> s.name;
    
//     cout << "Enter Marks for 5 subjects: ";
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> s.m[i];
//         s.total += s.m[i];
//     }
    
//     cout << "Records entered are: " << endl;
//     cout << s.no << "\t" << s.name << "\t";
//     for (int i = 0; i < 5; i++)
//     {
//         cout << s.m[i] << "\t";
//     }
//     cout << "\nSum is " << s.total << endl;
    
//     return 0;
// }


// #include <iostream>
// #include <string.h> 
// using namespace std;

// struct Book
// {
//     int book_code;
//     char title[10];
//     char author[10];
//     int price;
//     char edition[10];
//     int no_of_copies;
// };

// int main()
// {
//     struct Book S;
    
//     cout << "Enter Book-code : ";
//     cin >> S.book_code;
    
//     cout << "Enter Book-title : ";
//     cin >> S.title;
    
//     cout << "Enter Author : ";
//     cin >> S.author;
    
//     cout << "Enter Price : ";
//     cin >> S.price;
    
//     cout << "Enter Edition : ";
//     cin >> S.edition;
    
//     cout << "Enter No.of.copies : ";
//     cin >> S.no_of_copies;
    
    
//     cout << "\nBook-code....: " << S.book_code << endl;
//     cout << "Book-title...: " << S.title << endl;
//     cout << "Author.......: " << S.author << endl;
//     cout << "Price........: " << S.price << endl;
//     cout << "Edition......: " << S.edition << endl;
//     cout << "No.of.copies.: " << S.no_of_copies << endl;
    
//     return 0;
// }

// #include <iostream>
// #include <string.h> 
// using namespace std;

// struct emp
// {
//     int no, sal;
//     char name[10];
// };

// int main()
// {
//     struct emp e[3], temp;
//     int i, j;


//     for (i = 0; i < 3; i++)
//     {
//         cout << "Enter employee no, name, and salary: ";
//         cin >> e[i].no >> e[i].name >> e[i].sal;
//     }


//     for (i = 0; i < 2; i++)
//     {
//         for (j = i + 1; j < 3; j++)
//         {
//             if (e[i].sal > e[j].sal)
//             {
//                 temp = e[i];
//                 e[i] = e[j];
//                 e[j] = temp;
//             }
//         }
//     }


//     cout << "\nSorted Employee Details by Salary:\n";
//     for (i = 0; i < 3; i++)
//     {
//         cout << e[i].no << "\t" << e[i].name << "\t" << e[i].sal << endl;
//     }

//     return 0;
// }


// #include <iostream>
// #include <string.h> 
// using namespace std;

// struct Emp
// {
//     char name[10];
//     int no, sal;
// };

// int main()
// {
//     struct Emp e[3];
//     int i;

//     cout << "\nEnter Minimum 3 Entries:\n";
//     cout << "Enter Emp.no, Emp.Name, and Salary:\n";

//     for (i = 0; i < 3; i++)
//     {
//         cout << "Entry " << i + 1 << ":\n";
//         cin >> e[i].no >> e[i].name >> e[i].sal;
//     }

//     cout << "\nNo\tName\tSal\n";
//     cout << "-------------------\n";

//     for (i = 0; i < 3; i++)
//     {
//         cout << e[i].no << "\t" << e[i].name << "\t" << e[i].sal << endl;
//     }

//     return 0;
// }




// #include <iostream>
// #include <string.h>
// using namespace std;

// struct stu
// {
//     int no, mark;
//     char name[10];
// };

// void print(struct stu);
// struct stu get();

// int main()
// {
//     struct stu s;
//     s = get();
//     print(s);
//     return 0;
// }

// struct stu get()
// {
//     struct stu x;
//     cout << "Enter number, name, and marks: ";
//     cin >> x.no >> x.name >> x.mark;
//     return x;
// }

// void print(struct stu p)
// {
//     cout << p.no << "\t" << p.name << "\t" << p.mark << endl;
// }








//------------------------------------------Pointers----------------------------------------------------
// #include <iostream>
// using namespace std;

// int main()
// {
//     int i;
//     i = 10;
//     int *p;
//     p = &i;
    
//     cout << "i = " << i << endl;
//     cout << "Value pointed by p = " << *p << endl;
//     cout << "Address of i = " << &i << endl;
//     cout << "Value of p = " << p << endl;

//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main()
// {
//     int x, y, z, a;
//     int *p, *q, *r;

//     x = 10;
//     y = 5;
//     z = 8;


//     p = &x;
//     q = &y;
//     r = &z;

//     a = *p + *q - *r;

//     cout << "Sum is " << a << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main()
// {
//     int a[6];
//     int sum = 0;
//     int i, *p;

 
//     cout << "Enter 6 integers:\n";
//     for (i = 0; i < 6; i++)
//     {
//         cin >> a[i];
//     }

//     p = &a[0]; 

   
//     for (i = 0; i < 6; i++)
//     {
//         cout << *p << "\t" << p << endl;
//         sum = sum + *p;
//         p++; 
//     }

   
//     cout << "Sum is " << sum << endl;

//     return 0;
// }




// #include <iostream>
// #include <cstring> 
// using namespace std;

// int main()
// {
//     char a[100]; 
//     char *b;
//     int length;

//     cout << "Enter String: ";
//     cin>>a;

//     b = a; 

//     cout << "Characters and their addresses:\n";
//     while (*a != '\0')
//     {
//         cout << *a << " is stored at " << (void *)a << endl;
//         a++;
//     }

//     length = a - b; // Calculating length of string

//     cout << "Length is " << length << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void swap(int*, int*);

// int main()
// {
//     int a = 100, b = 200;

//     cout << a << endl << b << endl;

//     swap(&a, &b);

//     cout << a << endl << b << endl;

//     return 0;
// }

// void swap(int* ptr_a, int* ptr_b)
// {
//     int temp = *ptr_a; 
//     *ptr_a = *ptr_b;   
//     *ptr_b = temp;     
// }

// #include <iostream>
// using namespace std;

// void swap(int *, int *);

// int main()
// {
//     int a, b;
//     a = 100;
//     b = 200;

//     cout << a << "\n" << b << endl;

//     swap(&a, &b);

//     cout << a << "\n" << b << endl;

//     return 0;
// }

// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// #include <iostream>
// #include <string.h> 
// using namespace std;

// struct student {
//     int no;
//     char name[10];
// };

// int main() {
//     struct student s[3], *p;

//     cout << "Enter No. and Name: " << endl;
//     for (p = s; p < s + 3; p++) {
//         cin >> p->no >> p->name;
//     }

//     cout << "Entered No. and Name are:" << endl;
//     p = s;
//     for (int i = 0; i < 3; i++) {
//         cout << p->no << "\t" << p->name << endl;
//         p++;
//     }

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int *p, sum, i;
//     int x[5] = {5, 3, 2, 11, 2};
//     i = 0;
//     sum = 0;
//     p = x;

//     while (i < 5) {
//         sum = sum + *p;
//         i++;
//         p++;
//     }
    
//     cout << "Sum is " << sum << endl;
//     return 0;
// }
































































