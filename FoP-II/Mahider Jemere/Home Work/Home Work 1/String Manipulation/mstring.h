#include <iostream>
using namespace std;

int length(char my_char[]){

    int counter =0;
    int i=0;
    while (my_char[i]!='\0'){
        counter =counter+1;
        i=i+1;
    }

    return counter;
}


//Number of consonant and vowel counter function
void cons_vowel(char char_arr[]){
      int vow=0,cons=0;

      for(int i=0;i<length(char_arr);i++){
            if((int)char_arr[i]==65 || (int)char_arr[i]==69 || (int)char_arr[i]==73 || (int)char_arr[i]==79 || (int)char_arr[i]==85){
            vow=vow+1;
        }
        else if((int)char_arr[i]==97 || (int)char_arr[i]==101 || (int)char_arr[i]==105 || (int)char_arr[i]==111 || (int)char_arr[i]==117){
            vow=vow+1;
        }
        else if((int)char_arr[i]>65 && (int)char_arr[i]<=122){
            cons+=1;
        }
      }
      cout<<"There is/are "<<vow<<" vowels and "<< cons<<" consonants"<<endl;
}


//Reverse function

void rever_se(char rever_se[]){
    int length_of_char=length(rever_se)-1;
    char backUp[length(rever_se)];
    for(int i=0; i<length(rever_se);i++){
        backUp[i]=rever_se[i];
    }

    for (int i=0;i<length(rever_se);i++){
        rever_se[i]=backUp[length_of_char];
        length_of_char=length_of_char-1;
    }



}

//Compare function

int compare_s(char first_char[],char second_char[]){
    for(int i=0;i<length(first_char);i++){
        if(first_char[i]>second_char[i]){
            return 1;
        }
        else if(first_char[i]<second_char[i]) {
            return -1;
        }

    }

    //If their difference is in length
    if(length(first_char)>length(second_char)){
        return 1;
    }
    else if(length(first_char)<length(second_char)){
        return -1;
    }
    else{
        return 0;
    }
}


//Case converter functions
void lowercase(char the_char[]){
        for(int i=0;i<length(the_char);i++){
            if((int)the_char[i]>=65 && (int)the_char[i]<=90){
                    the_char[i]=(char)(the_char[i] +32);

            }
        }
}

void uppercase(char the_char[]){
        for(int i=0;i<length(the_char);i++){
            if((int)the_char[i]>=97 && (int)the_char[i]<=122){
                    the_char[i]=(char)(the_char[i]-32);

            }
        }
}
