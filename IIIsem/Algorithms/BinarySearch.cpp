#include<iostream>
using namespace std;
class BinarySearch
{
	public:
	int binarySearch(int arr[],int l,int h,int x)
	{
		if(l==h)
		{
			if(x==arr[h])
			return l;
			else
			return -1;
		}
		else
		{
			int mid=(l+h)/2;
			if(x==arr[mid])
			return mid;
			else if(x<arr[mid])
			return binarySearch(arr,l,mid-1,x);
			else
			return binarySearch(arr,mid+1,h,x);
		}
	}	
};
int main()
{
	BinarySearch ob;
	int *arr,n,x,b;
	cout<<"\nEnter size of array ";
	cin>>n;
	arr=new int[n];
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter a["<<i<<"]= ";
		cin>>arr[i];
	}
	cout<<"\nEnter the element to be search :";
	cin>>x;
	b=ob.binarySearch(arr,0,n,x);
	if(b==-1)
	cout<<"\nElement is not present in list ";
	else
	cout<<"\nElement is present at pos "<<b+1;
	return 0;
}
