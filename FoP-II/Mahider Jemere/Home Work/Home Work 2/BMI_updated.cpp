#include <iostream>
#include<cmath>
using namespace std;

//This program adds function concept to update the BMI_struct.cpp of activity 4

struct BMI{
    string name;
    float weight,height,bdy_MI;
    char gender;
    int age;

};

void calculate(BMI[],int);
void print_bmi(BMI[],int);
int main()
{
    int num;
    cout<<"Please enter  for how many people you want to calculate BMI ";
    cin>>num;
    cin.ignore();

    BMI person1[num];

    calculate(person1,num);
    print_bmi(person1,num);
    return 0;
}

void calculate(BMI person1[],int num){

    for(int i=0;i<num;i++){

    cout<<"Please enter the name of the person: ";
    getline(cin,person1[i].name);
    cout<<"Please enter the weight of the person: ";
    cin>>person1[i].weight;
    cout<<"Please enter the height of the person: ";
    cin>>person1[i].height;
    cout<<"Please enter the gender of the person: ";
    cin>>person1[i].gender;
    cout<<"Please enter the age of the person: ";
    cin>>person1[i].age;
    person1[i].bdy_MI= (person1[i].weight)/pow(person1[i].height,2);
    cout<<endl;
    cin.ignore();
    }

}




void print_bmi(BMI person1[],int num){
     for(int i=0;i<num;i++){
    if(person1[i].bdy_MI>=18 &&  person1[i].bdy_MI<=25){
        cout<<"Name: "<<person1[i].name<<endl;
        cout<<"Weight: "<<person1[i].weight<<endl;
        cout<<"Height: "<<person1[i].height<<endl;
        cout<<"BMI: "<<person1[i].bdy_MI<<endl;
        cout<<"age: "<<person1[i].age<<endl;
        cout<<"Gender: "<<person1[i].gender<<endl;
        cout<<"BMI status: Normal"<<endl;
    }
    else if(person1[i].bdy_MI<18){
        cout<<"Name: "<<person1[i].name<<endl;
        cout<<"Weight: "<<person1[i].weight<<endl;
        cout<<"Height: "<<person1[i].height<<endl;
        cout<<"BMI: "<<person1[i].bdy_MI<<endl;
        cout<<"age: "<<person1[i].age<<endl;
        cout<<"Gender: "<<person1[i].gender<<endl;
        cout<<"BMI status: Underweight"<<endl;
    }
    else{
        cout<<"Name: "<<person1[i].name<<endl;
        cout<<"Weight: "<<person1[i].weight<<endl;
        cout<<"Height: "<<person1[i].height<<endl;
        cout<<"BMI: "<<person1[i].bdy_MI<<endl;
        cout<<"age: "<<person1[i].age<<endl;
        cout<<"Gender: "<<person1[i].gender<<endl;
        cout<<"BMI status: Overweight"<<endl;
    }
    cout<<endl;
    }
}
