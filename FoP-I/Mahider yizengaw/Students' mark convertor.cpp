//students mark convertor
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float m;
	char letter;
	cout<<"please enter your mark of a course here: ";
	cin>>m;
	if(m>=90){
		cout<<"your letter grade is: "<<"A+";
		}
	else if(m>=80 && m<90){
		cout<<"your letter grade is: "<<'A';
		}
	else if(m>=75 && m<80){
		cout<<"your letter grade is: "<<"B+";
		}
	else if(m>=60 && m<75){
		cout<<"Your letter grade is: "<<'B';
		}
	else if(m>=55 && m<60){
		cout<<"Your letter grade is: "<<"C+";
		}
	else if(m>=45 && m<55){
		cout<<"Your letter grade is: "<<'C';
		}
	else if(m>=30 && m<45){
		cout<<"Your letter grade is: "<<'D';
		}
	else{
		cout<<"I am sorry, your letter grade is: "<<'F';
		}

return 0;
}
