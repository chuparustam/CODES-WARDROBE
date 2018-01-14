#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
	long long int N,i,ans,l,g;
	cin>>T;
	while(T--)
	{
      cin>>N;
      int i=log(N)/log(2);
      l=1<<i;
      g=l<<1;
      ans=min(N-l,g-N);
      cout<<ans<<"\n";  
	}
	return 0;
} 