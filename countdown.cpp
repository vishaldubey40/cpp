#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        long long k ;
        cin>>k;
        string s;
          cin>>s;
        int count=0,t=0,c=0,a;
      
        for(long  i=0;i<k;i++){
              if(s[i]==48){
                  a=0;
              }
              if(s[i]==49){
                  a=1;
              }
              if(s[i]==50){
                  a=2;
              }
              if(s[i]==51){
                  a=3;
              }
              if(s[i]==52){
                  a=4;
              }
               if(s[i]==53){
                  a=5;
              }
               if(s[i]==54){
                  a=6;
              }
               if(s[i]==55){
                  a=7;
              }
               if(s[i]==56){
                  a=8;
              }
              if(s[i]==57){
                  a=9;
              }
              
              count+=a;
               
             if(s[i]!='0'){
                 t++;
                 
             }
        }
        if(s[k-1]!='0'){
            c=-1;
        }
       
        cout<<count+t+c<<endl;
    }
}
