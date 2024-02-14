#include<iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> deq;

    deq.push_front(1);
    deq.push_back(2);
    deq.push_back(3);
    deq.push_back(4);
    deq.push_back(5);

    cout << "size " << deq.size() << endl;

    for(int i=0; i<deq.size(); i++)
    {
        cout << i << "th element is: " << deq[i] << endl;
    }

    cout << endl;

    deq[2] = 12;

    for(int i=0; i<deq.size(); i++)
    {
        cout << i << "th element is: " << deq[i] << endl;
    }

    cout << endl;

    cout << *deq.begin()<< " " << *deq.rbegin()<< endl;
    cout << deq.front()<< " " << deq.back()<< endl;

    cout << endl;

    for(deque<int>:: iterator it = deq.begin(); it < deq.end(); it++)
    {
        cout << "element is: " << *it << endl;
    }

    return 0;
}
