#include <iostream>
using namespace std;

int main()
{
    int n[3][2]{
           {1,2},
           {3,4}
                };

    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=1;j++)
        {
            cout<<n[i][j]<<endl;
        }
    }
}
