#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(){
	char *text;
	text=(char*)malloc(sizeof(char)*50);
	//text="hello world";
	cout<<"Hello!What's your name?"<<endl;
	cin>>text;
	cout<<text<<",Welcome to learn OOP using C++!"<<endl; 
	return 0;
}
