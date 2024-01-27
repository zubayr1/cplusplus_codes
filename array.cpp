#include<iostream>

using namespace std;

int main()
{
    int arr[10];

    for(int i=0; i<10; i++)
    {
        arr[i] = i*100;
    }

    for(int i=0; i<10; i++)
    {
        cout << arr[i] << endl;
    }

    cout<< "array size: " << sizeof(arr) / sizeof(arr[0]);

    return 0;
}