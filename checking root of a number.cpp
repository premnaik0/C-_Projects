#include <iostream>
using namespace std;

int main()
{

    int n,i,root;

    cout<<"Enter root"<<endl;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        root=i*i;

        if(root==n)
        {
            cout<<i;
            break;
        }
    }


}
