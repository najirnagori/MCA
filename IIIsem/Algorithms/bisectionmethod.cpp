#include<bits/stdc++.h>

using namespace std;

int main()
 {
   int n;
   
  cin>>n;
  
  int i,j;

  for(i=1;i<n/4;i++)
    {
       if(pow(i,3)>n)
          {
             j=i;
            break;
            }
      }

 
  float x1,x2;
  float x3;
   
   x1=float(i-1);
   x2=float(j);
  
  
 
  while(pow(x3,3)==n)
  {
      if(pow(x1,3)*pow(x3,3)<0)
          x2=x3;
      else
          x1=x3;
      x3=(x1+x2)/2;
    }

cout<<"ROOT:"<<x3<<endl;
return 0;

}
 
  
