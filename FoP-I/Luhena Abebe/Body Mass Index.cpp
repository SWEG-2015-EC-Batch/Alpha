/* This code is written for the purpose of calculating BMI for 
single person, unknown number of person and n number of person*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float w,h,bmi;
    int i,number_of_a_person,choice_no;
    string m;
    char gender;
    cout<<"please enter the number of a person that you want to calculate the BMI"<<endl;
    cout<<"1, for single person"<<endl;
    cout<<"2, for known number of person"<<endl;
    cout<<"3, for the unknown number of person"<<endl;
    cin>>choice_no;
    if (choice_no==1){
         cout<<"please enter the weight"<<endl;
    cin>>w;
    cout<<"please enter the height"<<endl;
    cin>>h;
bmi=w/pow(h,2);
cout<<"your bmi is "<<bmi<<endl;
cout<<"please enter the gender (g for male and f for female)"<<endl;
cin>>gender;
if(gender=='g' && bmi<20){
cout<<"your are under weight because for male less than 20 is considerd as underweight"<<endl;}
else if(gender=='g'&& bmi>=20 && bmi<25){
    cout<<"your are normal because for male bmi between 20 and 25 is considerd as normal"<<endl;
}
else if(gender=='g'&& bmi>25){
    cout<<"your are overweight because for male bmi greater than 25 is considerd as overweight"<<endl;
}
else if(gender=='f' && bmi<18){
cout<<"your are under weight because for female less than 18 is considerd as underweight"<<endl;
}
else if(gender=='f' && bmi>18 && bmi<23){
cout<<"your are normal because for female between 18 and 23 is considerd as normal"<<endl;
    }
   else {
   cout<<"your are overweight because for female greater than 23 is considerd as normal"<<endl;}}
    else if(choice_no==3){
        m="y";
        while(m=="y"){
      cout<<"please enter the weight"<<endl;
    cin>>w;
    cout<<"please enter the height"<<endl;
    cin>>h;
bmi=w/pow(h,2);
cout<<"your bmi is "<<bmi<<endl;
cout<<"please enter the gender (g for male and f for female)"<<endl;
cin>>gender;
if(gender=='g' && bmi<20){
cout<<"your are under weight because for male less than 20 is considerd as underweight"<<endl;}
else if(gender=='g'&& bmi>=20 && bmi<25){
    cout<<"your are normal because for male bmi between 20 and 25 is considerd as normal"<<endl;
}
else if(gender=='g'&& bmi>25){
    cout<<"your are overweight because for male bmi greater than 25 is considerd as overweight"<<endl;
}
else if(gender=='f' && bmi<18){
cout<<"your are under weight because for female less than 18 is considerd as underweight"<<endl;
}
else if(gender=='f' && bmi>18 && bmi<23){
cout<<"your are normal because for female between 18 and 23 is considerd as normal"<<endl;
    }
   else {
   cout<<"your are overweight because for female greater than 23 is considerd as normal"<<endl;}
cout<<" do you want to contniue? (y for yes and x for no)"<<endl;
cin>>m;
        }

        }
        else {
            cout<<"please enter the number of person"<<endl;
            cin>>number_of_a_person;
            i=1;
           while(i<=number_of_a_person){
            cout<<"please enter the weight"<<endl;
    cin>>w;
    cout<<"please enter the height"<<endl;
    cin>>h;
bmi=w/pow(h,2);
cout<<"your bmi is "<<bmi<<endl;
cout<<"please enter the gender (g for male and f for female)"<<endl;
cin>>gender;
if(gender=='g' && bmi<20){
cout<<"your are under weight because for male less than 20 is considerd as underweight"<<endl;}
else if(gender=='g'&& bmi>=20 && bmi<25){
    cout<<"your are normal because for male bmi between 20 and 25 is considerd as normal"<<endl;
}
else if(gender=='g'&& bmi>25){
    cout<<"your are overweight because for male bmi greater than 25 is considerd as overweight"<<endl;
}
else if(gender=='f' && bmi<18){
cout<<"your are under weight because for female less than 18 is considerd as underweight"<<endl;
}
else if(gender=='f' && bmi>18 && bmi<23){
cout<<"your are normal because for female between 18 and 23 is considerd as normal"<<endl;
    }
   else {
   cout<<"your are overweight because for female greater than 23 is considerd as normal"<<endl;}
i=i+1;
           }
        }
 return 0;
}
