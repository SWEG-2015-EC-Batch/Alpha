/*this program is used to find net payment of an employee, here we use 
let gross salery =gs,  worked hours =wh, tax rate =tr, income tax =it , pension = pn, over time bonous rate =otbr and over time payment =otp*/ 
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float ns,gs,wh,otbr,it,pn,otp,pns,s,i,n;
	pns=0.07;
	cout<<" please enter the number of employee you want \n to calculate: ";
	cin>>n;
	for(i=1;i<=n;i++){
	cout<<"\n please enter the gross salary in birr here: ";
	cin>>gs;
	pn=pns*gs ;
	cout<<"\n the pension is:"<<pn<<" birr";
	cout<<"\n enter worked hours here please :  ";
	cin>>wh;
	if (wh>40){
		cout<<" wow! the employee worked  greater than 40 hours so\n please enter an over time bonous rate per hour \n in persent here: ";
		cin>>otbr;
	otp=(otbr/100)*gs*(wh-40);
	s=gs+otp;
	cout<<"\n the gross salery with overtime bonous is: "<<s<<" birr";
	if (gs>=0 && gs<200){
	      it=0*s;
	      }
	   else if(gs>=200 && gs<600){
	      it=0.1*s;
	      } 
	    else if(gs>=600 && gs<1200) {
	      it=0.15*s;
	      }
	     else if(gs>=1200 && gs<2000){
	      it=0.2*s;
	      }
	     else if(gs>=2000 && gs<3500){
	      it=0.25*s;
	      }
	      else if(gs>=3500){
	      	it=0.3*s;
	      	}
	      	ns=(gs-pn-it) + otp;
	      }
	 else {
	      if (gs>=0 && gs<200){
	      it=0*gs;
	      }
	   else if(gs>=200 && gs<600){
	      it=0.1*gs;
	      } 
	    else if(gs>=600 && gs<1200) {
	      it=0.15*gs;
	      }
	    else if(gs>=1200 && gs<2000){
	      it=0.2*gs;
	      }
	    else if(gs>=2000 && gs<3500){
	      it=0.25*gs;
	      }
	     else if(gs>=3500){
	      	it=0.3*gs;
	      	}	
	      	ns=gs-pn-it;
	      	}
	cout<<"\n the net salery of employee is: "<<ns<<" birr";
	}
return 0;
}
