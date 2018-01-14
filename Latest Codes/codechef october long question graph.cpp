#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin>>T;
  while(T--)
  {
      int N,Q,A[100000],wt,i,j,v1,v2,c1,c2,t,start,end;
      int cost1[100000],cost2[100000];
      int ccost1[100000]={0},ccost2[100000]={0};
      vector <int> cycle[100000];
      vector <int> weight[100000];
      vector < pair < pair < int, int > , int > > bridge;
      cin>>N>>Q;
      for(i=0;i<N;i++)
      {
         cin>>A[i];
         for(j=0;j<A[i];j++)
         {
           cin>>wt;

           if(j==0)
           weight[i].push_back(wt);
           else
           weight[i].push_back(wt+weight[i][j-1]);

           cycle[i].push_back(wt);
         }  
      }
      for(i=0;i<N;i++)
      {
        cin>>v1>>v2>>wt;
        bridge.push_back(make_pair(make_pair(v1-1,v2-1),wt));
        if(i>0)
        {
           cost1[i]=0;
           cost2[i]=bridge[i-1].second;
           start=bridge[i-1].first.second;
           end=v1;
           if(end<start)
           {
             t=start;
             start=end;
             end=t;
           }
           cost1[i]+=min(weight[start]-weight[end]+cycle[i][start]-cycle[i][end],
           weight[A[i]-1]+weight[start]-weight[end]-weight[0]+cycle[i][end]+cycle[i][0]-cycle[i][start]);
           cost2[i]+=cost1[i];
           cost1[i]+=wt;
        }
        cost1[0]=0;
        cost2[0]=bridge[N-1].second;
           start=bridge[N-1].first.second;
           end=bridge[0].first.first;
           if(end<start)
           {
             t=start;
             start=end;
             end=t;
           }
           cost1[0]+=min(weight[start]-weight[end]+cycle[0][start]-cycle[0][end],
           weight[A[0]-1]+weight[start]-weight[end]-weight[0]+cycle[0][end]+cycle[0][0]-cycle[0][start]);
           cost2[0]+=cost1[0];
           cost1[0]+=bridge[0].second;
      }
      
      for(i=0;i<N;i++)
      {
         if(i==0)
         ccost1[i]=cost1[i];
         else
         ccost1[i]=ccost1[i-1]+cost1[i];
      }
      
      while(Q--)
      {
        cin>>v1>>c1>>v2>>c2;
        v1--;v2--;c1--;c2--;
        if(c1>c2)
        {
          t=v1;
          v1=v2;
          v2=t;
          t=c1;
          c1=c2;
          c2=t;
        }
        int dis1=0,dis2=0;

        cout<<min(dis1,dis2);
        cout<<"\n";
      }
  }
  return 0;
}