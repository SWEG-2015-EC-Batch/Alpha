#include<iostream>

using namespace std;

void ask1(double &feet,double &inch);
void ask2(double &meter,double &centimeter);
void convertor1(double feet,double inch,double &metere,double &centimeter);
void convertor2(double meter,double centimeter,double &feet,double &inch);
void result1(double feet,double inch,double meter,double centimeter);
void result2(double meter,double centimeter,double feet,double inch);
int main(){
    int choic;
    bool iscontinue;
    double scale1,scale2,scale3,scale4;

    do{
    cout << "please choose the approprate convertor.\n";
    cout << "1.to convert length in feet and inches to length in meters and centimeter.\n";
    cout << "2.to convert length in meters and centimeter to length in feet and inches.\n";
    cin >> choic;

    if(choic == 1){
        ask1(scale1,scale2);
        convertor1(scale1,scale2,scale3,scale4);
        result1(scale1,scale2,scale3,scale4);
    }

    else if(choic == 2){
      ask2(scale1,scale2);
      convertor2(scale1,scale2,scale3,scale4);
      result2(scale1,scale2,scale3,scale4); 
    }
    else{
    cout << "your choice is not occured try again.\n";
    exit(0);
    }
   cout << "\nDo you want repeat for new input?\n";
   cout << "0.no\n" << "1.yes\n";
   cin >> iscontinue;
    }while (iscontinue == true);
  cout << "thank you baye!!";
return 0;
}

void ask1(double &feet,double &inch){
    cout << "please enter the length in feet first and then in inche.\n";
    cout << "in feet: ";
    cin >> feet;
    cout << "in inches: ";
    cin >> inch;
}

void ask2(double &meter,double &centimeter){
    cout << "please enter the length in feet first and then in inche.\n";
    cout << "in meters: ";
    cin >> meter;
    cout << "in centimeters: ";
    cin >> centimeter;
}

void convertor1(double feet,double inch,double &meter,double &centimeter){
    const double meter_per_foot = 0.3048;
    const int inch_per_foot = 12;
    const int centimeter_per_meter = 100;
    double t_feet,t_meter;
    t_feet = feet + inch/inch_per_foot;
    t_meter = t_feet*meter_per_foot;
    meter = int(t_meter);
    centimeter = (t_meter - meter)*centimeter_per_meter;
}

void convertor2(double meter,double centimeter,double &feet,double &inch)  {
    const double meter_per_foot = 0.3048;
    const int inch_per_foot = 12;
    const int centimeter_per_meter = 100;
    double t_meter,t_feet;
    t_meter = meter + centimeter/centimeter_per_meter;
    t_feet = t_meter/meter_per_foot;
    feet = int(t_feet);
    inch = (t_feet - feet)*inch_per_foot;
}

void result1(double feet,double inch,double meter,double centimeter){
    cout << feet << " feet and " << inch << " inches are equivalent to " << meter << " meter and " << centimeter << " centimeter";
}

void result2(double meter,double centimeter,double feet,double inch) {
    cout << meter << " meter and " << centimeter << " centimeter are equivalent to " << feet << " feet and " << inch << " inch";
}