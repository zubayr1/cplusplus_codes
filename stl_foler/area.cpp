#include<iostream>

using namespace std;

template <typename T>
T area_rect(T a, T b)
{
    T result = a*b;
    return result;
}

int main()
{
    int x1 = area_rect<int>(10, 5);
    double x2 = area_rect<double>(10.5, 5.5);

    cout << "x1: "<< x1 << " x2: "<< x2<< endl;
    return 0;
}

// containers
// iterators
// algorithms
// functions