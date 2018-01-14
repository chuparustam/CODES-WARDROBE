#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;
lli A[30],N,K,i,ans=0;
void solve(int idx,lli prod,int mask)
{
    if(idx==N-1)
    return;
    
    int j,temp=mask;
    for(j=idx+1;j<N;j++)
    {
        if(&1)
    }  
}
int main()
{
    cin>>N>>K;
    for(i=0;i<N;i++)
    cin>>A[i];

    int M=0;    
    for(i=0;i<N;i++)
    M+=(1<<i);

    solve(-1,1,mask);

    cout<<((1<<N)-ans);

    return 0;
}