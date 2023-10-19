#include <iostream>

using namespace std;

int main()
{
    string name="Prem";

    cout<<"\n"<<name;
    cout<<"\n"<<name.length();
    cout<<"\n"<<name[2];

    name[2]='a';

    cout<<"\n"<<name;
    cout<<"\n"<<name[2];

    cout<<"\n"<<name.find('m',0);

    cout<<"\n"<<name.substr(2,4);
    string sub=name.substr(2,4);
    cout<<"\n"<<sub;
}
