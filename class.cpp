#include<iostream>

using namespace std;

class Student {
    public:
        // Data members (attributes)
        string name;
        double gpa;
        bool isEnrolled;

        Student(string n, double g, bool enrolled) 
        {
            // Additional initialization logic if needed
            name = n;
            gpa = g;
            isEnrolled = enrolled;
        }

        // Member functions (methods)
        void displayInfo() {
            cout << "Name: " << name << ", GPA: " << gpa << ", Enrolled: " << (isEnrolled ? "Yes" : "No") << endl;
        }

        void enroll() {
            isEnrolled = true;
            cout << name << " has been enrolled." << endl;
        }
};


int main()
{
    Student st1("Sarah", 3.5, false);
    // st1.name = "Sarah";
    // st1.gpa = 3.5;
    // st1.isEnrolled = false;

     // Calling methods
    st1.displayInfo();
    st1.enroll();
    return 0;
}