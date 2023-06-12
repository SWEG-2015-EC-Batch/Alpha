#include<iostream>

using namespace std;

int main(){

    int number_of_days,i,l,j;//l stores the remainder after the calculation and i store the number of days in a week

    string day_of_the_week;
    char today;

	i=7;

	cout<<endl;

	cout<<"This program finds the day of the week after a some number of days.\n";

	cout << "Please enter the number of days from now " << endl;

	cin >> number_of_days;

	cout<<"what day is today(please press 'm'' for monday, 't' for tuesday, 'r' for thursday, 'f' for friday, 's' for saterdat and any symbol for sunday) ";

	cin>>today;

	switch(today){

		case 'm':

		            l= (0+number_of_days)%i;

		            break;

		 case 't':

		            l=(1+number_of_days)%i;

		            break;

		  case 'w':

		            l= (2+number_of_days)%i;

		            break;

		   case 'r':

		            l= (3+number_of_days)%i;

		            break;

		    case 'f':

		            l= (4+number_of_days)%i;

		            break;

		     case 's':

		            l= (5+number_of_days)%i;

		            break;

		     default:

		            l= (6+number_of_days)%i;

		            break;     

		}

    cout<<"From now on, please enter the full name of the day for the question asked below\n";

    j=0;

    while (j<3){

    cout<<"Please guess the day of the weeek it will be after "<<number_of_days<<" days ";

    cin>>day_of_the_week;

    if(l==0 && day_of_the_week=="monday" ){

    	cout<<"Bravo!! you have got the answer!!! ";

        exit(0);

    	}

    else if(l==1 && day_of_the_week=="tuesday"){

    	cout<<"Bravo!! you have got the answer!!! ";

        exit(0);

    	}

     else if(l==2 && day_of_the_week=="wednesday"){

    	cout<<"Bravo!! you have got the answer!!! ";

        exit(0);

    	}

      else if(l==3 && day_of_the_week=="thursday"){

    	cout<<"Bravo!! you have got the answer!!! ";

        exit(0);

    	}

      else if(l==4 && day_of_the_week=="friday"){

    	cout<<"Bravo!! you have got the answer!!! ";

        exit(0);

    	}

    else if(l==5 && day_of_the_week=="saturday"){

    	cout<<"Bravo!! you have got the answer!!! ";

        exit(0);

    	}

    else if(l==6 && day_of_the_week=="sunday") {

    	cout<<"Bravo!! you have got the answer!!! ";

        exit(0);

    	}

    else{

       if(j==2){

	cout<<"Sorry,you attempted too much. You can read books on discrete maths and try again later.";
cout<<"the answer is ";
        if(l==0){
            cout<<"monday";}
        else if(l==1){
 	cout<<"tuesday";}
        else if(l==2) {
 	cout<<"wednesday";}   
        else if(l==3) {
    cout<<"thursday";}   
       else if(l==4){
    	cout<<"friday";}
       else if(l==5){
    	cout<<"saterday";}
       else if(l==6){
    	cout<<"sunday";}	
    exit(0);

        }

        cout<<"Please try again";

        cout<<endl;

        j=j+1;    

    }

    }


    return 0;

}
