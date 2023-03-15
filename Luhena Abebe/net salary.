/*This code is written for the purpose of calculating the net salary of n number of employees*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float gross_salary,pension,income_tax,net_salary,worked_hour,overtime_salary,bonus_rate_per_hour;
    int i,n;
    cout<<"please enter the number of employees "<<endl;
    cin>>n;
    for(i=1; i<=n; i++){
    cout<<"please enter the value of gross salary in birr "<<endl;
    cin>>gross_salary;
    cout<<"please enter worked hour "<<endl;
    cin>>worked_hour;
    pension=0.07*gross_salary;
    if(worked_hour>40 && gross_salary>0 && gross_salary<=200){
        cout<<"please enter bonus rate per hour in percent"<<endl;
        cin>>bonus_rate_per_hour;
        overtime_salary=gross_salary*(bonus_rate_per_hour/100)*(worked_hour-40);
        income_tax=(0)*(gross_salary+overtime_salary);
        net_salary=(gross_salary-income_tax-pension)+overtime_salary;
        cout<<"sir your net salary in birr is "<<net_salary<<endl;}
    else if(worked_hour>40 && gross_salary>200 && gross_salary<=600){
        cout<<"please enter bonus rate per hour in percent"<<endl;
        cin>>bonus_rate_per_hour;
        overtime_salary=gross_salary*(bonus_rate_per_hour/100)*(worked_hour-40);
        income_tax=(0.1)*(gross_salary+overtime_salary);
        net_salary=(gross_salary-income_tax-pension)+overtime_salary;
        cout<<"sir your net salary in birr is "<<net_salary<<endl;}
    else if(worked_hour>40 && gross_salary>600 && gross_salary<=1200){
         cout<<"please enter bonus rate per hour in percent"<<endl;
        cin>>bonus_rate_per_hour;
        overtime_salary=gross_salary*(bonus_rate_per_hour/100)*(worked_hour-40);
        income_tax=(0.15)*(gross_salary+overtime_salary);
        net_salary=(gross_salary-income_tax-pension)+overtime_salary;
        cout<<"sir your net salary in birr is "<<net_salary<<endl;}
    else if(worked_hour>40 && gross_salary>1200 && gross_salary<=2000){
         cout<<"please enter bonus rate per hour in percent"<<endl;
        cin>>bonus_rate_per_hour;
        overtime_salary=gross_salary*(bonus_rate_per_hour/100)*(worked_hour-40);
        income_tax=(0.2)*(gross_salary+overtime_salary);
        net_salary=(gross_salary-income_tax-pension)+overtime_salary;
        cout<<"sir your net salary in birr is "<<net_salary<<endl;}
    else if(worked_hour>40 && gross_salary>2000 && gross_salary<3500){
         cout<<"please enter bonus rate per hour in percent"<<endl;
        cin>>bonus_rate_per_hour;
        overtime_salary=gross_salary*(bonus_rate_per_hour/100)*(worked_hour-40);
        income_tax=(0.25)*(gross_salary+overtime_salary);
        net_salary=(gross_salary-income_tax-pension)+overtime_salary;
        cout<<"sir your net salary in birr is "<<net_salary<<endl;}
    else if(worked_hour>40 && gross_salary>=3500){
        cout<<"please enter bonus rate per hour in percent"<<endl;
        cin>>bonus_rate_per_hour;
        overtime_salary=gross_salary*(bonus_rate_per_hour/100)*(worked_hour-40);
        income_tax=(0.3)*(gross_salary+overtime_salary);
        net_salary=(gross_salary-income_tax-pension)+overtime_salary;
        cout<<"sir your net salary in birr is "<<net_salary<<endl;}
    else {
    if(gross_salary>0 && gross_salary<=200){
       income_tax=(0)*(gross_salary);
       net_salary=(gross_salary-pension-income_tax);
       cout<<"sir your net salary in birr is "<<net_salary<<endl;
    }
    else if(gross_salary>200 && gross_salary<600){
       income_tax=(0.1)*(gross_salary);
       net_salary=(gross_salary-pension-income_tax);
       cout<<"sir your net salary in birr is "<<net_salary<<endl;}
   else if(gross_salary>=600 && gross_salary<1200){
       income_tax=(0.15)*(gross_salary);
       net_salary=(gross_salary-pension-income_tax);
       cout<<"sir your net salary in birr is "<<net_salary<<endl;}  
    else if(gross_salary>=1200 && gross_salary<2000){
       income_tax=(0.2)*(gross_salary);
       net_salary=(gross_salary-pension-income_tax);
       cout<<"sir your net salary in birr is "<<net_salary<<endl;}
    else if(gross_salary>=2000 && gross_salary<3500){
       income_tax=(0.25)*(gross_salary);
       net_salary=(gross_salary-pension-income_tax);
       cout<<"sir your net salary in birr is "<<net_salary<<endl;} 
    else if(gross_salary>=3500){
       income_tax=(0.3)*(gross_salary);
       net_salary=(gross_salary-pension-income_tax);
       cout<<"sir your net salary in birr is "<<net_salary<<endl;} }
    }
return 0;
}
