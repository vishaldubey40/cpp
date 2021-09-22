#include <bits/stdc++.h>


using namespace std;

class employee{
    public:
    string name;
    string company;
    int age;
    void introduceyourself(){
        cout<<"Name -"<<name<<endl;
        cout<<"company -"<<company<<endl;
        cout<<"age -"<<age<<endl;
    }
    };

int main() {
  employee employee1;
  employee1.name="vishal dubey";
  employee1.company="GOOGLE";
  employee1.age=18;
  employee1.introduceyourself();
}
