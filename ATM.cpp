#include <iostream>
using namespace std;

void menu()
{
    cout<<"*****MENU*****"<<endl;
    cout<<"1. CHECK BALANCE"<<endl;
    cout<<"2. DEPOSITE MONEY"<<endl;
    cout<<"3. WITHDRAW"<<endl;
    cout<<"**************"<<endl;


}
int main()
{
    int option;

    double balance=50000,deposite=0,withdraw=0;

    menu();
    cout<<"YOUR CHOISE:";
    cin>>option;

    switch(option)
    {
        case 1:
        {
            cout<<"YOUR BALANCE IS:"<<endl;
            cout<<balance<<endl;

            cout<<"THANK YOU"<<endl;
            cout<<"\n";

            main();

            break;
        }
        case 2:
        {
            cout<<"DEPOSITE VALUE"<<endl;
            cin>>deposite;

            balance=balance+deposite;

            cout<<"YOUR PRESENT BALANCE IS:"<<endl;
            cout<<balance<<endl;

            cout<<"THANK YOU"<<endl;
            cout<<"\n";

            main();

            break;
        }
        case 3:
        {
            cout<<"WITHDRAW VALUE"<<endl;
            cin>>withdraw;

            balance=balance-withdraw;

            cout<<"YOUR PRESENT BALANCE IS:"<<endl;
            cout<<balance<<endl;

            cout<<"THANK YOU"<<endl;
            cout<<"\n";

            main();

            break;

        }
        default:
        {
                cout<<"PLEASE ENTER A VALID OPTION"<<endl;
                menu();
        }
    }
}
