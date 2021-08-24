#include<bits/stdc++.h>

using namespace std;

int main() {
    int t,count=0,count1=0;
    cin>>t;
        string n;
        cin>>n;
        for(int i=0;i<t;i++){
            if(n[i]=='1'){
                count++;
            }else
            count1++;
        }
        if(count==count1){
            cout<<"0"<<endl;
        }else
        if(count>count1){
            cout<<t-2*count1<<endl;
        }else
        cout<<t-2*count<<endl;
        
    }
