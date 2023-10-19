#include <iostream>
using namespace std;

int main ()
{
int x,reminder,sum=0;

cout<<"Enter a number"<<endl;
cin>>x;

while (x!=0)
{
reminder=x%10;

sum=sum+reminder;

x=(x/10);
}
cout<<sum;
}

