#include "StackType.h"
#include <iostream>
using namespace std;

template <class ItemType>
StackType<ItemType>::StackType()
{
    length=0;
    top = -1;
}
template <class ItemType>
bool StackType<ItemType>::IsEmpty()
{
return (length ==0);
}
template <class ItemType>
bool StackType<ItemType>::IsFull()
{
return (top == MAX_ITEMS-1);
}
template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem)
{
if( IsFull() ) throw FullStack();
top++;
length++;
items[top] = newItem;
}
template <class ItemType>
void StackType<ItemType>::Pop()
{
if( IsEmpty() ) throw EmptyStack();
top--;
length--;
}
template <class ItemType>
ItemType StackType<ItemType>::Top()
{
if (IsEmpty()) throw EmptyStack();
return items[top];
}
template <class ItemType>
ItemType StackType<ItemType>::getnext()
{
    top++;
    ItemType t=items[top];
    return t;
}
template <class ItemType>
void StackType<ItemType>::printStack(){
    top=-1;
    while(top!=length-1)
    {
        cout<<getnext()<<endl;
    }
    top=-1;
}
    bool is_balanced_parentheses(string input_string) {
    StackType<char> s;
    for (char c : input_string) {
        if (c == '(') {
            s.Push(c);
        } else if (c == ')') {
            if (s.IsEmpty()) {
                return false;
            }
            s.Pop();
        }
    }
    return s.IsEmpty();
}
    
