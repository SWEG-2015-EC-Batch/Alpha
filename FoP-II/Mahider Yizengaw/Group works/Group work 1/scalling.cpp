#include<iostream>
#include<cassert>

using namespace std;

void scale(double unit,double val1,double val2);

int main(){
    double v1 = 3,v2 = 9;
    scale(4,v1,v2);
    scale(0.5,v1,v2);
return 0;
}

void scale(double unit,double val1,double val2){
    assert(unit != 0);
    cout << "the values before scalling: " << val1 << " and " << val2 << endl;
    val1 = val1*unit;
    val2 = val2*unit;
    cout << "the values after scalling: " << val1 << " and " << val2 << endl;

}