#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	   int N,i,R,f=1,A[1000000];//make sure to have 1000000
	   cin>>N>>R;
	   for(i=0;i<N;i++)
	   cin>>A[i];
	   int S=0,E=0;

	   if(A[N-1]!=R)
	   f=0;
	   else
	   {
	      for(i=0;i<N-1;i++)
	      {
             if( (S&&A[i]<S) || (E&&A[i]>E) || (A[i]>R&&A[i+1]>A[i]) || (A[i]<R&&A[i+1]<A[i]) )
             {
               f=0;
               break;
             }
             if(A[i]>R)
             E=A[i];
             else if(A[i]<R)
             S=A[i];
	      }
	   }

       if(f)
       cout<<"YES";
       else
       cout<<"NO";
       cout<<"\n";
	}
	return 0;
}