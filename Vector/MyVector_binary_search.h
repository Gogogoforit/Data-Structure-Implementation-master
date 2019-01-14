#pragma once 

template<class T>
Rank MyVector<T>::binSearch(T*A, T const &e, Rank lo, Rank hi) const
{
	while(lo<hi) 
	{
		Rank mi = (lo + hi)>>1;
		if( e < A[mi] ) hi = mi;
		else if( A[mi] < e) lo = mi+1;
		else 
			return mi;
	}
	
	return -1; //fail
}