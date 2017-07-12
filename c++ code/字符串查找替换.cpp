//#include <iostream>
//#include <string> 
//#include <string.h>
//using namespace std;
//
//void string_replace(string &str,const string str1,const string str2);
//int main()
//{
//	string str,str1,str2;
//	cout<<"enter your str:"<<endl;
//	while(strcmp(str.c_str(),"end"));
//	{
//		getline(std::cin,str);
//	}
//	cout<<"enter you str1"<<endl;
//	getline(std::cin,str1);
//	cout<<"enter you str2"<<endl;
//	getline(std::cin,str2);
//	string_replace(str,str1,str2);
//}
//void string_replace(string &str,const string str1,const string str2)
//{
//	string::size_type nPos=0;
//	string::size_type nsrclen=str1.size();
//	string::size_type ndstlen=str2.size();
//	while(nPos=str.find(str1,nPos))
//	{
//		if(nPos==string::npos) break;
//		str.replace(nPos,nsrclen,str2);
//		nPos+=ndstlen;
//	}
//}

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
