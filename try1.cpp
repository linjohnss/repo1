#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	char name[20];
	char *ptr="How are you?";
	
	cout<<"What's your name?"<<endl;
	cin.getline(name,20);
	cout<<"��,"<<name<<","<<ptr<<endl;
	
	return 0;
}
