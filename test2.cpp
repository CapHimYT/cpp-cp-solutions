#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vi>
#define vll vector<ll>
#define vvll vector<vll>
#define all(x) x.begin() , x.end()
#define loop(i,a,c) for(int i=a; i<c; i++)
#define rof(i,a,c) for(int i=a; i>=c; i--)
#define trav(a,x) for(auto& a: x)
#define sz(x) (int)x.size()
#define srt(...) ranges::sort(__VA_ARGS__)
#define pb push_back
#define pob pop_back
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define umii unordered_map<int,int>
#define usi unordered_set<int>
#define input(arr,n) loop(i,0,n){cin >> arr[i];}
#define MAX(a) *max_element(all(a))
#define MIN(a) *min_element(all(a))

template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    for(int i = 0; i < v.size(); ++i) {
        os << v[i];
        if(i != v.size() - 1) os << " ";
    }
    return os;
}

void solve(){
    
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}


