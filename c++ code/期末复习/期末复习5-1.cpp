#include<iostream>
using namespace std;
class student 
{
  private:
	int number;	
	float score;
	public:
		void set(int number1,float score1)
		{
			this->number=number1;
			this->score=score1;
		}
	friend double average(student *p,int count);
};
double average(student *p,int count)
{
	double sum=0.0,avg=0.0;
	for(int i=0;i<count;i++)
	{
		sum+=(p+i)->score;
	}
	avg=sum/count;
	return avg;
}
int main()
{
	student stu[100];
	int number;
	double score;
	int count=0;
	double avg=0.0;
	while(cin>>number)
	{
		if(number==0)
		break;
		cin>>score;
		stu[count].set(number,score);
		count++;
	}
	avg=average(stu,count);
	cout<<avg;
	return 0;
}

