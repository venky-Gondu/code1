#include<iostream>
using namespace std;
#define SIZE 10
void push();
void pop();
void peep();
void display();
int stack[100],top=-1,int ele;
int main(){
    int ch;
    clrscr();
    while(1){
        cout<<"\nMENU"<<endl;
        cout<<"\n1.push\n2.pop\n3.peep\n4.display\n5.exit"<<endl;
        cin>>ch;
        switch(ch){
           case 1: push();
				break;
			case 2: pop();
				break;
			case 3: peep();
				break;
			case 4: display();
				break;
		//	default:exit( );

        }
    }void push(){
        if( top==SIZE-1)
		cout<<"\nStack  is full"<<endl;
	else
	{
		top++;
		cout<<"\nEnter the element to be inserted into the stack"<<endl;
		cin>>ele;
		stack[top]=ele;
	}

    }void pop(){
        if( top==-1)
		cout<<"\n Stack is empty"<<endl;
	else
	{
		ele=stack[top];
		cout<<"\nThe deleted element from the stack is"<<ele<<endl;
		top--;
    }
}void peep(){
    if( top==-1)
		cout<<"\n Stack is empty"<<endl;
	else
	{
		ele=stack[top];
		cout<<"\nThe deleted element from the stack is"<<ele<<endl;
		top--;
}}void  display()
{
	int  i;
	if( top==-1)
		cout<<"\nStack  is empty";
	else
	{
			cout<<"\nThe elements of the stack are:\n"<<endl;
  			for(i=top;i>=0;i--)
				cout<<stack[i]<<endl;
	}

}}