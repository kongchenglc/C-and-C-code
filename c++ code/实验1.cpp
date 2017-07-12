//#include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
// 	 string user_name;
// 	 cout<<"please enter your first name: ";
//	 cin>>user_name;
//	 cout<<"\n"<<"Hello,"<<user_name<<"...and goodbye!\n";
//	 return 0;
// }

//#include <iostream>
//using namespace std;
//int max(int x,int y);
//int main()
//{
//	int a,b,c;
//	cin>>a>>b;
//	c=max(a,b);
//	cout<<"max= "<<c<<"\n";
//}
//int max(int x,int y)
//{
//	if(x>y)
//	return x;
//	else 
//	return y;
//}


#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b;
	if(b==0)
		return -1;
	c=a/b;
	cout<<"c= "<<c<<"\n";
	return 0;
}
