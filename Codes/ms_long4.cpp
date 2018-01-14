#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	   int N,Q,i,j,k,l,val,f=1,set=1,st,ei,ej;
	   int mark[100001]={0};
	   int enemy[100001]={0};
	   vector < pair < pair < int , int > , int > > V;
	   vector <int> adj[100001];
	   cin>>N>>Q;
	   for(k=0;k<Q;k++)
	   {
         cin>>i>>j>>val;
         V.push_back(make_pair(make_pair(i,j),val));
         if(val==0)
         {
            if(mark[i]==0&&mark[j]==0)
            {
               mark[i]=set;
               mark[j]=set;
               set++;
               adj[set].push_back(i);
               adj[set].push_back(j);
            }
            else if(mark[i]!=0&&mark[j]==0)
            {
               mark[j]=mark[i];
               adj[mark[i]].push_back(j);
            }  
            else if(mark[i]==0&&mark[j]!=0)
            {
               mark[i]=mark[j];
               adj[mark[j]].push_back(i);
            }
            else if(mark[i]!=0&&mark[j]!=0&&mark[i]!=mark[j])
            {
               if(mark[i]<mark[j])
               {
                  st=mark[j];
                  for(l=0;l<adj[st].size();l++)
                  mark[adj[st][l]]=mark[i];
                  adj[st].clear();
               }
               else
               {
                  st=mark[i];
                  for(l=0;l<adj[st].size();l++)
                  mark[adj[st][l]]=mark[j];
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
           if(mark[i]!=0&&mark[j]!=0&&mark[i]==mark[j])
           {
           	 f=0;
           	 break;
           }
           else if(mark[i]!=0&&mark[j]!=0&&mark[i]!=mark[j])
           {
             if(enemy[mark[i]]==0&&enemy[mark[j]]==0)
             {	
               enemy[mark[i]]=mark[j];
               enemy[mark[j]]=mark[i];
             }
             else if(enemy[mark[i]]!=0&&enemy[mark[j]]==0)
             enemy[mark[j]]=mark[i];
             else if(enemy[mark[j]]!=0&&enemy[mark[i]]==0)
             enemy[mark[i]]=mark[j];
             else
             {
               if(enemy[mark[i]]==enemy[mark[j]])
               {
             	 f=0;
                 break;
               }
               else
               {
              	 ei=enemy[mark[i]];
              	 ej=enemy[mark[j]];
              	 enemy[ei]=ej;
              	 enemy[ej]=ei;
               }	
             }  	
           }
           else if(mark[i]!=0&&mark[j]==0)
           {
           	  if(enemy[mark[i]]!=0)
           	  mark[j]=enemy[mark[i]];
           	  else
           	  {
           	  	mark[j]=set++;
           	  	enemy[mark[i]]=mark[j];
           	  	enemy[mark[j]]=mark[i];
           	  }	
           }
           else if(mark[j]!=0&&mark[i]==0)
           {
           	  if(enemy[mark[j]]!=0)
           	  mark[i]=enemy[mark[j]];
           	  else
           	  {
           	  	mark[i]=set++;
           	  	enemy[mark[j]]=mark[i];
           	  	enemy[mark[i]]=mark[j];
           	  }	
           }
           else
           {
           	  mark[i]=set++;
           	  mark[j]=set++;
           	  enemy[mark[i]]=mark[j];
           	  enemy[mark[j]]=mark[i];
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