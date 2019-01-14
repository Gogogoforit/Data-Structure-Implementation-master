#pragma once 
#include "Fibonacci.h"

template<class T>
Rank MyVector<T>::fibSearch(T*A, T const &e, Rank lo, Rank hi) const
{
	Fibonacci fib(hi-lo);
	
	while(lo<hi){
		while(hi-lo<fib.get()) 
		{
			fib.prev();
		}
		
		Rank mi = lo + fib.get()-1;
		if(e<A[mi])
			hi = mi;
		else if (e>A[mi])
			lo = mi+1；
		else 
			return mi;
	}
	return -1; //fail
}