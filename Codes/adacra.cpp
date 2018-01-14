#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
    while(T--)
    {
      int N,Un=0,Dn=0,i;
      char A[50];
      cin>>A;
      N=strlen(A);
      for(i=0;i<N;i++)
      {
        if(A[i]!=A[i+1])
        {
           if(A[i]=='U')
           Un++;
           else
           Dn++;
        }
      }
      if(A[N-1]=='U')
      Un++;
      else
      Dn++;
      cout<<min(Un,Dn)<<"\n";
    }
	return 0;
}