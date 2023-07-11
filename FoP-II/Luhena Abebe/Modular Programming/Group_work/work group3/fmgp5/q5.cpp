#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
    ifstream fin;
    float average_1=0;
    float average_2=0;
    float average_3=0;
    fin.open("my file.txt",ios::in);
    if(fin.is_open()){
        int arr[18];
        for(int i=0;i<18;i++){
            fin>>arr[i];
            cout<<arr[i]<<" ";
        }cout<<endl;
        if(arr[0]==5){
            for(int i=1;i<6;i++){
                average_1+=arr[i];
            }cout<<"the average of the first group "<<average_1/5<<endl;
        }
        if(arr[6]==4){
            for(int i=7;i<11;i++){
                average_2+=arr[i];
            }cout<<"the average of the second group "<<average_2/4<<endl;
        }
        if(arr[11]==6){
            for(int i=12;i<=17;i++){
                average_3+=arr[i];
            }cout<<"the average of the third group "<<average_3/6;
        }
fin.close();
    }
    return 0;
}
