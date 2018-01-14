#include <bits/stdc++.h>
using namespace std;
typedef long long int LL;
int N,P,i,a,b,ctr=0,g=0,visited[100000]={0},sum[100000]={0},group[100000]={0};
vector <int> adj[100000];
void dfs(int u)
{
    visited[u]=1;
    ctr++;
    for(int v=0;v<adj[u].size();v++)
    {
        if(!visited[adj[u][v]])
        dfs(adj[u][v]);    
    }    
}    
int main()
{
   LL ans=0; 
   cin>>N>>P;
   for(i=0;i<P;i++)
   {
      cin>>a>>b;
      adj[a].push_back(b);
      adj[b].push_back(a);
   }
   for(i=0;i<N;i++)
   {
       if(!visited[i])
       {    
         dfs(i);
         group[g++]=ctr;
         ctr=0;  
       }    
   } 
   sum[0]=0;
   for(i=1;i<g;i++)
   sum[i]=sum[i-1]+group[i-1];
   for(i=g-1;i>0;i--)
   ans+=(group[i]*sum[i]);
   cout<<ans; 
   return 0;
}