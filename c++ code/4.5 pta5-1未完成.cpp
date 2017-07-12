#include <iostream>
#include <stdlib.h>
using namespace std;
class student
{
public:
int dormnumber;
char name[16];
int height;
int weight;
};
int main()
{
int n;
cin>>n;
student* arr=(student*)malloc(sizeof(student)*n);
for(int i=0;i<n;i++)
{
cin>>arr[i].dormnumber;
cin>>arr[i].name;
cin>>arr[i].height;
cin>>arr[i].weight;
}
}

