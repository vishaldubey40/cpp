#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,j=0,k=0,l,count=0;;
        cin>>n;
        string s,ta;
        cin>>s>>ta;
        for(int i=0;i<n;i++){
            j+=s[i];
            k+=ta[i];
        }
        
        if(j==0||k==0){
            cout<<"0"<<endl;
        }else
        {  l=0;
            for(int i=0;i<n;i++){
                if(s[i]=='1'&&l!=n-1){
                    for(int y=l;y<n;y++){
                        if(ta[y]=='1'){
                            count++;
                            break;
                        }
                        l=y+1;
                    }
                }
            }
            cout<<count<<endl;
        }
    }
}