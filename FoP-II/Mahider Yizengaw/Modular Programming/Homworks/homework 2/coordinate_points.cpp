#include<iostream>

using namespace std;

struct coordinates{
    int x,y;
};

coordinates read();
void print(coordinates);

int main(){
    coordinates c1 = read();
    print(c1);

    return 0;
}

coordinates read(){
    coordinates c1;
    cout << "Enter x coordinate : ";
    cin >> c1.x;
    cout << "Enter y coordinate: ";
    cin >> c1.y;
    return c1;
}

void print(coordinates c){
    cout << "the coordinate points are: (" << c.x << "," << c.y << ")" <<endl;
}
