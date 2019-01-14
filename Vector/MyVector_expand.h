#pragma once

template <typename T> void MyVector<T> :: expand()
{
	if( _size < _capacity) return;
	if( _capacity < DEFAULT_CAPACITY) _capacity = DEFAULT_CAPACITY;
	
	T* oldElem = _elem;
	_capacity <<=1;
	_elem = new T[_capacity];
	
	for(int i=0;i<_size;i++)
		_elem[i] = oldElem[i];
	
	delete [] oldElem;
}