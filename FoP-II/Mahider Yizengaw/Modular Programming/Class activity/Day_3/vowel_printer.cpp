//this program reads a string in main block prints vowel letter of the string only using function
#include<iostream>

using namespace std;

void vowle(string,int);//declaring function

int main(){
   string name;

   cout << "Enter the string: ";
   cin >> name;

   for(int i = 0;i < name.length();i++){
    if(name[i] == 'a' || name[i] == 'e' || name[i]== 'i' || name[i] == 'o' || name[i] == 'u'){
        vowle(name,i);
    }
   }
}
//definiting function
void vowle(string str,int i){
    cout << "vowle is:" << str[i] << endl;
}