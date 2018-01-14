#include <bits/stdc++.h>
using namespace std;
int main()
{
	int S;
	cin>>S;
	while(S--)
	{
	  int N,A[1000],i,flag=1;
	  cin>>N;
      for(i=0;i<N;i++)
      cin>>A[i];

      if(N%2)
      {
        for(i=0;i<N/2;i++)
        {
           if(A[i]!=(A[i+1]-1))
          {
            //cout<<A[i]<<" "<<A[i+1]<<"\n";
            flag=0;
            break;
          }
        }
        
        if(A[0]!=1||A[N-1]!=1)
        flag=0;
        	
        for(i=N/2;i<N-1;i++)
        {	
           if(A[i]!=(A[i+1]+1))
          {
            //cout<<A[i]<<" "
            flag=0;
            break;
          }
        }
      }
      else
      flag=0;

      if(flag)
      cout<<"yes";
      else
      cout<<"no";

      cout<<"\n";
	}
	return 0;
}