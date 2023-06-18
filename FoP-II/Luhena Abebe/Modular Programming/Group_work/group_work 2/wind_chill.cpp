//This code is written for the purpose of calculating wind chill index.
#include <iostream>
#include <cassert>//For the purpose of assertion;
#include <cmath>
using namespace std;
double wind_chill_cal(double wind_speed,double temprature, double windchill_index);

int main()
{
    double v,t,w;
    cout<<"Wind chill index calculator by using wind speed and temperature"<<endl;
    cout<<"please enter wind speed in M/s"<<endl;
    cin>>v;
    cout<<"please enter temperature in degree celsius "<<endl;
    cin>>t;
    cout<<"wind chill index = "<<wind_chill_cal(v,t,w)<<" "<<"degree celsius"<<endl;
    return 0;
}

double wind_chill_cal(double wind_speed,double temprature,double windchill_index){
assert(temprature<=10);
windchill_index=13.12+0.6215*temprature-11.37*(pow(wind_speed,0.16))+0.3965*temprature*(pow(wind_speed,0.016));
return windchill_index;
}
