#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int d,R,n,ctr=0;
  cin>>R>>d;
  cin>>n;
  while(n--)
  {
     long long int r,x,y;
     cin>>x>>y>>r;
     double D=sqrt(x*x+y*y);
     
     if(D>=(double)(R-d+r))
     {
        if(D<=(double)abs(R-r))
        ctr++;
     }
  }
  cout<<ctr;
  return 0;
}