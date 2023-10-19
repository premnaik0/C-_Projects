#include <iostream>

using namespace std;

int main()
{
    int n=99,guess,i=1,j=3;

    if(i!=j)
    {
        while(n!=guess && j<=1)
        {
            cout<<"Enter guess";
            cin>>guess;
        }
        j--;
    }
    else
    {
        cout<<"You win";
        j--;
    }
}
