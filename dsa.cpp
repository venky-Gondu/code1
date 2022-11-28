//intialise variables throughs methods
#include<iostream>
using namespace std;
class A{
    
    public:
    int id;//creating variable for id
    string name;
    void insert(int i,string n){
        id=i;
        name=n;
    }void display(){
        cout<<id<<""<<name<<endl;
    }};
int main(void){
    A s1;//creating object for class
    A s2;
    s1.insert(201,"ravi");
    s2.insert(301,"dileep");
    s1.display();
    s2.display();
    return 0;

  
}
    