#include<iostream>
#include<cmath>

using namespace std;

double w_chill(double temp,double speed);

int main(){
    double temp,speed,w_ch;
    
    cout << "Enter the wind speed in m/sec: ";
    cin >> speed;
    cout << "Enter the temprature in degrees celcius: ";
    cin >> temp;
    
    w_ch = w_chill(temp,speed);

     if(w_ch == 1){
        cout << "invalid input.\nthe temprature should be less than or equal to ten(T <= 10). " << endl;
     }
     else {
        cout << "the windchill index is: " << w_ch << " degree celcius.";
     }

return 0;
}

double w_chill(double temp,double speed){
    if(temp > 10){
        return 1;
    }
    double w_ch;
    w_ch = 13.12 + 0.6215*temp - 11.37*pow(speed,0.16) + 0.3965*temp*pow(speed,0.016);
    return w_ch;
}