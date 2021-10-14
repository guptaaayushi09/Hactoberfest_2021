#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define ull unsigned long long
#define pb push_back
#define pof pop_front
#define pbf push_front
#define ff first
#define ss second
#define mod 1000000007
#define endl "\n"
//Manish Rai
inline void fast()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

int main()
{
  fast();
  int tc;
  cin >> tc;
  while (tc--)
  {
    ll n,k;
    cin>>n>>k;
    vector<ll>v(k);
    for(ll i=0;i<k;i++)
    {
      cin>>v[i];
    }
    ll cat=0,count=0;;
    sort(v.begin(),v.end());
    for(int i=k-1;i>=0;i--)
    {
      if(n>=cat+n-v[i])
      {
        cat+=n-v[i];
        count++;
      }
    }
    ll flag=k-count;
    cat=0;
    ll res=count;
    for(ll i=flag;i<k;i++)
    {
       if(cat>=v[i])
       {
         cat+=n-v[flag++];
         res--;
       }
       cat+=n-v[i];
    }
     cout<<res<<endl;
  }
}
