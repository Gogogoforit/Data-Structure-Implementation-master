#pragma once
#define ListNodePosi(T) ListNode<T>*
#include "myListNode_insertAsPred.h"
typedef int Rank; 

template <typename T> class ListNode { 
public:
	T data;
	ListNodePosi(T) pred; //pointer to the former one
	ListNodePosi(T) succ; //pointer to the successive one
	
	ListNode(){}
	ListNode(T e, ListNodePosi(T) p = NULL, ListNodePosi(T) s = NULL): 
	data(e),pred(p),succ(s){}
	
	ListNodePosi(T) insertAsPred( T const &e);
	ListNodePosi(T) insertAsSucee( T const &e);
}