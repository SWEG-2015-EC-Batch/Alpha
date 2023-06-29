#include <iostream>

using namespace std;
//This program uses structure and function concepts to accept and prints out the xy coordinates given by the user
struct coordinates{
    int x_coordinate;
    int y_coordinate;
};

coordinates read_coor();
void print_coor(coordinates);

int main()
{
    coordinates x_y;
    x_y=read_coor();
    print_coor(x_y);

    return 0;
}


coordinates read_coor(){
    coordinates x_and_y;
    x_and_y.x_coordinate=2;
    x_and_y.y_coordinate=5;
    return x_and_y;
}

void print_coor(coordinates accept_coor){
        cout<<"The x-coordinate is: "<<accept_coor.x_coordinate<<" and the y coordinate is: "<<accept_coor.y_coordinate;
}
