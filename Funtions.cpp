#include <iostream>
#include <cmath>

using namespace std;

void hello(string,int);

int main()
{
    cout<<"Up\n";

    hello("Prem",18);
    hello("Devesh",16);
    hello("Good",60);

    cout<<"Down\n";

}
void hello(string name, int age)
{
    cout<<"Hello"<<name<<"you are"<<age<<"\n";

}
