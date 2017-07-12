#include <iostream>
#include <cstring>
using namespace std;
class my_string {
   char *s;
public:
   my_string(char *str)  {
      s = new char[strlen(str)+1];
      strcpy(s, str);
   }
   my_string(const my_string &tmp) {
   	  s = new char[strlen(tmp.s)+1];
   	  strcpy(s, tmp.s);
   }
   ~my_string() {
       if(s) delete [] s;
       cout << "Freeing s\n"; 
    }
   void show() { cout << s << "\n"; }
};


int main()
{
   char str[80];
   cin>>str;
   my_string obj(str); 

   my_string ob1(obj);				
   my_string ob2=ob1;

   ob1.show();
   ob2.show();

   return 0;
}
