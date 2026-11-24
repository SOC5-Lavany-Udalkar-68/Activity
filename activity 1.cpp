#include<iostream>
#include<string>

using namespace std;

class Student
{

 private:
 int Roll_num;
 string name;
 float marks;

 void accept()
 {
    cout<<"Enter name";
    cin>>name;
    cout<<"Enter roll_num
