#pragma once
#define myListNodePosi(T) myListNode<T>*

typedef int Rank; 

template <typename T> 
myListNodePosi(T) myListNode<T>::insertAsPred (T const &e) 
{ 
	myListNodePosi(T) x = new myListNode(e, pred, this);
	pred->succ = x;
	pred = x;
	return x;
}