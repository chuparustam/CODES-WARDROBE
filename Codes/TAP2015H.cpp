#include <bits/stdc++.h>
using namespace std;
int main()
{
	
	long long int num;
	while(scanf("%lld",&num)==1)
	{
      long long int ans=0;
      while(num)
      {
        long long int a[10],i=0;
        long long int mum=num,num2=0,f=1;
        while(mum)
        {
          a[i++]=mum%10;
          mum/=10;
        }
        sort(a,a+i);
        i=i-1;
        while(i>-1)
        {
          num2+=a[i]*f;
          i--;
          f*=10;
        }
        if(num>num2)
        num=num-num2;
        else
        num=num2-num;
        ans++;
      }
      cout<<ans<<"\n";
	}
	return 0;
}