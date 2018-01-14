#include <bits/stdc++.h>
#define M 1000000007
using namespace std;
long long int power(long long int a,long long int b)
{
  if(b==0)
  return 1;
  long long int p=power(a,b/2);
  if(b%2)
  return ((((p%M)*(p%M))%M)*(a%M))%M;
  else
  return ((p%M)*(p%M))%M;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	    long long int N;
	    cin>>N;
	    cout<<power(2,N-1)<<"\n";
	}
	return 0;	
}