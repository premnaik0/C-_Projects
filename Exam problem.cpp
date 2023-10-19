#include <iostream>
using namespace std;

void add()
{
    double n1,n2,t;

    cout<<"Enter first number\n";
    cin>>n1;

    cout<<"Enter second number\n";
    cin>>n2;

    t=n1+n2;

    cout<<t;
}

void sub()
{
    double n1,n2,t;

    cout<<"Enter first number\n";
    cin>>n1;

    cout<<"Enter second number\n";
    cin>>n2;

    t=n1-n2;

    cout<<t;
}

void multi()
{
    double n1,n2,t;

    cout<<"Enter first number\n";
    cin>>n1;

    cout<<"Enter second number\n";
    cin>>n2;

    t=n1*n2;

    cout<<t;
}

void divi()
{
    double n1,n2,t;

    cout<<"Enter first number\n";
    cin>>n1;

    cout<<"Enter second number\n";
    cin>>n2;

    t=n1/n2;

    cout<<t;
}

int main()
{
    int o;

    cout<<"*************************\n";
    cout<<"Choose a option\n Press 1 for addition\n Press 2 for subtraction\n Press 3 for multiplication\n Press 4 for division\n";
    cout<<"*************************\n";

    cin>>o;

    switch(o)
    {
    case 1:
        {
            add();
            break;
        }
    case 2:
        {
            sub();
            break;
        }
    case 3:
        {
            multi();
            break;
        }
    case 4:
        {
            divi();
            break;
        }
    default:
        {
            cout<<"Please enter a valid option\n";
            main();
        }
    }
}
