#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,a;
        cin>>n>>a;
        int k=sqrt(n);
        int ans=k*a;
        cout<<ans<<endl;
    }
}