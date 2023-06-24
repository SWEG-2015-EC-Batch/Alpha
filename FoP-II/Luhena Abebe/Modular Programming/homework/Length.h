#ifndef LENGTH_H
#define LENGTH_H
//function for string length.
int string_length(string play)
{
int length_of_string=0;
int j=0;
while(play[j]!='\0'){
int i=play[j]/play[j];
     length_of_string=length_of_string+i;
     j+=1;
    }
return length_of_string;
}
//string reveres.
void reve(string play)
{
int a=string_length(play);
cout<<"the reverse of the string is : ";
for(int i=0;i<a;i++){
cout<<play[(a-1)-i];
}
}
//function for string comparison.
int compare(string str1,string str2){
    int a=string_length(str1);
    int b=string_length(str2);
if(a>b){
    return 1;
}
 if(a<b){
    return -1;
}
else if(a==b){
for(int l=0;l<a;l++){
    if(str1[l]>str2[l]){
        return 1;
    }
    else if(str1[l]<str2[l]){
        return -1;
    }
}return 0;
}
}
//function for uppercase
void case_changer(string word){
int a=string_length(word);
for(int i=0;i<a;i++){
            if (word[i]==' '){
                cout<<" ";
            }
        else if(word[i]>=65&&word[i]<97){
            cout<<word[i];
        }
        else if(word[i]>=97&&word[i]<=122){
               cout<<static_cast<char>(word[i]-32);
        }
    }
}
//function for lower case
void case_changer2(string word){
int a=string_length(word);
for(int i=0;i<a;i++){
        if(word[i]>=97&&word[i]<=122){
            cout<<word[i];
        }
      else if (word[i]==' '){
                cout<<" ";
            }
        else if(word[i]>=65&&word[i]<97){
            cout<<static_cast<char>(word[i]+32);
        }
    }
}
//function for vowel and consonant counter.
void counter(string word){
 int l=string_length(word);
    int vowel=0;
    int consonant=0;
    int space=0;
for(int i=0;i<l;i++){
if(word[i]==65||word[i]==69||word[i]==73||word[i]==79||word[i]==85||word[i]==97
   ||word[i]==101||word[i]==105||word[i]==111||word[i]==117){
    vowel=vowel+i/i;
    }
    else if(word[i]==32){
        space=space+i/i;
       }
        consonant=(l-vowel)-space;
    }cout<<" and it has "<<vowel<<" vowel"<<" and "<<consonant<<" consonants"<<endl;
}
#endif // LENGTH_H
