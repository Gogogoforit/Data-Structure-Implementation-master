#pragma once 

template<class T>
int MyVector<T>::remove(Rank lo, Rank hi)
{
	if(lo == hi) return 0;
	while(hi<_size)
		_elem[lo++] = _elem[hi++];
	_size = lo;
	return hi-lo;
}