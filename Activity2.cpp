#include<iostream>
using namespace std;

  class Rectangle
{
  private:

  float length;
  float breath;
  public:
  
  void accept()
  {
  cout<<"Enter length:";
  cin>>length;

  cout<<"Enter breath:";
  cin>>breath;
  }
  float area();
  float perimeter();

  void display()
  {
  cout<<"area="<<area()<<endl;
  cout<<"perimeter="<<perimeter()<<endl;
 
  }
};
  
 float Rectangle::area()
{
 return length*breath;
}
 float Rectangle::perimeter()
{
 return 2*(length+breath);
}

  int main()
{
 Rectangle r;
 r.accept();
 r.display();
 return 0;
}
