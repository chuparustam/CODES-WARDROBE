#include <bits/stdc++.h>
#define MOD 1000000009
using namespace std;
/*long long int powermod(int a,int b)
{
    if(b==0)
    return 1;    
    long long int p=powermod(a,b/2);
    if(b%2)
    return (  (((p%MOD)*(p%MOD))%MOD) * a  )%MOD;
    else
    return ((p%MOD)*(p%MOD))%MOD;    
} */ 
int main()
{
    int prime[100]={1};
    prime[0]=0;
    prime[1]=0;
    int p,i;
    //memset(prime,1, sizeof(prime));
    for (p=2; p*p<=100; p++)
    {
        if (prime[p] == 1)
        {
            cout<<p<<"\n";
            for (i=p*p; i<=100; i += p)
            prime[i] =0;
        }
    }
    /*int T;
    cin>>T;
    while(T--)
    {
       int L,R,i;
       long long int sum=0; 
       cin>>L>>R;
       for(i=L;i<=R;i++)
       {
           if(prime[i]==1)
           {
               //cout<<i<<"\n";
               sum=(sum%MOD+powermod(i,i))%MOD;
           }    
       }
       cout<<sum<<"\n"; 
    } */   
    return 0;
}
