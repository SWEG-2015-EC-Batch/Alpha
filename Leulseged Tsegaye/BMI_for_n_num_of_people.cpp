//this program is used to evaluate bmi for nth number of man
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float w,h,bmi,n;
	char gender;
	int i=1;
	cout <<"please enter number of persons,\n you want to calculate their bmi "<<endl;
	cin>>n;
	while (i<=n)
	{
	cout<<"please enter your wheight:"<<endl;
	cin>>w;
	cout<<"please enter your height:"<<endl;
	cin>>h;
	cout<<"please enter your gender(f for female m for male)"<<endl;
	cin>>gender;
	bmi=w/pow(h,2);
	cout<<"your bmi is:"<<bmi<<endl;
	if(gender == 'm')
	{
		if(bmi < 20)
		 {
			cout<<"your bmi is less than 20 which is considered as under weight so you should improve your eating style"<<endl;
		 }
			else if(20 >= bmi <= 25)
			{
				cout<<"your bmi is beteewn 20 and 25 which is consider as normal so you should continue as it's"<<endl;
			}
				else
				{
				cout<<"your bmi is above 25 which is consider as overweight you shoud do more excersice"<<endl;
				}
		}
		if(gender == 'f')
		{
		if(bmi < 18){
			cout<<"yoor bmi is less than 18 which is considered as under weight so you should improve your eating style"<<endl;
		            }
			else if(bmi >= 18 && bmi <= 23)
			{
				cout<<"your bmi is beteewn 18 and 23 which is consider as normal so you should continue as it's"<<endl;
			 }
				else{
				cout<<"your bmi is above 23 which is consider as overweight you should do more excersice"<<endl;
			       	}
			}
				i=i+1;
}
return 0;
}
