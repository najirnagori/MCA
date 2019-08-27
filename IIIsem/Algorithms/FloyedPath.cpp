#include<iostream>
using namespace std;
class Floyed
{
	int **D,**P,V;
	public:
	Floyed(int n)
	{
		V=n;
		D=new int[n][n];
		P=new int[n][n];
	}
	void floyed(int w[][],int n)
	{
		D=w;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			P[i][j]=0;
		}
		for(int k=1;i<n;i++)
		{
			for(int i=1;j<n;j++)
			{
				for(int j=1;j<n;j++)
				{
					if(D[i][j]>(D[i][k]+D[k][j]))
					{
						D[i][j]=D[i][k]+D[k][j];
						P[i][j]=k;
					}
				}
			}
		}
	}
	void path(int q,int r)
	{
		if(P[q][r]!=0)
		{
			path(q,P[q][r]);
			cout<<" V"<<P[q][r];
			path(P[q][r],r);
		}
	}
};
int main()
{
	cout<<"\nEnter Vertices ";
	int v;
	cin>>v;
	cout<<"\nEnter weight of Edges ";
	int W[v][v];
	for(int i=0;i<v;i++)
	{
		for(int j=0;j<v;j++)
		{
			if(i==j)
			{
				W[i][j]=0;
			}
			else
			{
			 cout<<"\nEnter Weight of Edge V"<<i<<" V"<<j<<": ";
			 cin>>W[i][j];
		    }
		}
	}
	Floyed f(v);
	f.floyed(W,v);
	cout<<"\nPath is :"
	for(int i=0;i<v;i++)
	{
		for(int j=0;j<v;j++)
		f.path(i,j);
	}
	return 0;
}
