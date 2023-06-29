#include <iostream>
#include<cmath>
using namespace std;

//This program calculates and prints out the BMI of a person/persons using structure concept
struct BMI{
    string name;
    float weight,height,bdy_MI;
    char gender;
    int age;

};

int main()
{
    int num;
    cout<<"Please enter  for how many people you want to calculate BMI ";
    cin>>num;
    cin.ignore();

    BMI person1[num];
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
    return 0;
}

