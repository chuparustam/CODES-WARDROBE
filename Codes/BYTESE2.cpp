#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
    while(T--)
    {
       int N,a,b,fans=1,i,j;
       vector < pair < int , int > > V;
       cin>>N;
       for(i=0;i<N;i++)
       {
          cin>>a>>b;
          V.push_back(make_pair(a,b));
       }
       sort(V.begin(),V.end());
       for(i=0;i<N;i++)
       {
           j=i;
           int ans=0;
           while(j>-1)
           {
              if(V[i].first<V[j].second)
              ans++;
              j--;
           }
           fans=max(fans,ans);
       }
       cout<<fans<<"\n";
    }
	return 0;
}