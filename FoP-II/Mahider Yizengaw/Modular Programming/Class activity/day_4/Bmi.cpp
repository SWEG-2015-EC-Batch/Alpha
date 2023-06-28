//this program read the person details,compute their bmi and display it with proper message.
#include<iostream>

using namespace std;

struct person {
    string name;
    char gender;
    int age;
    float weight,height,bmi;
};

int main(){
    int j;
    cout << "Enter the number of person you want to calculate: ";
    cin >> j;

    cin.ignore();

    person p1[j];//defining array of structure named p1 with size of j
    for(int i = 0 ; i < j;i++){//loop unti the number of it reach number of person j
        cout << "enter the name for person " << i + 1 << ": ";
        getline(cin,p1[i].name);

        cout << "enter gender for person " << i + 1 << ": ";
        cin >> p1[i].gender;

        cout << "enter age for person " << i + 1 << ": ";
        cin >> p1[i].age;

        cout << "enter weight for person " << i + 1 << ": ";
        cin >> p1[i].weight;

        cout << "enter height for person " << i + 1 << ": ";
        cin >> p1[i].height;
    
        p1[i].bmi = p1[i].weight/(p1[i].height*p1[i].height);
        cout << endl;
        cin.ignore();
    }
        cout << "displaying the information" << endl;
        //display the information based on the the criteria.
    for(int i = 0;i < j;i++){
        if(p1[i].gender == 'f'){
            if(p1[i].bmi <= 18){
                cout << "for person: " << i + 1 << endl;
                cout << "Name: " << p1[i].name << endl;
                cout << "Gender: " << p1[i].gender << endl;
                cout << "Age: " << p1[i].age << endl;
                cout << "BMI: " << p1[i].bmi << " which is underweight" << endl;
            }

            else if(p1[i].bmi > 18 && p1[i].bmi <=25){
                cout << "for person: " << i + 1 << endl;
                cout << "Name: " << p1[i].name << endl;
                cout << "Gender: " << p1[i].gender << endl;
                cout << "Age: " << p1[i].age << endl;
                cout << "BMI: " << p1[i].bmi << " which is underweight" << endl;
            }

           else if(p1[i].bmi > 25){
                cout << "for person: " << i + 1 << endl;
                cout << "Name: " << p1[i].name << endl;
                cout << "Gender: " << p1[i].gender << endl;
                cout << "Age: " << p1[i].age << endl;
                cout << "BMI: " << p1[i].bmi << " which is underweight" << endl;
            }
        }

        else if(p1[i].gender == 'm'){
            if(p1[i].bmi <= 20){
                cout << "for person: " << i + 1 << endl;
                cout << "Name: " << p1[i].name << endl;
                cout << "Gender: " << p1[i].gender << endl;
                cout << "Age: " << p1[i].age << endl;
                cout << "BMI: " << p1[i].bmi << " which is underweight" << endl;    
            }

            else if(p1[i].bmi > 20 && p1[i].bmi <=25){
                cout << "for person: " << i + 1 << endl;
                cout << "Name: " << p1[i].name << endl;
                cout << "Gender: " << p1[i].gender << endl;
                cout << "Age: " << p1[i].age << endl;
                cout << "BMI: " << p1[i].bmi << " which is underweight" << endl;    
            }

             else if(p1[i].bmi > 25){
                cout << "for person: " << i + 1 << endl;
                cout << "Name: " << p1[i].name << endl;
                cout << "Gender: " << p1[i].gender << endl;
                cout << "Age: " << p1[i].age << endl;
                cout << "BMI: " << p1[i].bmi << " which is underweight" << endl;  
            }
        }
    }
    return 0;
}
