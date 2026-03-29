#include<iostream>

#include<vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        bool is=true;
        for(int i=0;i<n-k;i++){
            if(b[i]==-1){
                continue;
            }
            else if(a[i]!=b[i]){
                is=false;
                break;
            }
        }
        
        if(is==false){
            cout << "NO\n";
            continue;
        }
        vector<bool>ab(n+1,false);
        vector<bool>bb(n+1,false);
        for(int i = n - k; i < n; i++){
            ab[a[i]]=true;
        }

        for (int i = n - k; i < n; i++) {
        if (b[i] != -1) {
            
            if (!ab[b[i]]) {
                cout << "NO\n";
                
            }
            
            if (bb[b[i]]) {
                cout << "NO\n";
                
            }
            bb[b[i]] = true;
        }
    }


        
            cout << "YES\n";
        
        

    }
    return 0;
}