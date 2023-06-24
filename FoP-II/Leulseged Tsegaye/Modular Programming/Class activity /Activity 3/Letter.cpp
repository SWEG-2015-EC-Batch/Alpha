#include <iostream>
using namespace std;
void vowel(char );
void consonant(char);
int main()
{
   char letter[6]={'a','b','c','d','e','\0'};
   for(int i=0;i<5;i++){
    if(letter[i]==97|| letter[i]==101){
        vowel(letter[i]);
    }
    else
        consonant(letter[i]);
   }
    return 0;
}
void vowel(char a){
cout<<a<<" "<<"vowel"<<endl;
}
void consonant(char b){
cout<<b<<" "<<"consonant"<<endl;
}
