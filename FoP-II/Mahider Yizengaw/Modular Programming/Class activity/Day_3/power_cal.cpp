//this program reads resistance array in main block and is designed to calculate power by creating three functions;the first one accepts 
//array of currents,the second function calculates powers and the third one prints the result with each of currents and resistances in table form using array.
#include<iostream>

using namespace std;

void c_input(double cur[],int);
void pow_cl(double res[],double cur[],double pow[],int);
void p_pow(double res[],double current[],double pow[],int);

int main(){
    double res[5] = {12,32,45,53,54};
    double curr[5];
    double pow[5];

    c_input(curr,5);
     pow_cl(res,curr,pow,5);
     p_pow(res,curr,pow,5);

  return 0;   
}
//definiton of functions
void c_input(double cur[],int a){
    for(int i = 0;i<a ;i++){
        cout << "enter the current for element " << i + 1 << ": ";;
        cin >> cur[i];
    } 
}

void pow_cl(double res[],double cur[],double pow[],int a){

for(int i=0;i < a;i++){
    pow[i] = cur[i]*cur[i]*res[i];
}

}

void p_pow(double res[],double current[],double pow[],int a){
    cout << "resistance\tcurrent\tpower" << endl;
    for(int i =0; i < a ; i++){
        cout << res[i] <<"\t\t"<< current[i] <<"\t"<< pow[i] << endl;
    }
}
