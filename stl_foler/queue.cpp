#include<iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> que;
    que.push(1);
    que.push(2);
    que.push(3);
    que.push(4);

    cout << que.front()<< " " << que.back()<< endl;

    cout << endl;

    while (!que.empty())
    {
        cout << que.front() << endl;

        que.pop();
    }

    return 0;
}