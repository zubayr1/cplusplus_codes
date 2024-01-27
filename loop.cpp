#include<iostream>
#include<string>

using namespace std;

char find(string name, int index)
{
    if(index > name.length())
    {
        return ' ';
    }

    for(int i=0; i<index; i++)
    {
        cout << (i+1) << "th character is: " << name[i] << endl;
    }

    return name[index];
}

int main()
{
    string name;
    cout << "enter your name" <<endl;

    int i=0;

    getline(cin >> ws, name);

    while(i<name.length())
    {
        cout << (i+1) << "th character is: " << name[i] << endl;

        i+=1;
    }

    int index;

    cout << "enter the index" <<endl;

    cin >> index;

    find(name, index);

    return 0;
}
