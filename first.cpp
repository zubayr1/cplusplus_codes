#include <iostream>
using namespace std;


namespace anothername{
   string name = "Sarah Ulfat";
}


int main() 
{
   string name = "Sarah";

   string newname;
   
   cout << "Hello " << name << " & " << anothername::name << endl; 
   return 0;
}