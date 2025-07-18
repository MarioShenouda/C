#include <iostream>
#include<cmath>

using namespace std;
class triangle
{
private:
int weidth;
int breite;

public:
    void setweidth (int x)
{
  weidth=x;
}
void setbreite (int x)
{
  breite=x;
}
int getweidth()
{
  return weidth;
}
int getbreite()
{
  return breite;
}
void print()
{
  cout<<"area = "<<breite*weidth<<endl;
}
};

int main()
{
    int y,l;
    cout<<"please enter the breite"<<endl;
    cin>>y;
    cout<<"please enter the weidth"<<endl;
    cin>>l;
  triangle x;
  x.setbreite(y);
  x.setweidth(l);
  x.print();


}
