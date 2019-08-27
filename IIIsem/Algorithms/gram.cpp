#include<iostream>
#include<string.h>
using namespace std;
class gram
{
	public:
		void input(string arr[],int n)
		{
			cout<<"\nEnter the sentence ";
			for(int i=0;i<n;i++)
			cin>>arr[i];
		}
		void show(string arr[],int n)
		{
			cout<<"\nsentence is : ";
			for(int i=0;i<n;i++)
			cout<<arr[i]<<" ";
		}
		void get_K_gram(string arr[],int n,int k)
		{
			for(int i=0;i<n-k+1;i++)
			{
			for(int j=i;j<=i+k-1;j++)
			{
				cout<<arr[j];
			}
			cout<<" ";
		    }
		}
};
int main()
{
	gram ob;
	string *arr;
	int n,k;
	cout<<"\nEnter no of words in string ";
	cin>>n;
	arr=new string[n];
	ob.input(arr,n);
	ob.show(arr,n);
//	cout<<"\n\nENter K gram ";
//	cin>>k;
//	ob.get_K_gram(arr,n,k);
	for(int i=0;i<n;i++)
	{
	ob.get_K_gram(arr,n,i);
	cout<<"\n";
    }
	return 0;
}
