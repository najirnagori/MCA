#include<iostream>
using namespace std;
class pattern
{
	public:
	void per(char a[],int k,int n)
	{
		char temp;
		if(k==n)
		{
			for(int i=0;i<n;i++)
			{
			cout<<a[i];
		    }
		    cout<<"  ";
		}
		for(int i=k;i<n;i++)
		{
			temp=a[i];
			a[i]=a[k];
			a[k]=temp;
			per(a,k+1,n);
			temp=a[i];
			a[i]=a[k];
			a[k]=temp;
			
		}
	}
};
int main()
{
	pattern obj;
	char *a;
	int n;
	cout<<"\nEnter the cardinality of set ";
	cin>>n;
	a=new char[n];
    cout<<"\nEnter the element of the set ";
    for(int i=0;i<n;i++)
    cin>>a[i];
    obj.per(a,0,n);
    return 0;
}
