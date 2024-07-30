#include <iostream>
using namespace std;




int main ()
{
    int size;
    cin >> size;
    int arr[100];

    for(int i=0;i<size;i++)
    {
        cin >> arr[i];
    }

    int temp;

    for(int i=0;i<size-1;i+=2)
    if(i+1 <size)
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;       
    }

    for(int i=0;i<size;i++)
    {
       cout << arr[i]<<" ";
    }






}