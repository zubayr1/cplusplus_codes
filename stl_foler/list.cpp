#include<iostream>
#include <list>

using namespace std;

void print_list(list<int>& ll)
{
    for(list<int>:: iterator it = ll.begin(); it!=ll.end(); it++)
    {
        cout << *it << endl;
    }
}

int main()
{
    list<int> lis;

    lis.push_back(1);
    lis.push_back(2);

    print_list(lis);

    cout << "size " << lis.size();

    lis.push_front(4);
    lis.push_front(6);
    lis.push_front(8);

    print_list(lis);

    lis.pop_front();

    cout << *lis.begin()<< " " << *lis.rbegin()<< endl;

    list<int>:: iterator it = lis.begin();

    int count = 0;
    while(count<3)
    {
        it++;
        count+=1;
    }
    lis.insert(it, 1000);

    print_list(lis);
    cout << endl;

    it = lis.begin();

    count = 0;
    while(count<3)
    {
        it++;
        count+=1;
    }
    lis.erase(it);

    print_list(lis);
    cout << endl;

    lis.remove(4);

    print_list(lis);
    cout << endl;

    return 0;
}