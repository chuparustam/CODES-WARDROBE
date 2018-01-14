#include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        long long int t,n,l,a,b,sum=0,j;
        long long int ans=0;
        cin>>t;
        while(t--)
        {
            long long int ans1=0;
            sum=0;
            cin>>n>>l>>a>>b;
            long long int arr[n],i,ans=0,c,d;
            c=a;
            d=b;
            for(i=0;i<n;i++)
            {
                cin>>arr[i];
                sum=sum+arr[i];
            }
            sort(arr,arr+n);
            if((n*l)+a==b)
            {
                for(i=0;i<n;i++)
                {
                    ans=ans+abs(arr[i]-a);
                    a=a+l;
                }
            }
            else
            {
               long long int diff=b-a-n*l;
               if(arr[0]<a)
               {
               for(i=0;i<n;i++)
                {
                    ans=ans+abs(arr[i]-a);
                    a=a+l;
                }
               }
                else
                {
                    if(arr[0]-a>=diff)
                    {
                        for(i=0;i<n;i++)
                        {
                            ans=ans+abs(arr[i]-a-diff);
                            a=a+l;
                        }
                    }
                    else 
                    {
                        a=arr[0];
                        for(i=0;i<n;i++)
                        {
                            ans=ans+abs(arr[i]-a);
                            a=a+l;
                        }
                        b=min(arr[n-1],b-l);
                        for(i=n-1;i>=0;i--)
                        {
                            ans1=ans1+abs(arr[i]-b);
                            b=b-l;
                        }
                        ans=min(ans,ans1);
                        
                    }
                }
                ans1=0;
               if(arr[0]>=c&&arr[n-1]<=d)
               {
                long long int mn=n*arr[n-1],pos,k;
                for(j=n/2;j>=0;j--)
                {
                    if(abs(arr[j]*n-sum)<=mn&&arr[j]!=arr[j>0?j-1:0])
                       {
                        mn=abs(arr[j]*n-sum);
                        pos=j;
                         k=arr[pos];
                         ans1=0;
                for(i=pos;i>=0;i--)
                {
                    ans1=ans1+abs(k-arr[i]);
                    k=k-l;
                }
                k=arr[pos];
                for(i=pos;i<n;i++)
                {
                    ans1=ans1+abs(arr[i]-k);
                    k=k+l;
                }
               
               ans=min(ans,ans1);
               
                    }
                }
                for(j=n/2;j<n;j++)
                {
                    if(abs(arr[j]*n-sum)<=mn&&arr[j]!=arr[j>0?j-1:0])
                       {
                        mn=abs(arr[j]*n-sum);
                        pos=j;
                         k=arr[pos];
                         ans1=0;
                for(i=pos;i>=0;i--)
                {
                    ans1=ans1+abs(k-arr[i]);
                    k=k-l;
                }
                k=arr[pos];
                for(i=pos;i<n;i++)
                {
                    ans1=ans1+abs(arr[i]-k);
                    k=k+l;
                }
               
               ans=min(ans,ans1);
               
                    }
                }
             /*   long long int k=arr[pos];
                for(i=pos;i>=0;i--)
                {
                    ans1=ans1+abs(k-arr[i]);
                    k=k-l;
                }
                k=arr[pos];
                for(i=pos;i<n;i++)
                {
                    ans1=ans1+abs(arr[i]-k);
                    k=k+l;
                }
               
               ans=min(ans,ans1);
               */
            }
        }
            printf("%lld\n",ans);
        }
        return 0;
    