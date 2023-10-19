#include <iostream>

using namespace std;

int main()
{
    string colour,name;

    cout<<"Enter a colour\n";
    getline(cin,colour);

    cout<<"Enter a someonce name\n";
    getline(cin,name);

    cout<<"Roses are "<<colour<<"\n";
    cout<<"Violets are blue\n";
    cout<<"I love "<<name<<"\n";
}
