#include<iostream>
using namespace std;

int main(void){
	string a,m,b,c;
	int find ,i;
	getline(cin,a,'\n');
	while(1){
		getline(cin,m,'\n');
		i= m.compare("end");
		if(i==0){
			break;
		}
		
		a+='\n';
		a+=m;
	}
	
	a+='\n';
	cin>>b;
	cin>>c;
	find = a.find(b);
	
	while(find!=-1){
		a.replace(find,b.length(),c);
		find = a.find(b,find+1);
	}	
	cout<<a;
	return 0;
}
