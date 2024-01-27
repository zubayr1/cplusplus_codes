#include<iostream>
#include<string>

using namespace std;

int main()
{
    int age;
    string name;

    cout << "enter age"<< endl;

    cin >> age;

    cout << "enter full name"<< endl;

    getline(cin >> ws, name);

    if(age<18)
    {
        cout << name << " you cannot have driving license"<< endl;
    }
    else if (age>=18  && age<60)
    {
        cout << name << " you can have driving license"<< endl;
    }
    else
    {
        cout << name << " you are too old for driving license"<< endl;
    }
    

    return 0;
}