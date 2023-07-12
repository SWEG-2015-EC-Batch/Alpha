#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream fin;
    fin.open("employeefile.txt");
    if(!fin){
        cout << "error in opening the file";
        exit(1);
    }
    string name,arr[] = {"name","payrate","hours","regularpay","overtimepay","grosspay"};
    double grosspay,regularpay,hour,overt_pay;
    double pay_rate,total_r_pay = 0 ,total_ovt_pay = 0,t_grosspay = 0;
     cout << arr[0] << "\t\t";
        for(int i = 1;i <= 6 ;i++){
            cout << arr[i] << "\t\t";
        }
    while(fin >> name >> pay_rate >> hour){
        if(hour <= 40){
            regularpay = hour * pay_rate;
            overt_pay = 0;
        }
        else{
            regularpay = 40 * pay_rate;
            overt_pay = (hour - 40) * (pay_rate * 1.5);
        }
        grosspay = regularpay + overt_pay;
       
        cout << endl;
        cout << name << "\t\t" << pay_rate << "\t\t" << hour << "\t\t" << regularpay << "\t\t" << overt_pay << "\t\t" << grosspay << endl;
        total_r_pay += regularpay;
        total_ovt_pay += overt_pay;
        t_grosspay += grosspay;
    }
    cout << endl;

    cout << "total regular pay: " << total_r_pay << endl;
    cout << "total over time pay: " << total_ovt_pay << endl;
    cout << "total gross pay: " << t_grosspay << endl;
    fin.close();

    return 0;

}