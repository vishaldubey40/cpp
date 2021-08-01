#include<bits/stdc++.h>
#define ll long long
using namespace std;

 int main(){
ll t;
 cin>>t;
 while(t--){
 ll n,k,l,m;
 cin>>n;
 if(n>=1&&n<=6){
 cout<<"15"<<endl;
 }else
 if(n%2==0){
 k=n/2;
 l=k*5;
 cout<<l<<endl;}
 else
 { k=(n+1)/2;
   l=k*5;
   cout<<l<<endl;
 }
 }
 }
