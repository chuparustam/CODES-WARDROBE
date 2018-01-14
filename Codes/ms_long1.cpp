//coder_hsnake
#include <bits/stdc++.h>
typedef long long int LL;
using namespace std;
int main()
{
	LL T,N,i,A[100000],ans;
	cin>>T;
	while(T--)
	{
       cin>>N;
       for(i=0;i<N;i++)
       {
         cin>>A[i];
         if(i==0)
         ans=i;
         else
         {
            if(A[i]<A[ans])
            ans=i;
         }
       }
       cout<<ans+1<<"\n";
	} 
	return 0;
}