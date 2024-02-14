#include<iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {1,2,3};

    cout << "size is: " << vec.size() << endl;
    cout << "capacity is: " << vec.capacity() << endl;

    vec.push_back(4);
    vec.push_back(5);

    for(int i=0; i<vec.size(); i++)
    {
        cout << i << "th element is: " << vec[i] << endl;
    }

    cout << endl;

    vec[vec.size() - 1] = 10;

    vec.insert(vec.begin() + 2, 12);

    for(int i=0; i<vec.size(); i++)
    {
        cout << i << "th element is: " << vec[i] << endl;
    }

    cout << "front is: " << vec.front() << " back is: " << vec.back() << endl;

    vec.pop_back();

    cout << "front is: " << vec.front() << " back is: " << vec.back() << endl;

    vec.clear();

    return 0;
}