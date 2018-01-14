#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	   long long int N,M;
	   cin>>N;
	   M=N;
	   int dig=0,MSB;
       while(M)
       {
         if(M<10)
         MSB=M;	
         M/=10;
         dig++;
       }
	   if(N>=0)
	   {
          cout<<"1";
          for(int j=1;j<=(dig-1);j++)
          cout<<"0";	
	   }
	   else
	   {
          N=N*(-1);
          long long int O=1;
          for(int j=1;j<=(dig-1);j++)
          O*=10;
          cout<<2*N+O;        
       }
	   cout<<"\n";
	}
	return 0;
}