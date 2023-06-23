//This code is written for the purpose of understanding how header files work or creating by our own library.

#include <iostream>
using namespace std;
#include "length.h"

int main()
{
    string word;
    int choice;
    cout<<"This code provides you the length of the string,it's lower or upper case, the number of vowel and consonant"
    "in a string,it's reverse and also you can compare it to other string"<<endl;
    cout<<"please enter the string "<<endl;
    getline(cin,word);
    cout<<"the length of string is : "<<string_length(word)<<endl;
    cout<<"please enter the choice '1' for conversion of lower to upper case and '2' for vice versa "<<endl;
    cin>>choice;
    cout<<"the changed case : ";
    if(choice==1){
        case_changer(word);
    }
    else
        case_changer2(word);
    //for the counting of number of vowel and consonant.
        counter(word);
//for the string reverse.
reve(word);
cout<<endl;
cout<<"do you want to compare the previous string if your answer is yes press 'y',if not press any key "<<endl;
char input;
cin>>input;
if(input=='y'){
string str2;
cin.ignore();
cout<<"please enter the other string that you want to compare "<<endl;
getline(cin,str2);
    if(compare(word,str2)==1){
        cout<<"1 //means the first string is greater than the other";
    }
    else if(compare(word,str2)==-1){
      cout<<"-1 //means the first string is less than the other";
    }
    else if(compare(word,str2)==0){
      cout<<"0 //means both strings are equal";
    }
    }

}
