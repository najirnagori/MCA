#include<iostream>
using namespace std;
class HornersRule
{
	public:
		int HorRule(int a[],int n,int x)
		{
			int exp;
			exp=a[n]*x;
			for(int i=n-1;i>0;i--)
			{
				exp=(exp+a[i])*x;
			}
			exp=exp+a[0];
			return exp;
		}
	
};
int main()
{
	HornersRule obj;
	int *a,n,x;
	cout<<"\nEnter the degree of polynomial ";
	cin>>n;
	a=new int[n];
	cout<<"\nEnter the co-efficeint ";
	for(int i=0;i<n+1;i++)
	cin>>a[i];
	cout<<"\nEnter the value of x in function f(x) ";
	cin>>x;
	cout<<"\nAnswer = "<<obj.HorRule(a,n,x);
}
