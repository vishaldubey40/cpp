#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]!=arr[i+1]){
                if(i!=0){
                    if(arr[i-1]!=arr[i]){
                        cout<<i+1<<endl;
                    }
                }else
              {  if((arr[i]!=arr[i+1])&&(arr[i]!=arr[i+2]))
                {cout<<i+1<<endl;
            }}}
        }
    }
}