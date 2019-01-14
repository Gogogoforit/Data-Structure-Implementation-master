#pragma once
#define myListNodePosi(T) myListNode<T>*
#include "myListNode_insertAsPred.h"
#include "myListNode_insertAsSucc.h"
typedef int Rank; 

template <typename T> class myListNode { 
public:
	T data;
	myListNodePosi(T) pred; //pointer to the former one
	myListNodePosi(T) succ; //pointer to the successive one
	
	myListNode(){}
	myListNode(T e, myListNodePosi(T) p = NULL, myListNodePosi(T) s = NULL): 
	data(e),pred(p),succ(s){}
	
	myListNodePosi(T) insertAsPred( T const &e);
	myListNodePosi(T) insertAsSucee( T const &e);
}