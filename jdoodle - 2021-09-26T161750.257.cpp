#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,p,x,y,count=0,count1=0;
        cin>>n>>p>>x>>y;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<p;i++){
            if(a[i]==1){
                count++;
            }else
            count1++;
        }
    cout<<(count*y)+(count1*x)<<endl;
        
    }
}