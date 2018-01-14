#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;
lli gcd(lli a,lli b)
{
   lli t;
   while(b)
   {
     a=a%b;
     t=a;
     a=b;
     b=t;
   }
   return a;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	  lli N;
	  cin>>N;
	  lli p,q,g;
	  if(N==1)
	  p=2;
	  else if(N==2)
	  p=6;
	  else
	  {
	  	 lli d=(N/2)-1+(N%2);
	  	 p=(N+d)*(N+1)-d*(d+2);
	  	 if(N%2)
	  	 p+=d*d;
	  	 else
	  	 p+=d*(d+1);	
	  }	
	  q=6*N*N*N;
      g=gcd(p,q);
      cout<<p/g<<"/"<<q/g<<"\n";
	}
	return 0;
}