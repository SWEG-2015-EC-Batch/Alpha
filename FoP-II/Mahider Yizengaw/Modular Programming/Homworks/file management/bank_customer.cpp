#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

struct customerdata{
    int ac_num;
    string first_name;
    string last_name;
    double balance;
};

int main(){
    const int num = 5;
   customerdata p[num] = {{1003,"maru","shegaw",2000000},{1006,"luh","abe",30000},{1007,"kume","beke",200023},{1005,"mahi","jeme",600009},{1002,"lule","tsege",9807763}};
   
   ofstream fout("customer_date.txt");
   if(!fout){
    cout << "error to open file";
    exit(1);
   }
   for(int i = 0; i < num;i++){
    fout << p[i].ac_num << ' ' << p[i].first_name << ' ' << p[i].last_name << ' ' << p[i].balance << endl;
   }
    fout.close();

    ifstream fin("customer_data.txt");
    if(!fin){
        cout << "unable to open file";
        exit(1);
    }
    int ac_num;
    cout << "Enter accoun number: ";
    cin >> ac_num;
    fin.seekg((ac_num - 1000)*sizeof(customerdata));

    customerdata customerdata ;
    fin >> customerdata.ac_num >> customerdata.first_name >> customerdata.last_name >> customerdata.balance;

    cout << customerdata.first_name << " " <<  customerdata.last_name << " " << customerdata.balance << endl;

    fin.close();

    return 0;

}