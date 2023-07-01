//this program has two functions,one accepts the input  and computes the sum of the input marks and the other displays the input student's attributes and the sum of marks
#include<iostream>

using namespace std;

struct student{
    char name[20],id[20];
    float testmark[2],finalmark;
};//declaring the sturucture with student attribute
//declaring functions which accept and print the the structure information 
student read (student);
void print(student);

int main(){
    student s1 =  read(s1);//defining sturucture with structure variable s1
    print(s1);

    return 0;
}

student read (student s1){
  cout << "Enter name of the student:";
  cin.get(s1.name,20);

  cin.ignore();
  cout << "Enter stuent's Id:";
  cin.get(s1.id,20);

  for(int i = 0;i < 2;i++){
    cout << "Enter the test mark " << i + 1 << ": ";
    cin >> s1.testmark[i];
    }
    s1.finalmark = s1.testmark[0] + s1.testmark[1];//computing the sum of the mark 

    return s1;   
}

void print(student s1){
    //displaying the student's information
    cout << "displaying the information:" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "ID: " << s1.id << endl;
    //loop until the number of tests
    for(int i = 0;i < 2;i++){
        cout <<"test " << i + 1 << ":" << s1.testmark[i] << endl;
    }
    cout << "final mark: " << s1.finalmark; 
}
