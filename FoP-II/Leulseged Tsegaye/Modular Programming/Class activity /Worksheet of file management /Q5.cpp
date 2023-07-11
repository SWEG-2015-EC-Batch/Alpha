#include<iostream>
#include<fstream>
using namespace std;
int main(){
int first;
fstream leulseged;
izzat.open("test.txt");
if(leulseged.is_open()){
    int size;
while(leulseged>>size){
    int sum=0;
    int value;
    for(int i=0;i<size;i++){
        leulseged>>value;
        sum+=value;
    }
        double average = double(sum) / size;
        cout << "Average of group: " << average << endl;
}
leulseged.close();
}
else{
    cout<<"the program did not open"<<endl;
}

}
