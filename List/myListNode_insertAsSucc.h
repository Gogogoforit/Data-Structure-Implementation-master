#pragma once
#define myListNodePosi(T) myListNode<T>*

typedef int Rank; 

template <typename T> 
myListNodePosi(T) myListNode<T>::insertAsSucc (T const &e) 
{ 
	myListNodePosi(T) x = new myListNode(e,this, succ);
	succ->pred = x;
	succ = x;
	return x;
}