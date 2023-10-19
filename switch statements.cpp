#include <iostream>

using namespace std;

string day(int daynum)
{

    switch(daynum)
    {
    case 1:
        {
            daynum="Sunday"
            break;
        }
    case 2:
        {
            daynum="Monday"
            break;
        }
    case 3:
        {
            daynum="Tuesday"
            break;
        }
    case 4:
        {
            daynum="Wednesday"
            break;
        }
    case 5:
        {
            daynum="Thirsday"
            break;
        }
    case 6:
        {
            daynum="Friday"
            break;
        }
    case 7:
        {
            daynum="Saturday"
            break;
        }
    default :
        {
            daynum="Invalid"
            break;
        }
    }
}

int main()
{
    cout<<"Get day");
    cin>>daynum;
