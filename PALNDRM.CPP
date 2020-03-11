#include<iostream.h>
#include<string.h>
#include<conio.h>

void main()
 {
   char a[30],b[30];
   clrscr();
   cout<<"Enter the String to check it is Palindrom or Not:"<<endl;
   cin>>a;
   strcpy(b,a);
   strrev(b);
    if(strcmp(a,b)==0)
     {
       cout<<"String is Palindrome"<<endl;
     }
    else
     {
       cout<<"String is not Palindrom"<<endl;
     }

}