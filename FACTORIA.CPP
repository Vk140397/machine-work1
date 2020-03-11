#include<iostream.h>
#include<conio.h>

int factorial(int n);
void main()
{
  int n;
  clrscr();

  cout<<"Enter The Number:"<<endl;
  cin>>n;
  cout<<"Factorial of: "<<n<<endl;
  cout<<"Factorial is:"<<factorial(n)<<endl;

  getch();
}

int  factorial(int n)
 {
   if(n<=1)
   {
     return(1);
   }
   else
   {
    n=n*factorial(n-1);
    return(n);
   }

 }