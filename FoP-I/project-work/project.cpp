#include<iostream>
#include<string.h>
#include<string>
#include<iomanip>
#include <sstream>
using namespace std;
int main(){
    cout<<"Note: Please enter a distinctive character or word if the names of any two or more runners is the same\n";
    int num,string_space;
    cout<<"Please enter the number of runners ";
    cin>>num;
 
    cin.ignore();
    double miles,total_miles,average_miles;
    string name;
    string names[num+10]={{"Runner's name"},{"Monday"},{"Tuesday"},{"Wednesday"},{"Thursday"},{"Friday"},{"Saturday"},{"Sunday"},{"Total miles"}};
    double run[num+1][8];
    string str_run[num+1][8];
 
    for(int i=0;i<num;i++){
        if(i!=0){
            cout<<"Please enter the name of the next runner ";
            cin.ignore();
            getline(cin,name);
   
            }
        else{
        cout<<"Please enter the name of the runner ";
       getline(cin,name);
        }
        names[i+9]=name;
 
        for(int j=0;j<7;j++){
            cout<<"Please enter the number of miles run by "<<name<<" on "<<names[j+1]<<" ";
            cin>>miles;
            run[i][j]= miles;
            ostringstream ss;
            ss <<fixed <<setprecision(2) << miles;
             str_run [i][j]= ss.str();
        }
    }
   
     
    //to store the string "average"
    names[num+9]="Average";
   
    //to calculate and store the total miles
   for(int i=0;i<num;i++){
    total_miles=0;
    for(int j=0;j<7;j++){
        total_miles=total_miles+run[i][j];
       
    }
    run[i][7]=total_miles;
    ostringstream ss;
    ss <<fixed <<setprecision(2) <<total_miles;
    str_run [i][7]= ss.str();
   
   }
 
   //to calculate and store the average value
 for(int i=0;i<8;i++){
    average_miles=0;
    for(int j=0;j<num;j++){
      average_miles=average_miles+run[j][i];
    }
    average_miles=average_miles/num;
    run[num][i]=average_miles;
    ostringstream ss;
    ss <<fixed <<setprecision(2) <<average_miles;
    str_run [num][i]= ss.str();
 }
 
 //to print the tabular format properly
 int string_max_size=names[0].length();//stores the longest name given by the user
 for(int i=1;i<num+10;i++){
    if(string_max_size<=names[i].length()){
        string_max_size=names[i].length();
    }
   
 }
 string max_value;
 int string_max_size_2=str_run[0][0].length();//stores the longest value in a str_run
 for(int i=0;i<num+1;i++){
    for(int j=0;j<8;j++){
    if(string_max_size_2<=str_run[i][j].length()){
        string_max_size_2=str_run[i][j].length();
        max_value=str_run[i][j];
    }}
   
 }
 
 //checks the number of digits that represented the miles
 if(string_max_size_2<=6){
 cout<<"\nThe tabular format below shows the overview of the miles run by "<<num<<" runners"<<endl;
 
int space=0;
 
for(int i=0;i<num+10;i++){
    if(i<=8){
        if(i==0){
        cout<<names[i];
        if(names[i].length()<string_max_size){
            space=(string_max_size-names[i].length());
            for(int k=0;k<space;k++){
                cout<<" ";
            }
            for(int k=0;k<4;k++){
                cout<<"  ";
            }
        }//end for if(1)
        else{
            for(int k=0;k<4;k++){
                cout<<"  ";
            }
        }
        }
    else{
        cout<<names[i];
        for(int k=0;k<4;k++){
            cout<<"  ";
        }
   
    }
    }//end for the "i<=8"
    //for i>8
    else {
        cout<<endl;
        cout<<names[i];
        //for printing the numerical values
        for(int j=0;j<8;j++){
            if(j==0){
                if(names[0].length()==string_max_size){
                    space=((names[0].length()-names[i].length()));
                    for(int k=0;k<space;k++){
                        cout<<" ";
                    }
                    for(int k=0;k<4;k++){
                    cout<<"  ";
                }
                }
                else if(names[0].length()<names[i].length() && names[i].length()==string_max_size){
                    for(int s=0;s<4;s++){
                        cout<<"  ";
                    }
                }
                else if(names[0].length()<names[i].length()&&names[i].length()<string_max_size){
                    space=(string_max_size-names[i].length());
                    for(int k=0;k<space;k++){
                        cout<<" ";
                    }
                    for(int k=0;k<4;k++){
                        cout<<"  ";
                    }
 
                }
                else if(string_max_size>names[i].length()){
                    space=string_max_size-names[i].length();
                    for(int k=0;k<space;k++){
                        cout<<" ";
                    }
                    for(int k=0;k<4;k++){
                        cout<<"  ";
                    }
                }
            }
            else{
                //since j is 1
                space=(names[j].length()-str_run[i-9][j-1].length());
                for(int k=0;k<space;k++){
                    cout<<" ";
                }  
                for(int k=0;k<4;k++){
                    cout<<"  ";
                }
               
               
            }
            cout<<str_run[i-9][j];
        }
       
    }//end for i>8
}//end for line 97 loop
 }//end for the condition "string_max_size_2<=6" on line 92
 else{
   
    cout<<"Even Though it is impossible to run such miles(i.e. "<<max_value <<") by a human being practically, the tabular format below \nshows the overview of the miles run by the runner/runners for seven days"<<endl;
    cout<<"Note: total miles run by runner/runners is given at the end of each row.\n"<<endl;
    for(int i=0;i<num+1;i++){
        cout<<names[9+i]<<"  ";
        for(int j=0;j<8;j++){
            cout<<str_run[i][j]<<"  ";
        }
        cout<<endl;
   
 
 }
 }
 //searching for specific runner/runners
 char choice;
 int num_know;
 cout<<"\nDo you want to search for a specific runner?(enter only small letter 'y' if you want to search) ";
 cin>>choice;
 
 if(choice=='y'){
    int trial_count=0;
    cout<<"For how many runners do you want to search for? ";
    cin>>num_know;
    if(num_know>num){
        cout<<"The number entered is greater than the number of runners";
        exit(0);
    }
    cin.ignore();
    string name_2;
    int l;
    int row_con;//to know the value of k
    for (int i=0;i<num_know;i++){
        cout<<"Please enter the name of the runner ";
         getline(cin,name_2);
         for(int k=0;k<num;k++){
        if(name_2==names[9+k]){
            l=1;
            row_con=k;
        }}
        if(l==1){
            cout<<names[9+row_con]<<"  ";
            for(int j=0;j<8;j++){
                cout<<str_run[row_con][j]<<"  ";
           
            }
        cout<<endl;
        }
        else{
            trial_count=trial_count+1;
            if(trial_count>2){
                cout<<"You attempted greater than the limit of trial. Please try again later";
                exit(0);}
            cout<<"Sorry the program couldn't find a name called by "<<name_2<<" in the table. Please try again from the beginning."<<endl;
            num_know=num_know+1;
        }
    }//end for line 214 loop
 }
 
    cout<<"\nThank you for using this program!";
 
    return 0;
}
 
