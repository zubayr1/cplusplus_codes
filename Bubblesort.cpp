#include<iostream>

using namespace std;


int main()
{
    int arr[] = {2,4,7,3,7,5,9,1,0,3,6,8};

    bool changed = true;

    while(changed)
    {
        changed = false;

        for(int i=0; i< sizeof(arr)/sizeof(arr[0]) - 1; i++)
        {
            if(arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];    
                arr[i+1] = temp;

                changed = true;
            }
        }
    }


    for(int i=0; i< sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}