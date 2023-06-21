#include <iostream>

using namespace std;
/*This program uses a functions which accept string elements as a parameter and checks
whether they are vowel or consonant*/

void vowel(char);
void consonant(char);
int main()
{
    char letter[7]={'a','b','c','d','e','f','\0'};
    for (int i=0;i<6;i++){
        if((int)letter[i]==97 || (int)letter[i]==101){
            vowel(letter[i]);
        }
        else{
            consonant(letter[i]);
        }
    }
    return 0;
}

void vowel(char vowel_let){
    cout<<vowel_let<<" is vowel"<<endl;
}

void consonant(char consonant_let){
    cout<<consonant_let<<" is consonant"<<endl;
}
