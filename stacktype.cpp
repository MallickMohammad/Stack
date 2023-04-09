#include "StackType.h"
#include <iostream>
using namespace std;

template <class ItemType>
StackType<ItemType>::StackType()
{
top = -1;
}
template <class ItemType>
bool StackType<ItemType>::IsEmpty()
{
return (top == -1);
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
items[top] = newItem;
}
template <class ItemType>
void StackType<ItemType>::Pop()
{
if( IsEmpty() ) throw EmptyStack();
top--;
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
    while(top!=MAX_ITEMS-1)
    {
        cout<<getnext()<<endl;
    }
    top=-1;
    
}