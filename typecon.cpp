#include<iostream>

using namespace std;

int main()
{
    double val = 14.93;

    int val1 = val;

    cout << "implicit conversion: " << val << " " << val1 << endl;

    int newval = 58;

    double newval1 = (double)newval + 11.09;

    cout << "explicit conversion: " << newval1 << " " << newval << endl;

    char ascii = 105;

    cout << "implicit conversion: " << ascii << endl;

    return 0;
}