#include<iostream>
#include<string>

using namespace std;

void printname(string name)
{
    cout << "name is " << name<< endl;
}


void printname()
{
    cout << "enter name" << endl;

    string name;
    getline(cin >> ws, name);

    cout << "name is " << name<< endl;
}

int main()
{
    printname("Sarah");

    printname();
    return 0;
}