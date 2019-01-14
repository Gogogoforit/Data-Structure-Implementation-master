#pragma once 

template<class T>
void MyVector<T>::bubbleSort(Rank lo, Rank hi)
{
	while(!bubble(lo,hi--)); //this process will stop if the left part is already sorted
}

template<class T>
bool MyVector<T>::bubble(Rank lo, Rank hi)
{
	bool sorted = true;
	for(int i=lo;i<hi-1;i++)
	{
		if(_elem[i]>_elem[i+1])
		{
			sorted = false;
			T temp = _elem[i];
			_elem[i] = _elem[i+1];
			_elem[i+1] = temp;
		}
	}
	return sorted;
}