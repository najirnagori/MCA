#include<iostream>
using namespace std;
class Binomial
{
	public:
		unsigned long bin1(int n,int k)
		{
			if(k<=0 || k==n)
			return 1;
			else
			return (bin1(n-1,k-1)+bin1(n-1,k));
		}
		unsigned long bin2(int n,int k)
		{
			unsigned long  B[n+1][k+1];
			for(int i=0;i<n+1;i++)
			{
				for(int j=0;j<=min(i,k);j++)
				{
					if(j==0 || j==i)
					B[i][j]=1;
					else
					B[i][j]=B[i-1][j-1]+B[i-1][j];
				}
			}
			return B[n][k];
		}
		int min(int i,int j)
		{
			if(i<=j)
			return i;
			else
			return j;
		}
};
int main()
{
	Binomial b1;
	long n,k;
	cout<<"Enter n and k ";
	cin>>n>>k;
	cout<<"\nDivide and Conquer Binomial: "<<b1.bin1(n,k);
	cout<<"\nDynamic Programming Binomial 2D array: "<<b1.bin2(n,k);
	return 0;
}

