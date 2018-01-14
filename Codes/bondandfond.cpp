#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	long long int N,i,ans;
	cin>>T;
	while(T--)
	{
      cin>>N;
      for(i=0;i<=64;i++)
      {
        if((1<<i)>=N)
        break;
      }
      ans=min(N-(1<<(i-1)),(1<<i)-N);
      cout<<ans<<"\n";  
	}
	return 0;
}