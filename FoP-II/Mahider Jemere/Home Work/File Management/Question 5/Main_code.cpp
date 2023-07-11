#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream average("group.txt",ios::in);
    if(!average.is_open()){
        cout<<"Couldn't open the file";
        return 0;
    }
    double sum,input_no,num;
    while(!average.eof()){
        sum=0;
        average>>input_no;
        num=input_no;
        for(int i=0;i<num;i++){
            average>>input_no;

            sum=sum+input_no;
        }
        cout<<"The average of the group of "<<num<<" numbers is "<<sum/num<<endl;
    }
    return 0;
}
