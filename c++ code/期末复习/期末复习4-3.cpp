//class Stock{
//	public:		
//		char *symbol;
//		char *name;
//		double previousClosingPrice;
//		double currentPrice;
//		void set(char symbol[],char name[])
//		{
//			this->symbol=symbol;
//			this->name=name;
//		}
//	  double changePercent()
//		{
//			return (currentPrice-previousClosingPrice)/previousClosingPrice;
//		}
//}; 



#include <iostream>
using namespace std;

class Stock {
	public:
		char *symbol;
		char *name;
		double previousClosingPrice;
		double currentPrice;
		void set(char symbol[],char name[])
		{
			this->symbol = symbol;
			this->name = name;
		}
		double changePercent() 
		{
			return (currentPrice - previousClosingPrice)/previousClosingPrice;
		}
		
};

int main( ) {
    char s1[10],n1[20];
    cin>>s1>>n1;
    Stock stock;
    stock.set(s1, n1);   //输入前一日收盘价 
    cin>>stock.previousClosingPrice;    //输入当前成交价 
    cin>>stock.currentPrice;    //显示股票信息 
    cout<<stock.name<<" price changed: " <<(stock.changePercent() * 100)<<"%";
    return 0;
  }
