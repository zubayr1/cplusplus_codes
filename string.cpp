#include<iostream>
#include<string>

using namespace std;

int main()
{
    string password;
    cout << "enter your password" << endl;
    getline(cin >> ws, password);

    if(password.empty())
    {
        cout << "password cannot be empty" << endl;
    }
    else if(password.length()<8)
    {
        cout << "password cannot be less than 8 characters" << endl;
    }
    // else if(password.find(' ))
    // {
    //     cout << "password cannot contain empty space in the middle" << endl;
    // }
    else if(!password.find("!") && !password.find("@") && !password.find("!#") && !password.find("$") && !password.find("_"))
    {
        cout << "password must contain special characters" << endl;
    }
    else
    {
        cout << "password is set!. Password is "<< password << endl;
    }

    return 0;
}