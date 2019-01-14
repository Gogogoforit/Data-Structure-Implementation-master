template<class T>
void MyVector<T>::copyForConstructor(T const *A, Rank lo, Rank hi)
{
	_capacity = (hi-lo)*2;
	_elem = new T[_capacity];
	_size = 0;
	while(lo<hi)
	{
		_elem[_size++] = A[lo++];
	}
}