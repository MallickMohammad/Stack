#include <iostream>
#include "StackType.h"
#include "StackType.cpp"
using namespace std;
int main()
{
StackType<int> stack1;
StackType<int> stack2;
if(stack1.IsEmpty())
{
    cout<<"Stack is empty"<<endl;
}
else{
    cout<<"Stack is not empty"<<endl;
}
stack1.Push(5);
stack1.Push(7);
stack1.Push(4);
stack1.Push(2);
if(stack1.IsEmpty())
{
    cout<<"Stack is empty"<<endl;
}
else{
    cout<<"Stack is not empty"<<endl;
}

 
    while(!stack1.IsEmpty()){
        int temp=stack1.Top();
        stack1.Pop();
        stack2.Push(temp);
    }
    /*while(!stack2.IsEmpty()){
        cout<<stack2.Top()<<endl;
        
        stack2
    }*/
    stack2.printStack();
    stack2.Push(3);
    /*while(!stack2.IsEmpty()){
        cout<<stack2.Top()<<endl;
        stack2.Pop();
    }*/
    stack2.printStack();
    if(stack2.IsEmpty())
{
    cout<<"Stack is empty"<<endl;
}
else{
    cout<<"Stack is not empty"<<endl;
}
stack2.Pop();
stack2.Pop();
cout<<stack2.Top()<<endl;

    

return 0;
}
