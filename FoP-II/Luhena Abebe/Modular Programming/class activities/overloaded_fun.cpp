//This code is written for the purpose to understand how overloaded function work.
#include <iostream>
#include <cmath>
using namespace std;
double maxi(double i, double j);
double maxi(int h, int k, int m);

int main()
{
    cout<<maxi(1.0,2.9)<<endl;
    cout<<maxi(1,2,6);
    return 0;
}

double maxi(double i, double j){
return max(i,j);
}
double maxi( int h, int k, int m){
    if(h>=k&&h>=m){
        return h;
    }
    if(k>=h&&k>=m){
        return k;
    }
    if(m>=k&&m>=h){
        return m;
    }

}
