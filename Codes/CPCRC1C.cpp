#include <bits/stdc++.h>
typedef unsigned long long int lli;
using namespace std;
lli epow(lli a,lli b)
{
	lli ans=1;
	while(b--)
	ans*=a;
		
	return ans;
}
lli S(lli N)
{
	if(N==0)
	return 0;
	else
	return N*epow(10,N-1)*45;
}
lli SOD(lli N)
{
    lli ans=0;
    while(N)
    {
       lli M=N,exp=0;
       while(M>9)
       {
         exp++;
         M/=10;
       }
       ans+=M*S(exp);
       if(M)
       ans+=((M*(M-1))/2)*(epow(10,exp));
       N=N-M*epow(10,exp);
       ans+=M*(N+1);  
    }
    return ans;
}
int main()
{
	lli T;
	cin>>T;
	while(T--)
	{	
	  lli a,b,sum=0,c;
      cin>>a>>b;
	  c=a;
	  while(c)
	  {
	      sum+=c%10;
	      c/=10;
	  }
	  cout<<(SOD(b)-SOD(a)+sum)<<"\n";
	}
	return 0;
}