#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float mark,test,quiz,project,assignment,final_exam, no_of_stud;
    int i=0;
    cout<<"Please enter the test score from 15% ";
    cin>>test;
    //The while loop below checks if the vlue entered is valid
    while(test>15 || test<0){
        while(i<3 && test>15 || test<0 ){
        cout<<"Please enter a valid test score ";
        cin>>test;
        i=i+1;
        }
        if(i>=3 && test>15 || test<0){
            cout<<"Too much attempt. Please try again later ";
            exit(0);
        }
    }
    cout<<"Please enter the quiz score from 5% ";
    cin>>quiz;
    while(quiz>5 || quiz<0){
        i=0;
        while(i<3 && quiz>5 || quiz<0){
        cout<<"Please enter a valid quiz score ";
        cin>>quiz;
        i=i+1;
        }
        if(i>=3 && quiz>5 || quiz<0){
            cout<<"Too much attempt. Please try again later ";
            exit(0);
        }
    }
    cout<<"Please enter the project score from 20% ";
    cin>>project;
    while(project>20 || project<0){
        i=0;
        while(i<3 && project>20 || project<0){
        cout<<"Please enter a valid project score ";
        cin>>project;
        i=i+1;
        }
        if(i>=3 && project>20 || project<0){
            cout<<"Too much attempt. Please try again later ";
            exit(0);
        }
        
    }
    cout<<"Please enter the assingment score from 10% ";
    cin>>assignment;
    while(assignment>10 || assignment<0){
        i=0;
        while(i<3 && assignment>10 || assignment<0){
        cout<<"Please enter a valid assignment score ";
        cin>>assignment;
        i=i+1;
        }
        if(i>=3 && assignment>5 || assignment<0){
            cout<<"Too much attempt. Please try again later ";
            exit(0);
        }
    }
    cout<<"Please enter the final score from 50% ";
    cin>>final_exam;
    while(final_exam>50 || final_exam<0){
        i=0;
        while(i<3 && final_exam>50 || final_exam<0){
        cout<<"Please enter a valid final exam score ";
        cin>>final_exam;
        i=i+1;
        }
        if(i>=3 && final_exam>5 || final_exam<0){
            cout<<"Too much attempt. Please try again later ";
            exit(0);
        }
    }
    mark= test + quiz + project + assignment + final_exam;
    if(mark >=90 && mark<=100){
        cout<<"Your grade is A+";
    }
    else if(mark >=80 && mark<90 ){
        cout<<"Your grade is A";
    }
    else if(mark >=75 && mark<80){
        cout<<"Your grade is B+";
    }
    else if(mark >=60 && mark<75){
        cout<<"Your grade is B";
    }
    else if(mark >=55 && mark<60){
        cout<<"Your grade is C+";
    }
    else if(mark>=45 && mark<55){
        cout<<"Your grade is C";
    }
    else if(mark>=30 && mark<45){
        cout<<"Your grade is D";
    }
    else {
        cout<<"Your grade is F";
    }
    return 0;
}
