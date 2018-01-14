#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	   int A,B,N;
	   long long int C,D;
	   cin>>A>>B>>N;
	   C=A*pow(2,N/2+N%2);
	   D=B*pow(2,N/2);
       cout<<max(C,D)/min(C,D);
       cout<<"\n";
	}
	return 0;
}