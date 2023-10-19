#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n1,n2,result;
    char o;

    cout<<"Enter number 1";
    cin>>n1;

    cout<<"Enter number 2";
    cin>>n2;

    cout<<"Enter operator";
    cin>>o;

    if(o=='+')
    {
        cout<<n1+n2;
    }
    else if(o=='-')
    {
        cout<<n1-n2;
    }
    else  if(o=='*')
    {
        cout<<n1*n2;
    }
    else if(o=='/')
    {
        cout<<n1/n2;
    }
    else
    {
        cout<<"Invalid a operator or number";
    }
    return 0;
}
