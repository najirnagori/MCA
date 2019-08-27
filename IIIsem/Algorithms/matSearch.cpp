#include<iostream>
using namespace std;
class matrix
{
	int **mat,r,c;
	public:
	matrix()
	{
		cout<<"\nENter row = ";
		cin>>r;
		cout<<"\nEnter column = ";
		cin>>c;
		mat=new int*[r];
		for(int i=0;i<r;i++)
		mat[i]=new int[c];
		
	}
	void input()
	{
		cout<<"\nENter elements of matrix in sorted order \n";
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
			cout<<"mat["<<i<<"]["<<j<<"]=";
			cin>>mat[i][j];
		    }
		}
	}
	void show()
	{
		cout<<"\nMatrix you entered : \n\n";
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
			  cout<<mat[i][j]<<" ";
		    }
		    cout<<"\n";
		}
	}
	int search(int s)
	{
		if(mat)
	}
};
int main()
{
	matrix m1;
	m1.input();
	m1.show();
	int n;
	cout<<"\nEnter element to be search ";
	cin>>n;
	int t=m1.search(n);
	if(t=0)
	cout<<"\nElemnet not found in matrix ";
	return 0;
}
