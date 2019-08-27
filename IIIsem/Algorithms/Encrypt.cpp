#include<iostream>
#include<string.h>
using namespace std;
class Encrypt
{
	public:
		void encrypt(char *a,int n)
		{
			for(int i=0;i<n;i++)
			{
				if(i%2==0)
				{
					if(a[i]=='z')
					a[i]=a[i]-25;
					else
				    a[i]=a[i]+1;
			    }
				else
				{
					if(a[i]=='a')
				   a[i]=a[i]+25;
					else
				    a[i]=a[i]-1;
			    }
			}
		}
		void decrypt(char *a,int n)
		{
			for(int i=0;i<n;i++)
			{
				if(i%2==0)
				{
					if(a[i]=='a')
					a[i]=a[i]+25;
					else
				    a[i]=a[i]-1;
			    }
				else
				{
					if(a[i]=='z')
				   a[i]=a[i]-25;
					else
				    a[i]=a[i]+1;
			    }
			}
		}
		
};
int main()
{
	Encrypt obj;
	int n;
	string str;
	cout<<"\nEnter string : ";
	getline(cin,str);
	cout<<"\nEntered string is : "<<str;
	n=str.length();
	//cout<<"\n"<<n;
	char arr[n+1];
	strcpy(arr,str.c_str());
//	cout<<"\nENter no of letters in word ";
//	cin>>n;
//	char arr[n];
//	cout<<"\nENter word : ";
//	for(int i=0;i<n;i++)
//	cin>>arr[i];
	obj.encrypt(arr,n);
	cout<<"\nEnctypted Word is :";
	for(int i=0;i<n;i++)
	cout<<arr[i];
	obj.decrypt(arr,n);
	cout<<"\nDecrypt word is :";
	for(int i=0;i<n;i++)
	cout<<arr[i];
	return 0;
}
