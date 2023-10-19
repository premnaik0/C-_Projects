#include <iostream>
using namespace std;

int main()
{
    int n[10],i;


    for(i=0;i<=9;i++)
    {
        cout<<"Enter\t"<<i<<"\tnumbers"<<endl;
        cin>>n[i];
    }

    for(i=0;i<=9;i++)
    {
        if(n[i]%2==0)
        {
            cout<<n[i]<<"\tEven"<<endl;
        }
        else if(n[i]==0)
        {
            cout<<n[i]<<"\t=zero"<<endl;
        }
        else
        {
            cout<<n[i]<<"\tOdd"<<endl;
        }
    }
}
