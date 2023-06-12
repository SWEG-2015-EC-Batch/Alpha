//students'id checker
#include <iostream>
#include <iostream>
using namespace std;
int main(){
	char id[6][11]={"ETS0997/14","ETS1070/14","ETS1043/14", "ETS1030/14","ETS0997/14","ETS1097/14"};
	char name[11];
	cout<<"Enter your id ";
	cin>>name;

	for(int i;i<6;i++){
	  if(!strcmp(id[i],name))
		{
		cout<<"your id is"<<id[i];
		}
		exit(0);
		          }
		return 0;
}
