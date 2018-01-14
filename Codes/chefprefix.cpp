#include <bits/stdc++.h>
using namespace std;
int N,i,flag=1;
vector <string> A,B,P;
string S;
char ch;
int main()
{
    
    for(i=0;i<N;i++)
    {
    	cin>>ch;
        cin>>S;
        if(ch=='+')
        B.push_back(S);
        else
        A.push_back(S);
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    for(i=0;i<A.size();i++)
    {
        T=PreFix1(A[i]);
        if(T.compare(A[i])==0)
        {
          flag=0;
          break;
        }	
        Prefix2(T);
    }
    if(flag)
    {
       cout<<P.size()<<"\n";
       for(i=0;i<P.size();i++)
       cout<<P[i]<<"\n";	
    }	
    else
    cout<<"-1";	
	return 0;
}