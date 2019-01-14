#pragma once 

template<class T>
Rank MyVector<T>::binSearch2(T*A, T const &e, Rank lo, Rank hi) const
{
	while(1 < hi -lo) 
	{
		Rank mi = (lo + hi)>>1;
		( e < A[mi] ) ? hi = mi : lo = mi;
	}
	return (e==A[lo]) ? lo : -1; //fail
}