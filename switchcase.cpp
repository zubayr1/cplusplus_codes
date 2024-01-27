#include<iostream>

using namespace std;

int main()
{
    int day;
    
    bool round  = true;

    while(round)
    {
        cout << "enter day"<< endl;

        cin >> day;

        switch (day)
        {
        case 1:
            cout << "day is monday"<< endl;
            break;
        case 2:
            cout << "day is tuesday"<< endl;
            break;
        case 3:
            cout << "day is wednesday"<< endl;
            break;
        case 4:
            cout << "day is thusday"<< endl;
            break;
        case 5:
            cout << "day is friday"<< endl;
            break;
        case 6:
        case 7:
            cout << "day is weekend"<< endl;
            break;
        
        default:
            cout << "invalid day"<< endl;
            break;
        }

        cout << "go again? t or f"<< endl;
        char ip;

        cin >> ip;

        if(ip=='t' || ip=='T')
        {
            round  = true;
        }
        else if(ip=='f' || ip=='F')
        {
            round  = false;
        }
        else
        {
            cout << "invalid input"<< endl;  

            round  = false;

            break;
        }
    }
    return 0;
}