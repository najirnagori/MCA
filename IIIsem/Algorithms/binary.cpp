#include<iostream>
using namespace std;
class Binary
{
	public:
		int bin(int n)
		{
			int b=0;
			while(n>0)
			{
				b=b+10*n%2;
				n=n/2;
			}
		}
	//	{
	//		if(n==0)
	//		return 0;
	//		return (n%2+10*bin(n/2));
	//	}
	
};
int main()
{
	Binary obj;
	int no;
	cout<<"\nENter a positive number ";
	cin>>no;
	cout<<"\nBinary of "<<no<<" is"<<obj.bin(no);
	return 0;
}
