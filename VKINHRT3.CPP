#include<iostream.h>
#include<conio.h>


class clg
{
  int code;
  char vname[30];
public:
	void take()
	{
	  cout<<"Enter the college Name:";
	  cin>>vname;
	  cout<<"College code :" ;
	  cin>>code;
	}
	void show()
	{
	   cout<<"College code:"<<code<<endl;
	   cout<<"College name:"<<vname<<endl;
	 }
};

class std: public  clg
{
   int roll;
   char name[25];
 public:
      void get()
      {
	 cout<<"Enter the Student Name:";
	 cin>>name;
	 cout<<"Roll NO:";
	 cin>>roll;
	 take();
      }
	void disp()
       {
	 cout<<endl<<"Detail of Student"<<endl;
	 cout<<"Name of student :"<<name<<endl;
	 cout<<"Roll no:"<<roll<<endl;
	 show();
	}
};

class pro: public clg
{
  int reg;
  char pname[20];
  public:
	void shw()
	{
	cout<<"Enter Professor name:";
	cin>>pname;
	cout<<"REg No:";
	cin>>reg;
	take();
	}
	void dis()
	{
	  cout<<"Details of Professor"<<endl ;
	  cout<<"Professor NAme:"<<pname<<endl;
	  cout<<"Professor Registration No:"<<reg<<endl;
	  show();
	}
};
 void main()
 {
   std s;
   pro p;
   clrscr();
   s.get();
   p.shw();
   s.disp();
   p.dis();


   getch();
  }

