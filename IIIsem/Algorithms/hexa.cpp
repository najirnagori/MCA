#include<iostream>
#include<math.h>
using namespace std;
class decToHex
{
	public:
		void hexCon(int dec,int d)
		{
			int rem,i=1;
			char *arr=new char[d];
			while(dec!=0)
			{
				rem=dec%16;
				if(rem<10)
				arr[i++]=rem+48;
				else
				arr[i++]=rem+55;
				dec=dec/16;
			}
			cout<<"\nHexa Decimal :";
			for(int j=i;j>0;j--)
			cout<<arr[j];
		}
};
int main()
{
	decToHex obj;
	int dec,d;
	cout<<"\nEnter a decmal no ";
	cin>>dec;
	d=log(dec)/log(16)+1;
	obj.hexCon(dec,d);
	return 0;
}
