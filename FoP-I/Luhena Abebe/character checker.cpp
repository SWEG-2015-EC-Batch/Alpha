#include <iostream>
using namespace std;
int main ()
{
char x;
cout<<"please enter a character "<<endl;
cin>>x;
if (x>='a' && x<='z'){
    cout<<"The charater you entered is small letter"<<endl;
} 
else if (x>='A' && x<='Z'){
    cout<<"The charater you entered is Capital letter"<<endl;
}
else if (x>='0' && x<='9'){
    if (x%2==0) {
        cout<<"The character you entered is an even digit"<<endl;
    }
    else{
        cout<<"The charcter you entered is an odd digit"<<endl;
    }
}
else {
    cout<<"The charater you entered is a special character"<<endl;
}
    return 0;
}
