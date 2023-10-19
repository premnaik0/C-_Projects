#include <iostream>

using namespace std;

int main()
{
    char male;

    cout<<"Gender:\n"<<"Male=y\n"<<"Female=n\n";
    cin>>male;

    if(male=='y')
    {
        cout<<"male";
    }
    else
    {
        cout<<"female";
    }
}
