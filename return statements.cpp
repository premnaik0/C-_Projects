#include <iostream>

using namespace std;

int cube(int);
int main()
{
    cube(2);

    return 0;
}
int cube(int num )
{
    int cube=num*num*num;
    cout<<cube;
    return 0;
}
