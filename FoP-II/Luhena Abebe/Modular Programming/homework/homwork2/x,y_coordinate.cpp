//This code is written for the purpose of understanding returning structure and passing as a parametr;
#include <iostream>
using namespace std;

struct coordinate
{
    int x,y;
};
coordinate read();
void print(coordinate(z));

int main()
{
 coordinate l;
  l=read();
   print(l);
}

coordinate read(){
coordinate v;
v.x=5;
v.y=6;
return v;
}
void print(coordinate z){
cout<<z.x<<endl;
cout<<z.y;
}
