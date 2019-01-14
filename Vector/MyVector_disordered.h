#pragma once 

template<class T>
int MyVector<T>::disordered() const;
{
	int n = 0;
	for(int i = 1; i < _size;i++)
	{
		 if(_elem[i-1]>_elem[i])
			 n++;
	}
	return n;
}