#include <iostream>
using namespace std;

class student
{
public:
    string name;
    string subject;
    int roll_no;

    student(string aName, string aSubject, int aRoll_no);

    name=aName;
    subject=aSubject;
    roll no=aRoll_no;
}
    string math()
    {
        if(subject=="Math")
        {
            return true;
        }
        return false;
    }
int main()
{
    Student student1("Prem","Math",11);
    Student student1("Motu","Science",40);

    cout<<student1.math();

    return 0;
}
