#include<iostream>
#include<string>
#include <ctime>

using namespace std;

string result(string pick)
{
    srand(time(0));

    int randomNumber = rand() % 3 +1;

    string cpupick;

    if(randomNumber==1)
    {
        cpupick = "rock";
    }
    else if(randomNumber==2)
    {
        cpupick = "paper";
    }
    else
    {
        cpupick = "scissor";
    }

    if(pick==cpupick)
    {
        return "draw";
    }
    if(pick=="rock")
    {
        if(cpupick=="paper")
        {
            return "loss";
        }
        return "win";
    }
    if(pick=="paper")
    {
        if(cpupick=="scissor")
        {
            return "loss";
        }
        return "win";
    }
    if(pick=="scissor")
    {
        if(cpupick=="rock")
        {
            return "loss";
        }
        return "win";
    }


}

int main()
{
    string pick;

    cout << "enter your pick: rock/ paper/ scissor"<< endl;

    getline(cin >> ws, pick);

    string res = result(pick);

    cout << "you "<< res << endl;

    return 0;
}