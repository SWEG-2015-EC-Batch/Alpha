#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct info{
string name;
float rate,hours,ot,ot_pay,net,net_sal;
};

int main()
{   info x[4];
    ofstream fout;
    fout.open("my file.txt",ios::out);
    for(int i=0;i<5;i++){
             cout<<"enter name,rate,hour for the "<<i<<endl;
             getline(cin,x[i].name);
             cin>>x[i].rate>>x[i].hours;
             cin.ignore();
            }
            double total_ot_pay=0;
    double total_regular_sal=0;
    double total_net_sal=0;
    if(fout.is_open()){

        for(int i=0;i<5;i++){
            fout<<x[i].name<<"\t"<<x[i].rate<<"\t"<<x[i].hours<<"\t";
            if(x[i].hours<=40){
          x[i].ot=0;
           fout<<x[i].ot<<"\t";
           x[i].ot_pay=0;
           fout<<x[i].ot_pay<<"\t";
           total_ot_pay+=x[i].ot_pay;
          x[i].net=x[i].hours*x[i].rate;
          fout<<x[i].net<<"\t";
          total_regular_sal+=x[i].net;
          x[i].net_sal=x[i].net;
          fout<<x[i].net_sal;
          total_net_sal+=x[i].net_sal;

        }
        else{
            x[i].ot=x[i].hours-40;
            fout<<x[i].ot<<"\t";
            x[i].ot_pay=x[i].ot*1.5*x[i].rate;
            fout<<x[i].ot_pay<<"\t";
            total_ot_pay+=x[i].ot_pay;
            x[i].net=x[i].rate*40;
            fout<<x[i].net<<"\t";
            total_regular_sal+=x[i].net;
            x[i].net_sal=x[i].net+x[i].ot_pay;
            fout<<x[i].net_sal;
            total_net_sal+=x[i].net_sal;
        } fout<<endl;
        }
        fout.close();
    }

    ifstream fin;
    fin.open("my file.txt",ios::in);
    if(fin.is_open()){
      string name;
      while (getline(fin,name)){
            cout<<name<<"\n";
      }cout<<total_ot_pay<<"   "<<total_regular_sal<<"  "<<total_net_sal;
      fin.close();
    }


    return 0;
}
