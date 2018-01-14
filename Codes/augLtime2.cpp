#include <bits/stdc++.h>
using namespace std;
int main()
{
	int Q;
	long long int N,K,ans,term,f;
	cin>>Q;
	while(Q--)
	{
       f=0;
       cin>>N>>K;
       if(K==0)
       ans=0;
       else if(K==(1<<N)/2-1)
       ans=(1<<N)-2;
       else if(K==(1<<N)/2)
       ans=1;
       else if(K==(1<<N)-1)
       ans=(1<<N)-1;
       else
       {
          if(K>(1<<N)/2)
          {
             f=1;
             K-=(1<<N)/2;
          }
          long long int T1=abs(((1<<N)/4)-K);
         // cout<<"T1="<<T1<<"\n";
          long long int T2=abs(((1<<N)/4)-K-1);
          //cout<<"T2="<<T2<<"\n";
          term=max(T1,T2);
          //cout <<"term="<<term<<" ";
          long long int A,B;
          A=2*term;
          B=(1<<N)-2-A;
          if(K>=(1<<N)/4)
          {
            if(term%2)
            ans=A;
            else
            ans=B;
          }
          else
          {
            if(term%2)
            ans=B;
            else
            ans=A;
          }
       }
       cout<<ans+f<<"\n";
	}
	return 0;
}