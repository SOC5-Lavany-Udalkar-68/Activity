#include<iostream>
#include<string>
using namespace std;

class Student
{

  public:
  int Roll_no;
  string name;
  float marks;

  void accept()
  {
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter Roll_no:";
    cin>>Roll_no;
    cout<<"Enter marks:";
    cin>>marks;

  }

  void result()
  {
    if(marks>=40)
   {
     cout<<"result=pass";
   }
   else
   {
    cout<<"result=fail";
   }
 }
 void display()
  {
    cout<<"\n----Students Details----\n";
    cout<<"student name is :"<<name;
    cout<<"the roll no is :"<<Roll_no;
    cout<<"the marks are :"<<marks;
    result();
  }
};

int main()
{
  Student s;
  s.accept();
  s.display();
  return 0;
 }
   




