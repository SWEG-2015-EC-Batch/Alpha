#include<iostream>
#include<cmath>
using namespace std;


}
int main(){
    float weight,height,BMI;
    char m;
    int i,no_of_persons,choice_no;
    cout<<"This program calculates the Body Mass Index of single or multiple persons based on your choice"<<endl;
    cout<<endl;
    cout<<"Please choose the number of persons you want to calculate their Body Mass Index "<<endl;
    cout<<" 1.For single person"<<endl;
    cout<<" 2.For two or more persons(if the number of persons is known)\n";
    cout<<" 3.For unknown number of persons"<<endl;
    cin>>choice_no;
    if (choice_no==1){
        cout<<"Please enter the weight of the person ";
        cin>>weight;
        cout<<"Please enter the height of the person ";
        cin>>height;
        BMI= weight/pow(height,2);
        cout<<"The Body Mass Index of the person is "<<BMI;
    }
    else if(choice_no==3){
        
        m='y';
        while(m=='y'){
        cout<<"Please enter the weight of the person ";
        cin>>weight;
        cout<<"Please enter the height of the person ";
        cin>>height;
        BMI= weight/pow(height,2);
        cout<<"The Body Mass Index of the person is "<<BMI<<endl;
        cout<<"Please enter 'y' if you want to continue or press any key to quit ";
        cin>>m;
        cout<<endl;
        


        }
    }
    else{
        cout<<"Please enter the number of persons ";
        cin>>no_of_persons;
        i=0;
        while(i<no_of_persons){
             if(i==0){
            cout<<"Please enter the weight of the "<<++i<<"st person ";
            cin>>weight;
            cout<<"Please enter the height of the "<<i<<"st person ";
            cin>>height;
            BMI= weight/pow(height,2);
            cout<<"The Body Mass Index of the "<<i<<"st person is "<<BMI<<endl;
        }
        else if(i==1){
            cout<<endl;
            cout<<"Please enter the weight of the "<<++i<<"nd person ";
            cin>>weight;
            cout<<"Please enter the height of the "<<i<<"nd person ";
            cin>>height;
            BMI= weight/pow(height,2);
            cout<<"The Body Mass Index of the "<<i<<"nd person is "<<BMI<<endl;
        }
         else if(i==2){
            cout<<endl;
            cout<<"Please enter the weight of the "<<++i<<"rd person ";
            cin>>weight;
            cout<<"Please enter the height of the "<<i<<"rd person ";
            cin>>height;
            BMI= weight/pow(height,2);
            cout<<"The Body Mass Index of the "<<i<<"rd person is "<<BMI<<endl;
        }
        else{
            cout<<endl;
            cout<<"Please enter the weight of the "<<++i<<"th person ";
            cin>>weight;
            cout<<"Please enter the height of the "<<i<<"th person ";
            cin>>height;
            BMI= weight/pow(height,2);
            cout<<"The Body Mass Index of the "<<i<<"th person is "<<BMI<<endl;
        }

    }
    }
    return 0;
}
