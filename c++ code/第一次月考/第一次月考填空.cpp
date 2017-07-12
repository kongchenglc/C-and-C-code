#include <iostream>
#include <cstring>
using namespace std; 
class Book{
private:
  char *title; //??
  char *author; //??
  int sales;    //???
 public:
  Book();   //??????;
  Book(char *a,char *b,int c); //????
   void print();         //????
   ~Book();            //????
};
Book::Book(char *a,char *b,int c)
{
  title=new char[strlen(a)+1];
strcpy(title,a);
  author= new char[strlen(b)+1];
  strcpy(author,b);
  sales=c;
}
void Book::print()
{
  cout<<title<<endl;
  cout<<author<<endl;
  cout<<sales<<endl;
}
Book::~Book( )
{
  
delete [] title;
delete [] author;
}
int main( )
{
  char title[80],author[80];
  int sales;
  cin.getline(title,79,'\n');
  cin.getline(author,79,'\n');
  cin>>sales;
  Book aBook(title,author,sales);
  aBook.print();				
}
