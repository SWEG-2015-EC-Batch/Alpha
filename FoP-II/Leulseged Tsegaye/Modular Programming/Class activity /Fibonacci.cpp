//this program is designed to show default argument using fibbonic sequence
#include<iostream>

using namespace std;

int fibbonic(int num = 7){
    int a = 1, b = 0, c = 0;

        for (int i = 0 ; i < num ; i++){
            c = a + b;
            a = b;
            b = c;
            cout << c << " ";
        }
            return 0;
}

int main(){

    fibbonic();// print using default value i.e 1 1 2 3 5 8 13
    cout << endl;
    fibbonic(4);//print using given argument rather than default arg. the output is 1 1 2 3

    return 0;
}
