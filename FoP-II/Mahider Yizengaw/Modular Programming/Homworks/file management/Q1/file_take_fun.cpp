//this program illustrate an example of function
// that take a file into an array of intigers and their address 
#include <iostream>
#include <fstream>

using namespace std;

void take_file(char *filename,int arr[],int *count);

int main(){
    char *filename = "file.txt";
    
    int arr[50],count = 0;
    
    take_file(filename,arr,&count);
    cout << "take " << count << " index element of the file " << filename << endl;

    return 0;
}

void take_file(char *filename,int arr[],int *count){
    ifstream fin(filename);
    if(!fin){
        cout << "error in opening " << filename << endl;
        return;
    }

    int j = 0;
    while(fin >> arr[j]){
        j++;
    }
    *count = j;
    fin.close();
}
