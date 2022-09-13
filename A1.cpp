#include <bits/stdc++.h>
using namespace std;
// using namespace std::chrono;
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long 
#define ull unsigned long long 
#define ld long double
#define vt vector
#define pb push_back
#define pob pop_back
#define all(c) c.begin(),c.end()
#define each(x,a) for(auto x:a)
#define sz(x) (ll)(x).size()
ll mod1=1000000007;
ll bit_arr[32];
void solve(){
    ll n;
  cin >> n;
  ll sum =0;
   map<ll,ll> x,y;
  for(int i=0;i<n;i++){
    int u,v;
    cin >> u >> v;
      x[u]++;
      y[v]++;
  }
  
  ll q;
  cin >> q;

  while(q--){
    ll u,v;
    cin >> u >> v;
    for(auto i:x){
       sum = (sum + 1ll*x[i.first]*(i.first-u)*(i.first-u))%mod1;
    }
     for(auto i:y){
       sum = (sum + 1ll*y[i.first]*(i.first-v)*(i.first-v))%mod1;
    }

  }
  cout<<sum;
}
int main(){
    // auto start = high_resolution_clock::now();
    #ifndef ONLINE_JUDGE
    freopen("ip.txt","r",stdin);
    freopen("op.txt","w",stdout);
    #endif
    FastIO;
    ll t;
    ll i=1;
    cin>>t;
    while(t--){
    cout<<"Case #"<<i<<": ";
    solve();
    cout<<"\n";
    i++;
    }
    //  auto stop = high_resolution_clock::now();
    //   auto duration = duration_cast<microseconds>(stop - start);cout << "Time taken by function: "
    //      << duration.count() << " microseconds" << endl;
    return 0;
}
