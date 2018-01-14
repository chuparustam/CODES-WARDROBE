#include <bits/stdc++.h>
using namespace std;
bool  suffix(std::string const &fullString, std::string const &ending)
 {
    if (fullString.length() >= ending.length())
    {
      return (0 == fullString.compare (fullString.length() - ending.length(), ending.length(), ending));
    } 
    else 
    return false;
}
int main()
{
	int N,K,i,k;
	string S;
	vector < string > v;
	cin>>N>>K;
	for(i=0;i<N;i++)
	{
	   cin>>S;
	   v.push_back(S);
	}
	int ans=0;
	while(Q--)
	{
	   int q[100000],j;
	   cin>>k;
	   for(i=0;i<k;i++)
	   cin>>q[i];
	   for(i=0;i<k-1;i++)
	   {
	      int ctr=1;
	      for(j=i+1;j<k;j++)
	      if(suffix(v[q[j]-1],v[q[i]-1]))
	      ctr++;
	      if(ctr>ans)
	      ans=ctr;
	   }
	   cout<<ans<<"\n";
	}
	return 0;
}