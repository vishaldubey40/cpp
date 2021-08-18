#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int count=0,j,p=0,pt=0;
        string s;
        cin>>s;
        int l=s.length();
        int k=l;
        int arr[l];
        for(int i=0;i<l;i++){
            arr[i]=s[i];
            if(arr[i]==97){
                count++;
                j=i;
            }
        }
        if(count==1){
          while(l--){
              if(arr[j-1]-arr[j]==1){
                  delete arr[j]
                  j=j-1;
                  p++;
              }else
              if(arr[j+1]-arr[j]==1){
                  deleteElement(arr, j);
                  j=j+1;
                  pt++;
              }
          }
          if((pt+p)==k){
              cout<<"YES"<<endl;
          }else
          cout<<"NO"<<endl;
        }else
        cout<<"NO"<<endl;
    }
}