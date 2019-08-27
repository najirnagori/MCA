#include<iostream>
using namespace std;
class MergeSort
{
	public:
		void merge(int *a,int low,int mid,int high)
		{
			int i,j,k,b[high-low+1];
			i=low;
			j=mid+1;
			k=0;
			while(i<=mid && j<=high)
			{
				if(a[i]<a[j])
				{
					b[k]=a[i];
					i=i+1;
				}
				else
				{
					b[k]=a[j];
					j=j+1;
				}
				k=k+1;
			}
			while(i<=mid)
			{
				b[k]=a[i];
				i=i+1;
				k=k+1;
			}
			while(j<=high)
			{
				b[k]=a[j];
				j=j+1;
				k=k+1;
			}
			//for(k=0;k<high-low;i++)
		//	a[low+k]=b[k];
		for (i = low; i <= high; i++)
     	{
		a[i] = b[i-low];
	    }
		}
		void mergeSort(int *a,int low,int high)
		{
			if(low<high)
			{
				int mid=(low+high)/2;
				mergeSort(a,low,mid);
				mergeSort(a,mid+1,high);
				merge(a,low,mid,high);
			}
		}
};
int main()
{
	int *arr,n;
	cout<<"\nEnter size of array ";
	cin>>n;
	arr=new int[n];
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter a["<<i<<"]= ";
		cin>>arr[i];
	}
	MergeSort obj;
	obj.mergeSort(arr,0,n-1);
	cout<<"\nSorted elements are ";
	for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
	return 0;	
	
}
