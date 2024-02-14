#include<iostream>
#include<string>

using namespace std;

typedef struct Students
{
    string name;
    double gpa;
    bool isenrolled;
} students;

void printstudents(students st)
{
    cout << "Name: " << st.name << ", GPA: " << st.gpa << ", Enrolled: " << st.isenrolled << endl;
}

int main()
{
    students st1 = {"sarah", 1.0, false};

    printstudents(st1);

    students st2;

    cout<<"enter name"<<endl;

    getline(cin >> ws, st2.name);

    cout<<"enter gpa"<<endl;

    cin >> st2.gpa;

    cout<<"is enrolled?"<<endl;

    cin >> st2.isenrolled;

    printstudents(st2);


    return 0;
}