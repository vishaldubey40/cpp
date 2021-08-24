#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int max=1;
        while(n!=0){
            int k=n%10;
            if(k>max){
                max=k;
            }
            n=n/10;
        }
    
      cout<<max<<endl;
    }
}