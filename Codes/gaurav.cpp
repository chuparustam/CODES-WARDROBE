#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long int A,B,i,fans=0,T;
   scanf("%lld%lld",&A,&B);
   for(i=1;i<=A;i++)
  {
    T=2*i+1;
    if(T>B)
    break;
    else
    fans+=(1-T+sqrt(T*T+1-2*T+4*B))/2;
  }  	        
   printf("%lld",fans);
    return 0;
}