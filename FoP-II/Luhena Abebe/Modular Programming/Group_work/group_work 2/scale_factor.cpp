#include <iostream>
#include <cassert>
using namespace std;
void scale(double scale_factor,double &fnum,double &snum);

int main()
{   double scale_f,fnum,snum;
    cout<<"This code is used to scale the input given by the user "<<endl;
    cout<<"scale factor "<<endl;
    cin>>scale_f;
    assert (scale_f!=0);
    cout<<"Please enter first value"<<endl;
    cin>>fnum;
    cout<<"Please enter second value"<<endl;
    cin>>snum;
    cout<<"the values before scaling: "<<endl;
    cout<<fnum<<" " <<snum<<endl;
    cout<<"the values after scaling: "<<endl;
    scale(scale_f,fnum,snum);
    cout<<fnum<<"  "<<snum<<endl;
    return 0;
}

void scale(double scale_factor,double &fnum,double &snum){
fnum=scale_factor*fnum;
snum=scale_factor*snum;
}
