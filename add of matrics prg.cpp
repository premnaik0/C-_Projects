#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int x[2][3],y[2][3],z[2][3];
   int i,j;

   cout<<"Enter matrix 1"<<endl;

   for(i=0;i<=2;i++);
   {
       for(j=0;j<=1;j++);
       {
           cin>>x[i][j];
       }
   }
   cout<<"Enter matrix 2"<<endl;

   for(i=0;i<=2;i++);
   {
       for(j=0;j<=1;j++);
       {
           cin>>y[i][j];
       }
   }

   for(i=0;i<=2;i++);
   {
       for(j=0;j<=1;j++);
       {
           z[i][j]=x[i][j]+y[i][j];
           cout<<z[i][j]<<"\t";
       }
       cout<<endl;
   }
}
