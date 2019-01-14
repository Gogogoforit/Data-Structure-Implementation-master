#pragma once 

template<class T>
Rank MyVector<T>::insert(Rank r, T const&e)
{
	expand();
	for(int i =_size;i>r;i--—)
		_elem[i] = _elem[i-1];
	_elem[r] = e;
	_size++;
	return r;
}