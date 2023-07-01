#include<iostream>
using namespace std;
// A function definition to know the length, number of vowle and consonant in a string
void strlvc(char *str,int& len,int &vowl,int &cons){
     vowl = 0,cons =0,len = 0;
    for(int i = 0;str[i] != '\0';i++){
        if(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z'){
        
        switch(str[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            vowl++;
            break;
            default:
            cons++;
        }  
        }
       len++;
        }
}
// A function definition for reversing a string
void reverse(char *str){
    int leng = 0;
    //Loop until until the end of the string
  while(str[leng] != '\0') {
    leng++;
  }

  int i = 0,j = leng -1 ;
  char var;
  //Loop until i and j become equal
  while(i <  j){
    var = str[i];
    str[i] = str[j];
    str[j] = var;
    i++;
    j--;
  }
}
// A function definition for comparing two strings
int strcmr(char *str1,char *str2){
  int i = 0;
  //Loop until until an unmatched character is found
    while(str1[i] == str2[i]){
        if(str1[i] == str2[i]){
            return 0;
        }
        i++;
    }

    int result = str1[i] - str2[i];

    if(result < 0){
      return -1;
    }
    else
    return 1;
}
// A function definition for converting a string to lowercase
void lowercase(char *str){
  int i = 0;
  //Loop until until the end of the string
  while(str[i] != '\0'){
    if(str[i] > 'A' && str[i] < 'Z'){
      str[i] = str[i] + 32;
    }
    i++;
  }
}
// A function definition for converting a string to Uppercase
void uppercase(char *str){
  int i = 0;
  while(str[i] != '\0'){
    if(str[i] > 'a' && str[i] < 'z'){
      str[i] = str[i] - 32;
    }
    i++;
  }
}
