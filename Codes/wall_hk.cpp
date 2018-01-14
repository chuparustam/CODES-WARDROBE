#include <bits/stdc++.h>
using namespace std;
int sieve[10001]={1};
int prime[10000],k=1;
void channi()
{
  	int i,j;
  	prime[0]=2;
  	for(i=3;i<10001;i+=2)
    {
       if(!sieve[i])
       {
          sieve[i]=0;
          for(j=i*i;j<10001;j+=2*i)
          sieve[j]=i;
       }
    }
    for(i=3;i<10001;i+=2)
    if(sieve[i]==0)
    prime[k++]=i;
}
int ways(int L,int B)
{
	if()
    return 1;
    return ways()+
}
int main()
{
  channi();
  int i,P,T,N;
  cin>>T;
  while(T--)
  {
  	cin>>N;
  	P=ways(4,N);
  	for(i=0;(i<k)&&(prime[i]<=P);i++);
  	cout<<i<<"\n";	
  } 	
  return 0;
}
