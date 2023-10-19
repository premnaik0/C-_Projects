#include <iostream>
using namespace std;

int main()
{
    int n[10];


    for(int i=0;i<=9;i++)
    {
        cout<<"Enter\t"<<i<<"\tnumbers"<<endl;
        cin>>n[i];
    }

    for(int i=0;i<=9;i++)
    {
        if(n[i]>0)
        {
            cout<<n[i]<<"\tPositive"<<endl;
        }
        else if(n[i]==0)
        {
            cout<<n[i]<<"\t=zero"<<endl;
        }
        else
        {
            cout<<n[i]<<"\tNegative"<<endl;
        }
    }
}
