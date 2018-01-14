#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,i,A[100000],lneg=INT_MIN;
        long long int sumpos=0;
        cin>>N;
        for(i=0;i<N;i++)
        {     
          cin>>A[i];
          if(A[i]>=0)
          sumpos+=A[i];    
          lneg=max(lneg,A[i]);  
        }
        if(lneg<0)
        {
          cout<<lneg<<" "<<lneg;
        }
        else
        {
           long long int sum_so_far=0,sum_end=0;
           for(i=0;i<N;i++)
           {
               sum_end+=A[i];
               if(sum_end<0)
               sum_end=0;    
               if(sum_end>sum_so_far)
               sum_so_far=sum_end;    
           }    
           cout<<sum_so_far<<" "<<sumpos;  
        }    
        cout<<"\n";
    }    
    return 0;
}