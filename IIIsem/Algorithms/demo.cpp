#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n;
	string str;
	cout<<"\nEnter string : ";
	getline(cin,str);
	cout<<"\nEntered string is : "<<str;
	n=str.length();
	//cout<<"\n"<<n;
	char arr[n+1];
	strcpy(arr,str.c_str());
	for(int i=0;i<n+1;i++)
	cout<<arr[i];
	return 0;
}
