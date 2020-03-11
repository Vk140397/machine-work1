#include<iostream.h>
#include<conio.h>

void main()
{
  int a,b,c,i,n;
  clrscr();
  a=0;
  b=1;

  cout<<"Enter the total number to print fibonacci Series:"<<endl;
  cin>>n;
  cout<<endl<<"FIBONACCI SERIES"<<endl;
//  cout<<a<<b;
  for(i=0;i<n;i++)
  {
    c=a+b;
    a=b;
    b=c;

    cout<<c<<endl;
  }

  getch();
  }
