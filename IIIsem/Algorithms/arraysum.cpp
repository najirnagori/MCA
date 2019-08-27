#include<iostream>
using namespace std;
int simpleArraySum(int arr[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}
int main()
{
    int arr[6]={1,2,3,4,10,11};
	cout<<"\nsum is "<<simpleArraySum(arr,6);
	return 0;
}
