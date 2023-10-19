#include <iostream>
using namespace std;

class Book
{
    public:
            string title;
            string author;
            int pages;
};

int main()
{
    Book book1;

    book1.title="Herry";
    book1.author="Prem";
    book1.pages=12;

    cout<<book1.title<<endl;
    cout<<book1.author<<endl;
    cout<<book1.pages<<endl;

    Book book2;
    book2.title="Prem";
    book2.author="harry";
    book2.pages=1;

    cout<<book2.title<<endl;
    cout<<book2.author<<endl;
    cout<<book2.pages<<endl;

    return 0;

}
