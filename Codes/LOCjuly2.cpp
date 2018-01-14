#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	   string S;
	   int i,freq[26],N;
	   int dp[100000]={0};
	   for(i=0;i<26;i++)
	   freq[i]=INT_MAX;
	   
       cin>>S;
       N=S.length();
       dp[N-1]=0;
       freq[S[N-1]-'a']=0;
       if(N>=2)
       {	
         dp[N-2]=abs(S[N-1]-S[N-2]);
         freq[S[N-2]-'a']=dp[N-2];	
       }

       for(i=S.length()-3;i>-1;i--)
       {
         dp[i]=min(abs(S[i+1]-S[i])+dp[i+1],freq[S[i]-'a']);
         freq[S[i]-'a']=min(freq[S[i]-'a'],dp[i]);
       }
       cout<<dp[0]<<"\n";
	}
	return 0;
}