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
    ll n,k,i,count=1;
    cin>>n>>k;
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    if(n%2==0){
        if(n/2>k){
            cout<<"NO";
            return;
        }
        else{
            for(i=0;i<n-1;i++){
               if(count>2){
                 cout<<"NO";
                 return;
               }
               if(a[i]==a[i+1]){
                count++;
               }
               else{
                count=1;
               }
            }
            if(count>2){
                 cout<<"NO";
                 return;
            }
            cout<<"YES";
        }
    }
    else{
        if((n+1)/2>k){
            cout<<"NO";
            return;
        }
        else{
            for(i=0;i<n-1;i++){
               if(count>2){
                 cout<<"NO";
                 return;
               }
               if(a[i]==a[i+1]){
                count++;
               }
               else{
                count=1;
               }
            }
            if(count>2){
                 cout<<"NO";
                 return;
            }
            cout<<"YES";
        }
    }
}
int main(){
    // auto start = high_resolution_clock::now();
    // #ifdef ONLINE_JUDGE
    // freopen("ip.txt","r",stdin);
    // freopen("op.txt","w",stdout);
    // #endif
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
