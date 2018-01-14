#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    int t;
	while(b)
	{
	   a=a%b;
	   t=a;
	   a=b;
	   b=t;
	}
	return a;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin>>T;
  while(T--)
  {
     int N,Q,i,j,A[100000],l,r;
     int L[100000],R[100000];
     cin>>N>>Q;
     for(i=0;i<N;i++)
     cin>>A[i];
     for(i=0,j=N-1;i<N;i++,j--)
     {
       if(i==0)
       L[i]=A[i];
       else
       L[i]=gcd(L[i-1],A[i]);

       if(j==N-1)
       R[j]=A[j];
       else
       R[j]=gcd(R[j+1],A[j]);
     }  
     while(Q--)
     {
        cin>>l>>r;
        l--;r--;
        if(l==0&r!=N-1)
        cout<<R[r+1];
        else if(l!=0&&r==N-1)
        cout<<L[l-1];
        else
        cout<<gcd(L[l-1],R[r+1]);
        cout<<"\n";
     }
  }
  return 0;
}