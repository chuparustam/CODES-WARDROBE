#include <bits/stdc++.h>
typedef long long int LL;
using namespace std;
int main()
{
	LL T,N,i;
	cin>>T;
	while(T--)
	{
	   cin>>N;
	   if(N%2)
	   {
         for(i=1;i<=N-2;i++)
         {
            if(i%2)
            cout<<i+1;
            else
            cout<<i-1;
            cout<<" ";
         }
         cout<<N<<" "<<N-2;
	   }
	   else
	   {
         for(i=1;i<=N;i++)
         {
            if(i%2)
            cout<<i+1;
            else
            cout<<i-1;
            cout<<" ";
         }
	   }
	   cout<<"\n";
	}
	return 0;
}