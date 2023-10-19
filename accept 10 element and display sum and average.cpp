#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n[10],i,add=0,avg;

    for(i=0;i<=9;i++)
    {
        cout<<"Enter\t"<<i<<"\tnumbers"<<endl;
        cin>>n[i];
    }

    for(i=0;i<=9;i++)
    {
        add=add+n[i];
    }

    cout<<"Total"<<add<<endl;

    for(i=0;i<=9;i++)
    {
        avg=add/10;
    }

    cout<<"Average"<<avg<<endl;
}
