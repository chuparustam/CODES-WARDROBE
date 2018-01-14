#include <bits/stdc++.h>
typedef long long int LL;
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	    LL N,K,i,his[100000],his_min=1000000;
	    cin>>N>>K;
	    for(i=0;i<N;i++)
	    {
	      cin>>his[i];
	      if(his[i])
	      his_min=min(his_min,his[i]);
	    } 
	    if(his_min==1000000)
	    his_min=0;	
	    cout<<his_min<<"\n";
	}
	return 0;
}