#include <iostream>
using namespace std;

int power(int n, int p)
{
    int r=1;

    for (int i=0;i<p;i++)
    {
        r=r*n;
    }

    return r;
}
int main()
{
    int n,p,r;

    cout<<"Enter number";
    cin>>n;

    cout<<"Enter power";
    cin>>p;

    power(2,4);

    cout<<r<<endl;

    return 0;
}
