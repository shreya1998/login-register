#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<iomanip.h>
#include<stdio.h>
#include<stdlib.h>
class login
{
public:
char username[20];
char password[20];
void Register()
{
cout<<"enter username\n";
cin.get(username,20);
cin.ignore(256,'\n');
cout<<"\n";
cout<<"enter password\n";
cin.get(password,20);
cin.ignore(256,'\n');
cout<<"\n";
cout<<"account created\n";
}
};
void main()
{
clrscr();
char username1[20],password1[20],un[20],pw[20];
login user1;
cout<<"please first register\n";
user1.Register();
cout<<"now go to login process\n";
start:
cout<<"enter username\n";
cin.get(username1,20);
cin.ignore(256,'\n');
cout<<"enter password\n";
cin.get(password1,20);
cin.ignore(256,'\n');
if(strcmp(username1,user1.username)==0)
{
  if(strcmp(password1,user1.password)==0)
  {
  cout<<"sucessfully login\n";
  getch();
  }

  else
  {
  cout<<"incorrect password\n";
  char ch;
  cout<<"do  you want to try again:press(y/n)\n";
  again:
  cin>>ch;
  if(ch=='y'||ch=='Y')
  {
  goto start;
  }
  else if(ch=='n'||ch=='N')
  {
  exit(1);
  }
  else
  {
  cout<<"wrong choice";
  cout<<"\n";
  cout<<"press again\n";
  goto again;
  }
}
}
else
{
cout<<"incorrect username\n";
cout<<"try again(y/n)\n";
goto again;
}
  getch();
  }
