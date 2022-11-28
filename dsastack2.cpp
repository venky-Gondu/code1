#include<iostream>
using namespace std;
const int MAX=10;
class Stack{
    private :
    int arr[];
    int top;
    public :
    stack();
    void push(int item);
    int pop();
    
};//instialize data numbers
 Stack ::stack(){
    arr=new int[MAX];
    top=-1;
}//add an element to the stack
void Stack :: push(int item){
//check weather stack is full or not
if (top==MAX){
    cout<<"stack is full"<<endl;
    return;
}else{
top++;
arr[top]=item;}

}
//extracts elements from stack
int Stack :: pop(){
    //check weather stack is empty or not
    if(top==-1){
cout<<"stack is empty"<<endl;
return 0;
    }else{
int data=arr[top];
top--;
return data;
    }

}//implementing main method in code 
int main (){
Stack s;
s.push(4);
s.push(5);
s.push(8);
s.push(7);
s.push(6);
s.push(1);
s.push(46);
s.push(67);
s.push(45);
s.push(56);
int i=s.pop();
cout<<i<<endl;
i=s.pop();
cout<<i<<endl;
}