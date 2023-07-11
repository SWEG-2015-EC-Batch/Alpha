#include <iostream>
#include <fstream>
using namespace std;

struct work_info{
        string name;
        int hours;
        double pay_rate,regular_pay,overtime, gross_pay;
};
int main()
{
    double col_reg,col_ot,col_gr;
    work_info employee[4];
    fstream produce;
    produce.open("Work_info.txt",ios::in);
    if(!produce.is_open()){
        cout<<"Couldn't open the file";
        return 0;
    }
    /*string m;
    float j;
    int d;
    produce>>m;
    produce>>j;
    produce>>d;
    cout<<m<<" "<<j<<" "<<d;*/
    while(!produce.eof()){
        for(int i=0;i<4;i++){
            employee[i].overtime=0;
            produce>>employee[i].name;
            produce>>employee[i].pay_rate;
            produce>>employee[i].hours;
            employee[i].regular_pay=employee[i].pay_rate*employee[i].hours;
            if(employee[i].hours>40){
                employee[i].overtime=1.5*employee[i].pay_rate*(employee[i].hours-40);
            }
            employee[i].gross_pay=employee[i].regular_pay+employee[i].overtime;
        }
        col_reg=employee[0].regular_pay+employee[1].regular_pay+employee[2].regular_pay+employee[3].regular_pay;
        col_gr=employee[0].gross_pay+employee[1].gross_pay+employee[2].gross_pay+employee[3].gross_pay;
        col_ot=employee[0].overtime+employee[1].overtime+employee[2].overtime+employee[3].overtime;
         cout<<"Name         Pay Rate    Hours    Regular Pay    Overtime Pay    Gross Pay"<<endl;
         for(int i=0;i<4;i++){
            cout<<employee[i].name<<"     "<<employee[i].pay_rate<<"          "<<employee[i].hours<<"       "<<employee[i].regular_pay<<"            "<<employee[i].overtime<<"               "<<employee[i].gross_pay<<endl;
            cout<<endl;
         }
         cout<<endl;
        cout<<"Total Regular Payment: "<<col_reg<<endl;
        cout<<"Total Gross Payment: "<<col_gr<<endl;
        cout<<"Total Overtime: "<<col_ot<<endl;
    }
    return 0;
}
