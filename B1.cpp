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
    ll r,c,i,j;
    cin>>r>>c;
    char a[r][c];
    for(i=0;i<r;i++){
        string s;
        cin>>s;
        for(j=0;j<c;j++){
            a[i][j]=s[j];
        }
    }
    if(r==1){
       for(i=0;i<c;i++){
         if(a[0][i]=='^'){
            cout<<"Impossible\n";
            return;
         }
       }
       cout<<"Possible\n";
       for(i=0;i<c;i++){
            cout<<".";
       }
       cout<<"\n";
    }
    else if(c==1){
        for(i=0;i<r;i++){
         if(a[i][0]=='^'){
            cout<<"Impossible\n";
            return;
         }
       }
       cout<<"Possible\n";
       for(i=0;i<r;i++){
         cout<<".\n";
       }
    }
    else{
        cout<<"Possible";
        cout<<"\n";
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                cout<<"^";
            }
            cout<<"\n";
        }
    }
}
int main(){
    // auto start = high_resolution_clock::now();
    #ifndef ONLINE_JUDGE
    freopen("ip.txt","r",stdin);
    freopen("B1.txt","w",stdout);
    #endif
    FastIO;
    ll t;
    ll i=1;
    cin>>t;
    while(t--){
    cout<<"Case #"<<i<<": ";
    solve();
    // cout<<"\n";
    i++;
    }
    //  auto stop = high_resolution_clock::now();
    //   auto duration = duration_cast<microseconds>(stop - start);cout << "Time taken by function: "
    //      << duration.count() << " microseconds" << endl;
    return 0;
}
