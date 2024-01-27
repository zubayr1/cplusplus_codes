#include<iostream>
#include<string>

using namespace std;

void printvalues(int id)
{
    cout << id << endl;
    cout << &id << endl;
    
}

int returnvalue(int* idptr)
{
    return *idptr;
}

void iteratearr(int* arr,  int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] <<endl;
    }
}

int main()
{
    string name = "sarah";

    string* ptr = &name;

    cout << name << endl;
    cout << ptr << endl;
    cout << *ptr << endl;

    int id = 100;

    printvalues(id);
   
    int id1 = returnvalue(&id);

    cout << id1 << endl;

    int arr[] = {1,2,3,4,5};

    iteratearr(arr, sizeof(arr)/ sizeof(arr[0]));

    return 0;
}