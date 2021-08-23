#include <iostream>

using namespace std;
int fun(){
    static int x=20;
    cout<<x;
x++;
    
}
int main() {
   
    fun();
    fun();
    fun();
}
