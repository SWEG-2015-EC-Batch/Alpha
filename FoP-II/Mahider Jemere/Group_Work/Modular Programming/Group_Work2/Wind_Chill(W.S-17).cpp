#include <iostream>
#include<cmath>
using namespace std;
//This program finds the wind chill index for given air temperature and wind speed

double windchill(double, double );
int main()
{
    double wind_spd, temp;//wind_spd is for wind speed and temp for temperature
    cout<<"Please enter the wind speed in m/sec: ";
    cin>>wind_spd;
    cout<<"Please enter the temperature in degree Celsius: ";
    cin>>temp;
    if(temp>10){
        cout<<"The windchill can not be calculated above 10 degree Celsius";
        return 0;
    }
    cout<<"The windchill index in degree Celsius is: "<<windchill(wind_spd,temp);
    return 0;
}

double windchill(double speed, double temperature){
    double chill_index;
    chill_index= 13.12+0.6215*temperature-11.37*pow(speed,0.16)+0.3965*temperature*pow(speed,0.16);
    return chill_index;
}
