#include <iostream>

using namespace std;

void menu()
{
    int option;

    cout<<"*******************MENU*******************"<<endl;
    cout<<"1 FOR CONVERTING FORM RUPRRS TO DOLLAR"<<endl;
    cout<<"2 FOR CONVERTING FORM DOLLAR TO RUPRRS"<<endl;

    cout<<"3 FOR CONVERTING FORM RUPEES TO POUNDS"<<endl;
    cout<<"4 FOR CONVERTING FORM POUNDS TO RUPRRS"<<endl;

    cout<<"5 FOR CONVERTING FORM RUPEES TO YEN"<<endl;
    cout<<"6 FOR CONVERTING FORM DOLLAR TO RUPRRS"<<endl;

    cout<<"7 FOR CONVERTING FORM RUPEES TO BITCOIN"<<endl;
    cout<<"8 FOR CONVERTING FORM BITCOIN TO RUPRRS"<<endl;

    cout<<"******************************************"<<endl;
}
int main()
{
    int option;

    float total=0,amt=0;

    menu();

    cout<<"YOUR OPTION:";
    cin>>option;


    switch(option)
    {
    case 1:
        {
            cout<<"ENTER AMOUNT IN RUPEES"<<endl;
            cin>>amt;

            total=amt/82.42;

            cout<<"YOUR CASH IN DOLLARS:";
            cout<<total<<endl;
            cout<<"THANK YOU"<<endl;
            break;
        }
    case 2:
        {
            cout<<"ENTER AMOUNT IN DOLLARS"<<endl;
            cin>>amt;

            total=amt*82.42;

            cout<<"YOUR CASH IN RUPEES:";
            cout<<total<<endl;
            cout<<"THANK YOU"<<endl;
            break;
        }
    case 3:
        {
        cout<<"ENTER AMOUNT IN RUPEES"<<endl;
        cin>>amt;

        total=amt/103.03;

        cout<<"YOUR CASH IN POUNDS:";
        cout<<total<<endl;
        cout<<"THANK YOU"<<endl;
        break;
        }
    case 4:
        {
        cout<<"ENTER AMOUNT IN POUNDS"<<endl;
        cin>>amt;

        total=amt*103.03;

        cout<<"YOUR CASH IN RUPEES:";
        cout<<total<<endl;
        cout<<"THANK YOU"<<endl;
        break;
        }
    case 5:
        {
        cout<<"ENTER AMOUNT IN RUPEES"<<endl;
        cin>>amt;

        total=amt/0.60;

        cout<<"YOUR CASH IN YEN:";
        cout<<total<<endl;
        cout<<"THANK YOU"<<endl;
        break;
        }
    case 6:
        {
        cout<<"ENTER AMOUNT IN YEN"<<endl;
        cin>>amt;

        total=amt*0.60;

        cout<<"YOUR CASH IN RUPEES:";
        cout<<total<<endl;
        cout<<"THANK YOU"<<endl;
        break;
        }
    case 7:
        {
        cout<<"ENTER AMOUNT IN RUPEES"<<endl;
        cin>>amt;

        total=amt/1417039.17;

        cout<<"YOUR CASH IN BITCOIN:";
        cout<<total<<endl;
        cout<<"THANK YOU"<<endl;
        break;
        }
    case 8:
        {
        cout<<"ENTER AMOUNT IN BITCOIN"<<endl;
        cin>>amt;

        total=amt*1417039.17;

        cout<<"YOUR CASH IN RUPEES:";
        cout<<total<<endl;
        cout<<"THANK YOU"<<endl;
        break;
        }
    default:
        {
            cout<<"ENTER VALID OPTION"<<endl;
            menu();
            main();
        }



    }
}
