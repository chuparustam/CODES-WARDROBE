#include <bits/stdc++.h>
typedef unsigned long long int LL;
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	   LL N,M,X;
	   cin>>N>>M;
       X=(sqrt(1+8*M)-1)/2;
       if((X*(X+1))/2<M)
       X++;	
       if(X>N)
       cout<<"-1";
       else
       cout<<X;
       cout<<"\n";
	}
}