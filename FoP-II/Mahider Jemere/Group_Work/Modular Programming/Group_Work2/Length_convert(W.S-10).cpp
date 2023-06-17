#include <iostream>
#include<cstdlib>
using namespace std;
// This program converts the unit of length from inches and feet to meters and centimeteres vice versa

void inputval();
void calcLength(double,int,int);
void outputval(double,double,int);

int main()
{
    char another;//to store the decision of the user whether to continue or not
    do{
    inputval();
    cout<<"Do you want to continue?(enter 'y' for yes and any other key to exit) ";
    cin>>another;
    }while(another=='y');
    cout<<"Thank you for using this program!";
    return 0;
}

void inputval(){
    int choice_num,check_unit;
    double length1, length2;
    cout<<"Please choose from the following: "<<endl;
    cout<<"1. Convert from feet and inches to meters and centimeters"<<endl;
    cout<<"2. Convert from meters an centimeters to feet and inches"<<endl;
    cin>>choice_num;

    if(choice_num==1){
        cout<<"Do you want to enter the length in "<<endl;
        cout<<"1. In feet or\n2. in inches"<<endl;
        cin>>check_unit;

        cout<<"Please enter the length: ";
        cin>>length1;
            }
    else if(choice_num==2){
        cout<<"Do you want to enter the length in "<<endl;
        cout<<"1. In meters or\n2. in centimeters "<<endl;
        cin>>check_unit;

        cout<<"Please enter the length: ";
        cin>>length1;
    }
    else{
        cout<<"Please enter a valid number of choice";
        EXIT_FAILURE;
    }
    calcLength(length1,choice_num,check_unit);
}


void calcLength(double len1,int choice,int check){
    double length1,length2;
    if (choice==1){
            if(check==1){
                length1=len1*0.3048;
                length2=len1*30.48;
            }
            else{
                length1= len1*0.0254;
                length2=len1*2.54;
            }

    }
    else{
              if(check==1){
                length1=len1/0.3048;
                length2=len1/0.0254;
            }
            else{
                length1= len1/30.48;
                length2=len1/2.54;
            }

    }
    outputval(length1,length2,choice);
}


void outputval(double len1,double len2, int choice){
    if(choice==1){
        cout<<"The length is "<<len1<<" in meters and "<<len2<<" in centimeters"<<endl;
    }
    else{
        cout<<"The length is "<<len1<<" in feet and "<<len2<<" in inches"<<endl;
    }
}
