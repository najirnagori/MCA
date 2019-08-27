#include<iostream>
using namespace std;
class root
{
	public:
		float squareRoot(int n,float xl,float xu)
		{
			float xm,xmo,fxl,fxm,lim=0.00001,lc;
			while(n)
			{
				xm=(xl+xu)/2;
				fxl=xl*xl-n;
				fxm=xm*xm-n;
				if(fxl*fxm<0)
				xu=xm;
				else if(fxl*fxm>0)
				xl=xm;
				else
				return xm;
				xmo=xm;
				xm=(xl+xu)/2;
				lc=(xm-xmo)/xm;
				lc=lc*100;
				if(lc<0)
				lc=-lc;
				if(lc<lim)
				return xm;
			}
		}
};
int main()
{
	root obj;
	int n;
	float xl,xu,r;
	cout<<"\nENter a number ";
	cin>>n;
	for(int i=1;i<n;i++)
	{
		if(i*i>n)
		{
			xu=(float)i;
			break;
		}
	}
	xl=xu-1;
	r=obj.squareRoot(n,xl,xu);
	cout<<"\nSquare Root :"<<r;
}
