/// I had solved that by two greedy choice........both are shown here........


#include<bits/stdc++.h>
using namespace std;
#define LOL ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define llu long long unsigned int
#define pf printf
#define sf scanf
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int ,int>
//const int sz=
int main()
{
    LOL
    ll a,b,c,i,j,k,q,p,x,y,sum,ct,ct1,m,l,r,x1,y1,mn,n,mx,ans,h,sum1,len,in,L,R;
    char ch,ch1;
    double d;
    string str1,str2,str;
    bool bl,bl1;
    int cs=1,t;
    ll big[110];
    ll small[110];
    cin>>t;
    ll dist;
    while(cs<=t)
    {

          cin>>n>>dist;
          ans=0ll;
          p=0,q=0;
          for(i=0;i<n;i++){
            cin>>ch>>ch1>>x;
            if(ch=='B') big[p++]=x;
            else small[q++]=x;
          }
          ll l1=0ll,l2=0ll,siz;
         vector<ll> test;
         j=0;
         for(i=0;i<p;i++){
            while(j<q && small[j]<=big[i]){
                test.pb(small[j]);
                ++j;
            }
            siz=test.size();
            for(k=0;k<siz;k++){
                if(1&k){
                    ans=max(ans,abs(test[k]-l1));
                    l1=test[k];
                }
                else {
                    ans=max(ans,abs(test[k]-l2));
                    l2=test[k];
                }
            }
            test.clear();
            ans=max(ans,abs(big[i]-l1));
            ans=max(ans,abs(big[i]-l2));
            l1=l2=big[i];
         }

         for(i=0;j<q;j++,i++){
            if(1 & i) {
                ans=max(ans,abs(small[j]-l1));
                l1=small[j];
            }
            else  {
                    ans=max(ans,abs(small[j]-l2));
            l2=small[j];
            }
         }
         ans=max(ans,abs(dist-l1));
         ans=max(ans,abs(dist-l2));
        cout<<"Case "<<cs<<": "<<ans<<endl;
        ++cs;
    }


}



//Code :  2

#include<bits/stdc++.h>
using namespace std;
#define LOL ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define llu long long unsigned int
#define pf printf
#define sf scanf
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int ,int>
//const int sz=
int main()
{
    LOL
    ll a,b,c,i,j,k,q,p,x,y,sum,ct,ct1,m,l,r,x1,y1,mn,n,mx,ans,h,sum1,len,in,L,R;
    char ch,ch1;
    double d;
    string str1,str2,str;
    bool bl,bl1;
    int cs=1,t;
    cin>>t;
    ll dist;
    vector<ll>  even;
    vector<ll>  odd;
    while(cs<=t)
    {

          cin>>n>>dist;
          even.clear();
          odd.clear();
          p=0;
          ans=0ll;
          odd.pb(0ll);
          even.pb(0ll);
          for(i=0;i<n;i++){
            cin>>ch>>ch1>>x;
            if(ch=='B') {
                even.pb(x);
                odd.pb(x);
                p=0;
            }
            else{
                if(p & 1) {
                odd.pb(x);
                ++p;
                }
                else{
                    even.pb(x);
                    ++p;
                }
            }
          }

          even.pb(dist);
          ll siz=even.size();
          for(i=1;i<siz;i++){
            ans=max(ans,even[i]-even[i-1]);
          }
          odd.pb(dist);
          siz=odd.size();
          for(i=1;i<siz;i++){
            ans=max(ans,(odd[i]-odd[i-1]));
          }

        cout<<"Case "<<cs<<": "<<ans<<endl;
        ++cs;
    }


}

