#include <bits/stdc++.h>
using namespace std;
void pad(int N)
{
  int dig=0,M=N;
  if(N==0)
  dig=1;
  while(M)
  {	
    M/=10;
    dig++;
  }
  if(dig>=5)
  cout<<N;
  else
  {	
    for(int i=1;i<=(5-dig);i++)
    cout<<"0";
    cout<<N;
  }    	
}
int main()
{
    int T,i,j,term=7,ctr=0;
    cin>>T;
    int N=(T*(T+1))/2;
    for(i=1;i<=T;i++)
    {
       for(j=1;j<=i;j++)
       {
          if(i!=1||j!=1)	
          term+=24+16*(ctr-1);
          pad(term);
          cout<<" ";
          ctr++;
       }
       cout<<"\n";
    }	
	return 0;
}