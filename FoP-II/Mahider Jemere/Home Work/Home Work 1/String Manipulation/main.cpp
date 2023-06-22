#include <iostream>
#include "mstring.h"

using namespace std;

int main()
{

    char m[]="MAHIDER JEMERE";
    char n[]="mahiderjemere";

    //finding length
    cout<<"The length of string m is "<<length(m)<<endl;


    //reverse
    rever_se(n);
    cout<<"The reverse of string n is "<<endl;
     for (int i=0;i<length(n);i++){
        cout<<"Index "<<i<<" is "<<n[i]<<endl;
    }

    //compare
    cout<<"\n"<<compare_s(m,n)<<endl;


    //case conversion
    lowercase(m);
    for (int i=0;i<length(m);i++){
        cout<<"Index "<<i<<" is "<<m[i]<<endl;
    }
    cout<<endl;

    uppercase(m);
    for (int i=0;i<length(m);i++){
        cout<<"Index "<<i<<" is "<<m[i]<<endl;
    }
    return 0;
}
