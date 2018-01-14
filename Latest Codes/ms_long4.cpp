#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	   int N,Q,i,j,k,l,val,f=1,n_set=1,st,ei,ej;
	   int Set[100001]={0};
	   int E[100001]={0};
	   vector < pair < pair < int , int > , int > > V;
	   vector <int> adj[100001];
	   cin>>N>>Q;
	   for(k=0;k<Q;k++)
	   {
         cin>>i>>j>>val;
         V.push_back(make_pair(make_pair(i,j),val));
         if(val==0)
         {
            if((Set[i]==0)&&(Set[j]==0))
            {
               Set[i]=n_set;
               Set[j]=n_set;
               n_set++;
               adj[n_set].push_back(i);
               adj[n_set].push_back(j);
            }
            else if(Set[i]!=0&&Set[j]==0)
            {
               Set[j]=Set[i];
               adj[Set[i]].push_back(j);
            }  
            else if(Set[i]==0&&Set[j]!=0)
            {
               Set[i]=Set[j];
               adj[Set[j]].push_back(i);
            }
            else if(Set[i]!=0&&Set[j]!=0&&Set[i]!=Set[j])
            {
               if(Set[i]<Set[j])
               {
                  st=Set[j];
                  for(l=0;l<adj[st].size();l++)
                  Set[adj[st][l]]=Set[i];
                  adj[st].clear();
               }
               else
               {
                  st=Set[i];
                  for(l=0;l<adj[st].size();l++)
                  Set[adj[st][l]]=Set[j];
                  adj[st].clear();
               }
            }  
         }  
	   }
	   for(k=0;k<Q;k++)
	   {
	   	 val=V[k].second;
	   	 i=V[k].first.first;
         j=V[k].first.second;
         if(val==1)
         {
           if(Set[i]!=0&&Set[j]!=0&&Set[i]==Set[j])
           {
           	 f=0;
           	 break;
           }
           else if(Set[i]!=0&&Set[j]!=0&&Set[i]!=Set[j])
           {
             if(E[Set[i]]==0&&E[Set[j]]==0)
             {	
               E[Set[i]]=Set[j];
               E[Set[j]]=Set[i];
             }
             else if(E[Set[i]]!=0&&E[Set[j]]==0)
             E[Set[j]]=Set[i];
             else if(E[Set[j]]!=0&&E[Set[i]]==0)
             E[Set[i]]=Set[j];
             else
             {
               if(E[Set[i]]==E[Set[j]])
               {
             	 f=0;
                 break;
               }
               else
               {
              	 ei=E[Set[i]];
              	 ej=E[Set[j]];
              	 E[ei]=ej;
              	 E[ej]=ei;
               }	
             }  	
           }
           else if(Set[i]!=0&&Set[j]==0)
           {
           	  if(E[Set[i]]!=0)
           	  Set[j]=E[Set[i]];
           	  else
           	  {
           	  	Set[j]=n_set++;
           	  	E[Set[i]]=Set[j];
           	  	E[Set[j]]=Set[i];
           	  }	
           }
           else if(Set[j]!=0&&Set[i]==0)
           {
           	  if(E[Set[j]]!=0)
           	  Set[i]=E[Set[j]];
           	  else
           	  {
           	  	Set[i]=n_set++;
           	  	E[Set[j]]=Set[i];
           	  	E[Set[i]]=Set[j];
           	  }	
           }
           else
           {
           	  Set[i]=n_set++;
           	  Set[j]=n_set++;
           	  E[Set[i]]=Set[j];
           	  E[Set[j]]=Set[i];
           }		
         }	
	   }	
	   if(f)
	   cout<<"yes";
	   else
	   cout<<"no";
	   cout<<"\n";
	}
	return 0;
}