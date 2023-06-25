//this program is designed to check the "stringman" header file
#include<iostream>
#include"stringman.h"

using namespace std;

int main(){
    char str[] ={"Abebe Beso Bela"},str1[] = {"Sykephant"};
    int vowl;
    int cons,len;
strlvc(str,len,vowl,cons);// Call the function which find the length,number of vowle and consonant in the string

cout<<"length: " << len << endl;
cout << "vowle: " <<  vowl << endl;
cout << "consonant: " <<cons << endl;
cout << strcmr(str,str1) <<endl;// Call the compare function and compare the two strings

lowercase(str);
// Print the converted lowercase string
for(int i = 0 ;i<len ;i++){
cout << str[i];
}
cout << endl;

uppercase(str);
// Print the converted uppercase string
for(int i = 0 ;i<len ;i++){
cout << str[i];
}
cout << endl;

reverse(str);
// Print the reversed string
for(int i = 0 ;i<len ;i++){
cout << str[i];
}

return 0;
}