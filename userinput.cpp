#include<iostream>
#include<string>

using namespace std;

int main()
{   
    int id;

    cout << "enter id"<< endl;

    cin >> id;

    string name;

    cout << "enter full name" << endl;

    getline(cin >> ws, name);

    cout << "id: "<<id<< " and name is: "<<name<< endl;

    return 0;
}