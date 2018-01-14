#include <bits/stdc++.h>
using namespace std;
int main()
{
   int T;
   cin>>T;
   while(T--)
   {
      int n,i,j,flag=1;
      int mat[2][500];
      char ch;
      cin>>n;
      for(i=0;i<2;i++)
      for(j=0;j<n;j++)
      {
         cin>>ch;
         if(ch=='#')
         mat[i][j]=1;
         else
         mat[i][j]=0;   
      }
      int pr1=-1,pr2=-1,fg=0;
      for(i=0;i<n;i++)
      {
         int temp=mat[0][i]+mat[1][i];
         switch(temp)
         {
            case 2 : pr1=1;pr2=1;fg=3;
                     break;

            case 1 : if(fg==1)
                     {
                       if(mat[0][i-1]-mat[0][i]!=0)
                       {
                        flag=0;
                        break;
                       } 
                     }
                     fg=1;
                     break;

            case 0 : if(i!=n-1&&(fg==1||fg==3))
                     {
                       while(i<n)
                       {
                         if(mat[0][i]+mat[1][i]!=0)
                         {
                            flag=0;
                            break;
                         }  
                         i++;
                       } 
                     } 
                     fg=2; 
                     break;
         }
         if(flag==0)
         break;   
      }   

      if(flag)
      cout<<"yes";   
      else
      cout<<"no";

      cout<<"\n";   
   }
   return 0;
}